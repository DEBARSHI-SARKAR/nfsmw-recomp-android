/* speed.exe 0043a700 FUN_0043a700; analysis pseudocode, not buildable source.
 * calls 0041b720 FUN_0041b720
 * calls 00433db0 FUN_00433db0
 * calls 0041c340 FUN_0041c340
 */

undefined4 * __thiscall FUN_0043a700(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868ddb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00891990;
  param_1[1] = 0;
  uVar2 = FUN_0041b720();
  param_1[3] = uVar2;
  param_1[4] = 0;
  param_1[5] = param_2;
  iVar1 = DAT_0090d740;
  local_4 = 0;
  param_2 = param_1;
  iVar3 = FUN_0041c340(DAT_0090d740,*(undefined4 *)(DAT_0090d740 + 4),&param_2);
  FUN_00433db0(1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  ExceptionList = local_c;
  return param_1;
}

