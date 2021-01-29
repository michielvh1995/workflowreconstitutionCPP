import json

imagemagickpath = "../data/imagemagick.json"
datasetname = "imagemagick"

def Rename(dt):
    """ Rename the fields from the json file to the right format for the algorithm
    """
    goal = {}
    goal["name"]        = dt["name"]
    goal["inputs"]      = inputs(dt["inputs"])
    goal["outputs"]     = outputs(dt["outputs"])
    goal["description"] = dt["description"]
    goal["id"]          = dt["id"]
    goal["operations"]  = dt["operations"]
    goal["type"]        = dt["type"] if "type" in dt.keys() else "tool"

    return goal

def outputs(outputlist):
    outputs = []

    for e,i in enumerate(outputlist):
        it = {"name" : i["name"],
              "type" : i["type"],
              "label": "output" + str(e+1)
              }

        outputs.append(it)

    return outputs


def inputs(inputlist):
    inputs = []

    for e,i in enumerate(inputlist):
        it = {
              "name" : i["name"],
              "type" : i["type"],
              "label": "input" + str(e+1)
              }

        inputs.append(it)

    return inputs


# ========================================================================= #
# ========================= Bundling  the Recipes ========================= #
# ========================================================================= #

def ReadToolset(filepath, name):
    """ Read the toolset.json """
    tools = []

    with open(filepath, 'r') as fil:             # Open the file
        data = json.load(fil)
        for k in data[name].keys():
            tools.append(Rename(data[name][k]))  # Write the data into a list

    return tools


tools = ReadToolset(imagemagickpath, datasetname)


# Now output it into the .cpp generate Tools format #lmayo
print('#ifndef COMMON\n#include "common.h" \n#endif\n')
print("vector<Tool> "+ datasetname +"() {")
print("  vector<Tool> "+ datasetname +";")
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

for t in tools:
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
    print('  '+ datasetname +'.push_back('+t['id'].replace('-', '_')+');')
print('  return '+ datasetname +';')
print('}')
