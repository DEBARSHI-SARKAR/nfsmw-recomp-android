/* speed.exe 007f621a FUN_007f621a; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f621a(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  param_1[1] = param_2;
  *param_1 = 0x20;
  param_1[4] = param_4;
  if (param_2 == 1) {
    param_1[2] = *param_3;
  }
  else {
    param_1[3] = param_3;
  }
  return;
}

