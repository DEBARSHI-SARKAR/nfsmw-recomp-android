/* speed.exe 0064d110 FUN_0064d110; analysis pseudocode, not buildable source.
 * calls 00461970 FUN_00461970
 */

undefined4 * __thiscall FUN_0064d110(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00461970(param_3);
  *param_1 = uVar2;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_2[3];
  iVar1 = param_2[4];
  param_1[6] = iVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = iVar1 >> 0x1f;
  return param_1;
}

