import json

jsonpath = "../data/emboss.json"
toolset  = "emboss"
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

# Now output it into the .cpp generate Tools format #lmayo
print('#ifndef COMMON\n#include "common.h" \n#endif\n')
print("vector<Tool> "+ toolset +"() {")
print("  vector<Tool> "+ toolset +";")
print("  Input ins;")
print("  Input outs;")
print("  // Now we add all the tools to the list")

def PrintOutput(inputs, recipe, ind = 2):
    for input in inputs:
        #print(' ' * ind + 'outs.label = "' + input['label'] + '";')
        #print(' ' * ind + 'outs.type = "'  + input['type']  + '";')
        #print(' ' * ind + recipe+'.outputs.push_back(outs);')
        print(' ' * ind + recipe+'.output = "'+input['type']+'";')

def PrintInput(inputs, recipe, ind = 2):
    for input in inputs:
        print(' ' * ind + 'ins.label = "' + input['label'] + '";')
        print(' ' * ind + 'ins.type = "'  + input['type']  + '";')
        print(' ' * ind + recipe+'.inputs.push_back(ins);')
        print(' ' * ind + recipe+'.inTypes.push_back("' + input['type']  + '");')
    #print(' '*ind + 'sort ('+ recipe+'.inputs.begin(),' + recipe+'.inputs.end());' )
    print(' '*ind + 'sort ('+ recipe+'.inTypes.begin(),' + recipe+'.inTypes.end());' )

# Quick and dirty rebrand a tool in order to not cause errors:
exceptions = ["union"]
def NameExceptions(tool):
    if tool["id"] in exceptions:
        tool["id"] = "emboss_" + tool["id"]


for t in tools:
    NameExceptions(t)
    print("")
    print(('  Tool ' +t['id']+ ';').replace('-', '_'))
    print('  ' +t['id'].replace('-', '_')+'.name = "' +t['id']+ '";')
    print('  ' +t['id'].replace('-', '_')+'.id = "' +t['id']+ '";')
    print('  ' +t['id'].replace('-', '_')+'.operations = {"' +t['id']+ '"};')
    # Type of the tool is either input or a tool
    print('  ' +t['id'].replace('-', '_')+'.type = "' +t['type']+ '";')

    print('  ' +t['id'].replace('-', '_')+'.inputs = {};')
    print('  ' +t['id'].replace('-', '_')+'.inTypes = {};')
    print("")

    PrintInput (t['inputs'], t['id'].replace('-', '_'))
    PrintOutput(t['outputs'], t['id'].replace('-', '_'))
    print('  '+ toolset +'.push_back('+t['id'].replace('-', '_')+');')
print('  return '+ toolset +';')
print('}')
