/* speed.exe 00484b70 FUN_00484b70; analysis pseudocode, not buildable source.
 * calls 00478ec0 FUN_00478ec0
 */

undefined4 * __thiscall FUN_00484b70(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_008952f0;
  uVar1 = FUN_00478ec0();
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = param_2;
  return param_1;
}

