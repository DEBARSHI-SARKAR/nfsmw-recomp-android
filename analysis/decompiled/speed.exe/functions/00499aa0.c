/* speed.exe 00499aa0 FUN_00499aa0; analysis pseudocode, not buildable source.
 */

void FUN_00499aa0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 0) {
    *param_2 = *param_1;
    param_2[1] = 0;
    param_2[2] = param_1[2];
    param_2[3] = 0x3f800000;
  }
  else {
    if (param_3 == 1) {
      *param_2 = param_1[4];
      param_2[1] = 0;
      param_2[2] = param_1[6];
      param_2[3] = 0x3f800000;
      return;
    }
    if (param_3 == 2) {
      *param_2 = param_1[8];
      param_2[1] = 0;
      param_2[2] = param_1[10];
      param_2[3] = 0x3f800000;
      return;
    }
  }
  return;
}

