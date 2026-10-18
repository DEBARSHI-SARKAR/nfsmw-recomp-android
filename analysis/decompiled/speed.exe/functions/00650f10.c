/* speed.exe 00650f10 FUN_00650f10; analysis pseudocode, not buildable source.
 * calls 00650ec0 FUN_00650ec0
 */

bool __thiscall FUN_00650f10(float *param_1,float *param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if ((((*param_2 - param_2[4] <= param_1[4] + *param_1) &&
       (*param_1 - param_1[4] <= param_2[4] + *param_2)) &&
      (param_2[1] - param_2[5] <= param_1[5] + param_1[1])) &&
     (((param_1[1] - param_1[5] <= param_2[5] + param_2[1] &&
       (param_2[2] - param_2[6] <= param_1[6] + param_1[2])) &&
      ((param_1[2] - param_1[6] <= param_2[6] + param_2[2] &&
       (iVar1 = FUN_00650ec0(param_1), iVar1 == 0)))))) {
    iVar1 = FUN_00650ec0(extraout_ECX);
    return iVar1 == 0;
  }
  return false;
}

