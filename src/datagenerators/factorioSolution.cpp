#ifndef COMMON
#include "common.h" 
#endif

vector<Tool> FactorioSolution() {
  vector<Tool> factorio;
  Input ins;
  Input outs;
  // Now we add all the tools to the list

  Tool scrap_iron;
  scrap_iron.name = "scrap-iron";
  scrap_iron.id = "scrap-iron";
  scrap_iron.operations = {"scrap-iron"};
  scrap_iron.type = "tool";
  scrap_iron.inputs = {};
  scrap_iron.inTypes = {};

  ins.label = "input1";
  ins.type = "iron-plate";
  scrap_iron.inputs.push_back(ins);
  scrap_iron.inTypes.push_back("iron-plate");
  sort (scrap_iron.inTypes.begin(),scrap_iron.inTypes.end());
  scrap_iron.output = "scrap-iron";
  factorio.push_back(scrap_iron);

  Tool recover_steel;
  recover_steel.name = "recover-steel";
  recover_steel.id = "recover-steel";
  recover_steel.operations = {"recover-steel"};
  recover_steel.type = "tool";
  recover_steel.inputs = {};
  recover_steel.inTypes = {};

  ins.label = "input1";
  ins.type = "scrap-iron";
  recover_steel.inputs.push_back(ins);
  recover_steel.inTypes.push_back("scrap-iron");
  sort (recover_steel.inTypes.begin(),recover_steel.inTypes.end());
  recover_steel.output = "steel-plate";
  factorio.push_back(recover_steel);

  Tool create_slag;
  create_slag.name = "create-slag";
  create_slag.id = "create-slag";
  create_slag.operations = {"create-slag"};
  create_slag.type = "tool";
  create_slag.inputs = {};
  create_slag.inTypes = {};

  ins.label = "input1";
  ins.type = "iron-ore";
  create_slag.inputs.push_back(ins);
  create_slag.inTypes.push_back("iron-ore");
  sort (create_slag.inTypes.begin(),create_slag.inTypes.end());
  create_slag.output = "slag-iron";
  factorio.push_back(create_slag);

  Tool process_slag;
  process_slag.name = "process-slag";
  process_slag.id = "process-slag";
  process_slag.operations = {"process-slag"};
  process_slag.type = "tool";
  process_slag.inputs = {};
  process_slag.inTypes = {};

  ins.label = "input1";
  ins.type = "slag-iron";
  process_slag.inputs.push_back(ins);
  process_slag.inTypes.push_back("slag-iron");
  sort (process_slag.inTypes.begin(),process_slag.inTypes.end());
  process_slag.output = "processed-slag";
  factorio.push_back(process_slag);

  Tool form_steel;
  form_steel.name = "form-steel";
  form_steel.id = "form-steel";
  form_steel.operations = {"form-steel"};
  form_steel.type = "tool";
  form_steel.inputs = {};
  form_steel.inTypes = {};

  ins.label = "input1";
  ins.type = "processed-slag";
  form_steel.inputs.push_back(ins);
  form_steel.inTypes.push_back("processed-slag");
  sort (form_steel.inTypes.begin(),form_steel.inTypes.end());
  form_steel.output = "steel-plate";
  factorio.push_back(form_steel);

  Tool sulfur_alt_a;
  sulfur_alt_a.name = "sulfur-alt-a";
  sulfur_alt_a.id = "sulfur-alt-a";
  sulfur_alt_a.operations = {"sulfur-alt-a"};
  sulfur_alt_a.type = "tool";
  sulfur_alt_a.inputs = {};
  sulfur_alt_a.inTypes = {};

  ins.label = "input1";
  ins.type = "petroleum-gas";
  sulfur_alt_a.inputs.push_back(ins);
  sulfur_alt_a.inTypes.push_back("petroleum-gas");
  ins.label = "input2";
  ins.type = "water";
  sulfur_alt_a.inputs.push_back(ins);
  sulfur_alt_a.inTypes.push_back("water");
  sort (sulfur_alt_a.inTypes.begin(),sulfur_alt_a.inTypes.end());
  sulfur_alt_a.output = "sulfur";
  factorio.push_back(sulfur_alt_a);

  Tool sulfur_alt_b;
  sulfur_alt_b.name = "sulfur-alt-b";
  sulfur_alt_b.id = "sulfur-alt-b";
  sulfur_alt_b.operations = {"sulfur-alt-b"};
  sulfur_alt_b.type = "tool";
  sulfur_alt_b.inputs = {};
  sulfur_alt_b.inTypes = {};

  ins.label = "input1";
  ins.type = "petroleum-gas";
  sulfur_alt_b.inputs.push_back(ins);
  sulfur_alt_b.inTypes.push_back("petroleum-gas");
  ins.label = "input2";
  ins.type = "water";
  sulfur_alt_b.inputs.push_back(ins);
  sulfur_alt_b.inTypes.push_back("water");
  ins.label = "input3";
  ins.type = "coal";
  sulfur_alt_b.inputs.push_back(ins);
  sulfur_alt_b.inTypes.push_back("coal");
  sort (sulfur_alt_b.inTypes.begin(),sulfur_alt_b.inTypes.end());
  sulfur_alt_b.output = "sulfur";
  factorio.push_back(sulfur_alt_b);

  Tool alloy_metal;
  alloy_metal.name = "alloy-metal";
  alloy_metal.id = "alloy-metal";
  alloy_metal.operations = {"alloy-metal"};
  alloy_metal.type = "tool";
  alloy_metal.inputs = {};
  alloy_metal.inTypes = {};

  ins.label = "input1";
  ins.type = "copper-plate";
  alloy_metal.inputs.push_back(ins);
  alloy_metal.inTypes.push_back("copper-plate");
  ins.label = "input2";
  ins.type = "iron-plate";
  alloy_metal.inputs.push_back(ins);
  alloy_metal.inTypes.push_back("iron-plate");
  sort (alloy_metal.inTypes.begin(),alloy_metal.inTypes.end());
  alloy_metal.output = "copper-iron-alloy";
  factorio.push_back(alloy_metal);

  Tool press_ec;
  press_ec.name = "press-ec";
  press_ec.id = "press-ec";
  press_ec.operations = {"press-ec"};
  press_ec.type = "tool";
  press_ec.inputs = {};
  press_ec.inTypes = {};

  ins.label = "input1";
  ins.type = "copper-iron-alloy";
  press_ec.inputs.push_back(ins);
  press_ec.inTypes.push_back("copper-iron-alloy");
  sort (press_ec.inTypes.begin(),press_ec.inTypes.end());
  press_ec.output = "electronic-circuit";
  factorio.push_back(press_ec);
  return factorio;
}
