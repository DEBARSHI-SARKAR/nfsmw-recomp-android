/* speed.exe 00402090 FUN_00402090; analysis pseudocode, not buildable source.
 */

int FUN_00402090(int param_1,int param_2,int param_3)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  if (param_3 < param_1) {
    param_1 = param_3;
  }
  return param_1;
}

