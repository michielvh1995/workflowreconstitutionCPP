import json

vanillaPath = "./src/data/factorioVanilla.json"
extendPath  = "./src/data/factorioExtend.json"

def Rename(dt):
    goal = {}
    goal["name"]        = dt["name"]
    goal["inputs"]      = inputs(dt["ingredients"])
    goal["outputs"]     = outputs(dt["results"])
    goal["description"] = "The recipe for " + dt["name"]
    goal["id"]          = dt["name"]
    goal["operations"]  = [dt["name"]]

    return goal

def outputs(outputlist):
    outputs = []

    for e,i in enumerate(outputlist):
        it = {"name" : i["name"],
              "type" : "resource" if i["name"] in baseResources else i["name"],
              "label": "output" + str(e+1),
              "amount": i["amount"]}

        outputs.append(it)

    return outputs


def inputs(inputlist):
    inputs = []

    for e,i in enumerate(inputlist):
        it = {"name" : i["name"],
              "type" : i["name"],
              "label": "input" + str(e+1),
              "amount": i["amount"]}

        inputs.append(it)

    return inputs

baseResources = [
    "iron-ore", "copper-ore", "coal", "stone", "wood",
    "heavy-oil", "crude-oil", "light-oil", "water", "petroleum-gas"
    ]

# ========================================================================= #
# ========================= Bundling  the Recipes ========================= #
# ========================================================================= #

def GetAllRecipesDict():
    # Load the base-game recipes
    recipes = {}
    with open(vanillaPath,'r') as fVf:
        data = json.load(fVf)
        for k in data["recipes"].keys():
            recipes[k] = Rename(data["recipes"][k])
            recipes[k]["type"] = "tool"

    # Load my set of alternative recipes
    altRecipes = {}
    with open(extendPath,'r') as fVf:
        data = json.load(fVf)
        altRecipes = data["recipes"]
        for k in data["recipes"].keys():
            recipes[k] = altRecipes[k]
            recipes[k]["type"] = "tool"

    return recipes

def ConvertDictToRecipeList(recipes):
    tools = []
    for k in recipes.keys():
        tools.append(recipes[k])
    return tools

# ========================================================================= #
# ======================= Bundling Recipes per Item ======================= #
# ========================================================================= #


def GetItemRecipes(toolset):
    items = {}
    for i in toolset.keys():
        if not i in items.keys():
            items[toolset[i]["outputs"][0]["name"]] = [toolset[i]["name"]]
        else:
            items[toolset[i]["outputs"][0]["name"]].append([toolset[i]["name"]])
    return items


def AppendItemRecipes(recipes, toolset):
    """ Given a dictionary of recipes and a toolset, it adds those tools to the dictionary
    """
    for i in toolset.keys():
        if not toolset[i]["outputs"][0]["name"] in recipes.keys():
            recipes[toolset[i]["outputs"][0]["name"]] = [toolset[i]["name"]]
        else:
            recipes[toolset[i]["outputs"][0]["name"]].append(toolset[i]["name"])
    return recipes




recipes = GetAllRecipesDict()

# Now fix the resources
for r in baseResources:
    it = {"name"    : r,
          "id"      : r,
          "type"    : "resource",
          "inputs"  : [],
          "outputs" : [{
            "label" : "outpu1",
            "type"  : r,
            "name"  : r
          }]
    }
    recipes[r] = it
#
tools = ConvertDictToRecipeList(recipes)
# Now output it into the .cpp generate Tools format #lmayo
print('#ifndef COMMON\n#include "common.h" \n#endif\n')
print("vector<Tool> Factorio() {")
print("  vector<Tool> factorio;")
print("  Input ins;")
print("  Input outs;")
print("  // Now we add all the tools to the list")

def PrintOutput(inputs, recipe, ind = 2):
    for input in inputs:
        print(' ' * ind + 'outs.label = "' + input['label'] + '";')
        print(' ' * ind + 'outs.type = "'  + input['type']  + '";')
        print(' ' * ind + recipe+'.outputs.push_back(outs);')
    #print(' '*ind + 'sort ('+ recipe+'.outputs.begin(),' + recipe+'.outputs.end());' )

def PrintInput(inputs, recipe, ind = 2):
    for input in inputs:
        print(' ' * ind + 'ins.label = "' + input['label'] + '";')
        print(' ' * ind + 'ins.type = "'  + input['type']  + '";')
        print(' ' * ind + recipe+'.inputs.push_back(ins);')
        print(' ' * ind + recipe+'.inTypes.push_back("' + input['type']  + '");')
    #print(' '*ind + 'sort ('+ recipe+'.inputs.begin(),' + recipe+'.inputs.end());' )
    print(' '*ind + 'sort ('+ recipe+'.inTypes.begin(),' + recipe+'.inTypes.end());' )

for t in tools:
    print()
    print(('  Tool ' +t['id']+ ';').replace('-', '_'))
    print('  ' +t['id'].replace('-', '_')+'.name = "' +t['id']+ '";')
    print('  ' +t['id'].replace('-', '_')+'.id = "' +t['id']+ '";')
    print('  ' +t['id'].replace('-', '_')+'.operation = "' +t['id']+ '";')
    # Type of the tool is either input or a tool
    print('  ' +t['id'].replace('-', '_')+'.type = "' +t['type']+ '";')

    print('  ' +t['id'].replace('-', '_')+'.inputs = {};')
    print('  ' +t['id'].replace('-', '_')+'.inTypes = {};')
    print('  ' +t['id'].replace('-', '_')+'.outputs = {};')
    print()

    PrintInput (t['inputs'], t['id'].replace('-', '_'))
    PrintOutput(t['outputs'], t['id'].replace('-', '_'))
    print('  factorio.push_back('+t['id'].replace('-', '_')+');')
print('  return factorio;')
print('}')
