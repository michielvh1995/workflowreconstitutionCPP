import json

jsonpath = "../data/biotools.json"
toolset  = "biotools"
# ========================================================================= #
# ========================= Bundling  the Recipes ========================= #
# ========================================================================= #


def ReadToolset(filepath, name):
    """ Read the toolset.json """
    tools = []

    with open(filepath, 'r') as fil:             # Open the file
        data = json.load(fil)
        for k in data[name].keys():
            tools.append(data[name][k])  # Write the data into a list

    return tools


tools = ReadToolset(jsonpath, toolset)
tcnt = len(tools)

# Now output it into the .cpp generate Tools format #lmayo
print('#ifndef COMMON\n#include "common.h" \n#endif\n')
print("vector<Tool> "+ toolset +"() {")
print("")
print("// The retrieved biotools toolset consisted of " + str(tcnt) + " tools.")
print("")
print("  vector<Tool> "+ toolset +";")
print("  Input ins;")
print("  Input outs;")
print("  // Now we add all the tools to the list")


def PrintOutput(outputs, recipe, ind = 2):
    for output in outputs:
        print(' ' * ind + recipe +'.output = "' + output['type'] + '";')

def PrintInput(inputs, recipe, ind = 2):
    for input in inputs:
        print(' ' * ind + recipe +'.inTypes.push_back("' + input['type']  + '");')
    #print(' '*ind + 'sort ('+ recipe+'.inputs.begin(),' + recipe+'.inputs.end());' )
    print(' '*ind + 'sort ('+ recipe+'.inTypes.begin(),' + recipe+'.inTypes.end());' )

# Quick and dirty rebrand a tool in order to not cause errors:
def RenameExceptions(tool):
   """ This function renames the ID of a tool to a format usable by the C++ compiler
   """
   tool["id"] = tool["id"].replace('-','_')
   tool["id"] = tool["id"].replace(".", "_")

   if tool["id"][0] in ['0','1','2','3','4','5','6','7','8','9']:
      tool["id"] = "_" + tool["id"]
   
   return tool

for t in tools:
    # per tool make sure the name is not a reserved keyword
    RenameExceptions(t)

    if (len(t["inputs"]) == 0 or len(t["outputs"]) == 0):
        tcnt -= 1
        continue

    print("")
    print(('  Tool ' +t['id']+ ';').replace('-', '_'))
    print('  ' +t['id'].replace('-', '_')+'.id = "' +t['id']+ '";')
    print('  ' +t['id'].replace('-', '_')+'.operations = {"' +t['id']+ '"};')
    
    # Type of the tool is either input or a tool
    print('  ' +t['id'].replace('-', '_')+'.type = "' +t['type']+ '";')
    print("")

    # Generate the inputs 
    print('  ' +t['id'].replace('-', '_')+'.inTypes = {};')    
    PrintInput (t['inputs'], t['id'].replace('-', '_'))
    PrintOutput(t['outputs'], t['id'].replace('-', '_'))

    # Finish the whole thing for this one tool
    print('  '+ toolset +'.push_back('+t['id'].replace('-', '_')+');')

print('  return '+ toolset +';')
print('}')

print("")
print("//In total there were " + str(tcnt) + " tools output")
