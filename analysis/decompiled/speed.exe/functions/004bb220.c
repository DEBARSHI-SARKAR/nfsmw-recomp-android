/* speed.exe 004bb220 FUN_004bb220; analysis pseudocode, not buildable source.
 * calls 004baec0 FUN_004baec0
 * calls 004b25f0 FUN_004b25f0
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 */

void FUN_004bb220(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) &&
      ((int *)param_1[0xf] <= param_2)) &&
     ((param_2 <= (int *)(param_1[0x10] + -8) && (*param_2 != -2)))) {
    *param_2 = -2;
    FUN_004b25f0(param_2[1]);
    FUN_007ec1bd();
    iVar1 = param_1[0x11];
    if (iVar1 == 2) {
      param_1[0x11] = 1;
    }
    FUN_007ec1c8();
    if (iVar1 == 2) {
      if (param_1[0x15] != 0) {
        FUN_004baec0(param_1,param_1[0x13]);
        return;
      }
      FUN_004baec0(param_1,param_1[0x12]);
    }
  }
  return;
}

