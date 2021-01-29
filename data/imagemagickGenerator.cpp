#ifndef COMMON
#include "common.h" 
#endif

vector<Tool> imagemagick() {
  vector<Tool> imagemagick;
  Input ins;
  Input outs;
  // Now we add all the tools to the list

  Tool imagemagick_copy;
  imagemagick_copy.name = "imagemagick-copy";
  imagemagick_copy.id = "imagemagick-copy";
  imagemagick_copy.operations = {"imagemagick-copy"};
  imagemagick_copy.type = "tool";
  imagemagick_copy.inputs = {};
  imagemagick_copy.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_copy.inputs.push_back(ins);
  imagemagick_copy.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "string";
  imagemagick_copy.inputs.push_back(ins);
  imagemagick_copy.inTypes.push_back("string");
  sort (imagemagick_copy.inTypes.begin(),imagemagick_copy.inTypes.end());
  imagemagick_copy.output = "image";
  imagemagick.push_back(imagemagick_copy);

  Tool imagemagick_negate;
  imagemagick_negate.name = "imagemagick-negate";
  imagemagick_negate.id = "imagemagick-negate";
  imagemagick_negate.operations = {"imagemagick-negate"};
  imagemagick_negate.type = "tool";
  imagemagick_negate.inputs = {};
  imagemagick_negate.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_negate.inputs.push_back(ins);
  imagemagick_negate.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "string";
  imagemagick_negate.inputs.push_back(ins);
  imagemagick_negate.inTypes.push_back("string");
  sort (imagemagick_negate.inTypes.begin(),imagemagick_negate.inTypes.end());
  imagemagick_negate.output = "image";
  imagemagick.push_back(imagemagick_negate);

  Tool imagemagick_new;
  imagemagick_new.name = "imagemagick-new";
  imagemagick_new.id = "imagemagick-new";
  imagemagick_new.operations = {"imagemagick-new"};
  imagemagick_new.type = "tool";
  imagemagick_new.inputs = {};
  imagemagick_new.inTypes = {};

  ins.label = "input1";
  ins.type = "integer";
  imagemagick_new.inputs.push_back(ins);
  imagemagick_new.inTypes.push_back("integer");
  ins.label = "input2";
  ins.type = "integer";
  imagemagick_new.inputs.push_back(ins);
  imagemagick_new.inTypes.push_back("integer");
  ins.label = "input3";
  ins.type = "string";
  imagemagick_new.inputs.push_back(ins);
  imagemagick_new.inTypes.push_back("string");
  sort (imagemagick_new.inTypes.begin(),imagemagick_new.inTypes.end());
  imagemagick_new.output = "image";
  imagemagick.push_back(imagemagick_new);

  Tool imagemagick_resize_percentual;
  imagemagick_resize_percentual.name = "imagemagick-resize-percentual";
  imagemagick_resize_percentual.id = "imagemagick-resize-percentual";
  imagemagick_resize_percentual.operations = {"imagemagick-resize-percentual"};
  imagemagick_resize_percentual.type = "tool";
  imagemagick_resize_percentual.inputs = {};
  imagemagick_resize_percentual.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_resize_percentual.inputs.push_back(ins);
  imagemagick_resize_percentual.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "integer";
  imagemagick_resize_percentual.inputs.push_back(ins);
  imagemagick_resize_percentual.inTypes.push_back("integer");
  ins.label = "input3";
  ins.type = "string";
  imagemagick_resize_percentual.inputs.push_back(ins);
  imagemagick_resize_percentual.inTypes.push_back("string");
  sort (imagemagick_resize_percentual.inTypes.begin(),imagemagick_resize_percentual.inTypes.end());
  imagemagick_resize_percentual.output = "image";
  imagemagick.push_back(imagemagick_resize_percentual);

  Tool imagemagick_resize_absolute;
  imagemagick_resize_absolute.name = "imagemagick-resize-absolute";
  imagemagick_resize_absolute.id = "imagemagick-resize-absolute";
  imagemagick_resize_absolute.operations = {"imagemagick-resize-absolute"};
  imagemagick_resize_absolute.type = "tool";
  imagemagick_resize_absolute.inputs = {};
  imagemagick_resize_absolute.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_resize_absolute.inputs.push_back(ins);
  imagemagick_resize_absolute.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "integer";
  imagemagick_resize_absolute.inputs.push_back(ins);
  imagemagick_resize_absolute.inTypes.push_back("integer");
  ins.label = "input3";
  ins.type = "integer";
  imagemagick_resize_absolute.inputs.push_back(ins);
  imagemagick_resize_absolute.inTypes.push_back("integer");
  ins.label = "input4";
  ins.type = "string";
  imagemagick_resize_absolute.inputs.push_back(ins);
  imagemagick_resize_absolute.inTypes.push_back("string");
  sort (imagemagick_resize_absolute.inTypes.begin(),imagemagick_resize_absolute.inTypes.end());
  imagemagick_resize_absolute.output = "image";
  imagemagick.push_back(imagemagick_resize_absolute);

  Tool imagemagick_crop;
  imagemagick_crop.name = "imagemagick-crop";
  imagemagick_crop.id = "imagemagick-crop";
  imagemagick_crop.operations = {"imagemagick-crop"};
  imagemagick_crop.type = "tool";
  imagemagick_crop.inputs = {};
  imagemagick_crop.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_crop.inputs.push_back(ins);
  imagemagick_crop.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "string";
  imagemagick_crop.inputs.push_back(ins);
  imagemagick_crop.inTypes.push_back("string");
  ins.label = "input3";
  ins.type = "integer";
  imagemagick_crop.inputs.push_back(ins);
  imagemagick_crop.inTypes.push_back("integer");
  ins.label = "input4";
  ins.type = "integer";
  imagemagick_crop.inputs.push_back(ins);
  imagemagick_crop.inTypes.push_back("integer");
  ins.label = "input5";
  ins.type = "integer";
  imagemagick_crop.inputs.push_back(ins);
  imagemagick_crop.inTypes.push_back("integer");
  ins.label = "input6";
  ins.type = "integer";
  imagemagick_crop.inputs.push_back(ins);
  imagemagick_crop.inTypes.push_back("integer");
  sort (imagemagick_crop.inTypes.begin(),imagemagick_crop.inTypes.end());
  imagemagick_crop.output = "image";
  imagemagick.push_back(imagemagick_crop);

  Tool imagemagick_draw;
  imagemagick_draw.name = "imagemagick-draw";
  imagemagick_draw.id = "imagemagick-draw";
  imagemagick_draw.operations = {"imagemagick-draw"};
  imagemagick_draw.type = "tool";
  imagemagick_draw.inputs = {};
  imagemagick_draw.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_draw.inputs.push_back(ins);
  imagemagick_draw.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "string";
  imagemagick_draw.inputs.push_back(ins);
  imagemagick_draw.inTypes.push_back("string");
  ins.label = "input3";
  ins.type = "string";
  imagemagick_draw.inputs.push_back(ins);
  imagemagick_draw.inTypes.push_back("string");
  sort (imagemagick_draw.inTypes.begin(),imagemagick_draw.inTypes.end());
  imagemagick_draw.output = "image";
  imagemagick.push_back(imagemagick_draw);

  Tool user_input_string;
  user_input_string.name = "user-input-string";
  user_input_string.id = "user-input-string";
  user_input_string.operations = {"user-input-string"};
  user_input_string.type = "resource";
  user_input_string.inputs = {};
  user_input_string.inTypes = {};

  sort (user_input_string.inTypes.begin(),user_input_string.inTypes.end());
  user_input_string.output = "string";
  imagemagick.push_back(user_input_string);

  Tool user_input_int;
  user_input_int.name = "user-input-int";
  user_input_int.id = "user-input-int";
  user_input_int.operations = {"user-input-int"};
  user_input_int.type = "resource";
  user_input_int.inputs = {};
  user_input_int.inTypes = {};

  sort (user_input_int.inTypes.begin(),user_input_int.inTypes.end());
  user_input_int.output = "integer";
  imagemagick.push_back(user_input_int);

  Tool imagemagick_draw_circle;
  imagemagick_draw_circle.name = "imagemagick-draw-circle";
  imagemagick_draw_circle.id = "imagemagick-draw-circle";
  imagemagick_draw_circle.operations = {"imagemagick-draw-circle"};
  imagemagick_draw_circle.type = "tool";
  imagemagick_draw_circle.inputs = {};
  imagemagick_draw_circle.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_draw_circle.inputs.push_back(ins);
  imagemagick_draw_circle.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "integer";
  imagemagick_draw_circle.inputs.push_back(ins);
  imagemagick_draw_circle.inTypes.push_back("integer");
  ins.label = "input3";
  ins.type = "integer";
  imagemagick_draw_circle.inputs.push_back(ins);
  imagemagick_draw_circle.inTypes.push_back("integer");
  ins.label = "input4";
  ins.type = "string";
  imagemagick_draw_circle.inputs.push_back(ins);
  imagemagick_draw_circle.inTypes.push_back("string");
  sort (imagemagick_draw_circle.inTypes.begin(),imagemagick_draw_circle.inTypes.end());
  imagemagick_draw_circle.output = "image";
  imagemagick.push_back(imagemagick_draw_circle);

  Tool imagemagick_draw_square;
  imagemagick_draw_square.name = "imagemagick-draw-square";
  imagemagick_draw_square.id = "imagemagick-draw-square";
  imagemagick_draw_square.operations = {"imagemagick-draw-square"};
  imagemagick_draw_square.type = "tool";
  imagemagick_draw_square.inputs = {};
  imagemagick_draw_square.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_draw_square.inputs.push_back(ins);
  imagemagick_draw_square.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "integer";
  imagemagick_draw_square.inputs.push_back(ins);
  imagemagick_draw_square.inTypes.push_back("integer");
  ins.label = "input3";
  ins.type = "integer";
  imagemagick_draw_square.inputs.push_back(ins);
  imagemagick_draw_square.inTypes.push_back("integer");
  ins.label = "input4";
  ins.type = "integer";
  imagemagick_draw_square.inputs.push_back(ins);
  imagemagick_draw_square.inTypes.push_back("integer");
  ins.label = "input5";
  ins.type = "integer";
  imagemagick_draw_square.inputs.push_back(ins);
  imagemagick_draw_square.inTypes.push_back("integer");
  ins.label = "input6";
  ins.type = "colour";
  imagemagick_draw_square.inputs.push_back(ins);
  imagemagick_draw_square.inTypes.push_back("colour");
  ins.label = "input7";
  ins.type = "string";
  imagemagick_draw_square.inputs.push_back(ins);
  imagemagick_draw_square.inTypes.push_back("string");
  sort (imagemagick_draw_square.inTypes.begin(),imagemagick_draw_square.inTypes.end());
  imagemagick_draw_square.output = "image";
  imagemagick.push_back(imagemagick_draw_square);

  Tool imagemagick_set_colour_red;
  imagemagick_set_colour_red.name = "imagemagick-set-colour-red";
  imagemagick_set_colour_red.id = "imagemagick-set-colour-red";
  imagemagick_set_colour_red.operations = {"imagemagick-set-colour-red"};
  imagemagick_set_colour_red.type = "tool";
  imagemagick_set_colour_red.inputs = {};
  imagemagick_set_colour_red.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_set_colour_red.inputs.push_back(ins);
  imagemagick_set_colour_red.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "string";
  imagemagick_set_colour_red.inputs.push_back(ins);
  imagemagick_set_colour_red.inTypes.push_back("string");
  sort (imagemagick_set_colour_red.inTypes.begin(),imagemagick_set_colour_red.inTypes.end());
  imagemagick_set_colour_red.output = "image";
  imagemagick.push_back(imagemagick_set_colour_red);

  Tool imagemagick_set_colour_green;
  imagemagick_set_colour_green.name = "imagemagick-set-colour-green";
  imagemagick_set_colour_green.id = "imagemagick-set-colour-green";
  imagemagick_set_colour_green.operations = {"imagemagick-set-colour-green"};
  imagemagick_set_colour_green.type = "tool";
  imagemagick_set_colour_green.inputs = {};
  imagemagick_set_colour_green.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_set_colour_green.inputs.push_back(ins);
  imagemagick_set_colour_green.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "string";
  imagemagick_set_colour_green.inputs.push_back(ins);
  imagemagick_set_colour_green.inTypes.push_back("string");
  sort (imagemagick_set_colour_green.inTypes.begin(),imagemagick_set_colour_green.inTypes.end());
  imagemagick_set_colour_green.output = "image";
  imagemagick.push_back(imagemagick_set_colour_green);

  Tool imagemagick_set_colour_blue;
  imagemagick_set_colour_blue.name = "imagemagick-set-colour-blue";
  imagemagick_set_colour_blue.id = "imagemagick-set-colour-blue";
  imagemagick_set_colour_blue.operations = {"imagemagick-set-colour-blue"};
  imagemagick_set_colour_blue.type = "tool";
  imagemagick_set_colour_blue.inputs = {};
  imagemagick_set_colour_blue.inTypes = {};

  ins.label = "input1";
  ins.type = "image";
  imagemagick_set_colour_blue.inputs.push_back(ins);
  imagemagick_set_colour_blue.inTypes.push_back("image");
  ins.label = "input2";
  ins.type = "string";
  imagemagick_set_colour_blue.inputs.push_back(ins);
  imagemagick_set_colour_blue.inTypes.push_back("string");
  sort (imagemagick_set_colour_blue.inTypes.begin(),imagemagick_set_colour_blue.inTypes.end());
  imagemagick_set_colour_blue.output = "image";
  imagemagick.push_back(imagemagick_set_colour_blue);

  Tool error;
  error.name = "error";
  error.id = "error";
  error.operations = {"error"};
  error.type = "tool";
  error.inputs = {};
  error.inTypes = {};

  ins.label = "input1";
  ins.type = "";
  error.inputs.push_back(ins);
  error.inTypes.push_back("");
  sort (error.inTypes.begin(),error.inTypes.end());
  error.output = "";
  imagemagick.push_back(error);

  Tool int_parse_str;
  int_parse_str.name = "int-parse-str";
  int_parse_str.id = "int-parse-str";
  int_parse_str.operations = {"int-parse-str"};
  int_parse_str.type = "tool";
  int_parse_str.inputs = {};
  int_parse_str.inTypes = {};

  ins.label = "input1";
  ins.type = "string";
  int_parse_str.inputs.push_back(ins);
  int_parse_str.inTypes.push_back("string");
  sort (int_parse_str.inTypes.begin(),int_parse_str.inTypes.end());
  int_parse_str.output = "integer";
  imagemagick.push_back(int_parse_str);

  Tool str_parse_int;
  str_parse_int.name = "str-parse-int";
  str_parse_int.id = "str-parse-int";
  str_parse_int.operations = {"str-parse-int"};
  str_parse_int.type = "tool";
  str_parse_int.inputs = {};
  str_parse_int.inTypes = {};

  ins.label = "input1";
  ins.type = "integer";
  str_parse_int.inputs.push_back(ins);
  str_parse_int.inTypes.push_back("integer");
  sort (str_parse_int.inTypes.begin(),str_parse_int.inTypes.end());
  str_parse_int.output = "string";
  imagemagick.push_back(str_parse_int);

  Tool select_colour;
  select_colour.name = "select-colour";
  select_colour.id = "select-colour";
  select_colour.operations = {"select-colour"};
  select_colour.type = "tool";
  select_colour.inputs = {};
  select_colour.inTypes = {};

  ins.label = "input1";
  ins.type = "string";
  select_colour.inputs.push_back(ins);
  select_colour.inTypes.push_back("string");
  sort (select_colour.inTypes.begin(),select_colour.inTypes.end());
  select_colour.output = "colour";
  imagemagick.push_back(select_colour);
  return imagemagick;
}
