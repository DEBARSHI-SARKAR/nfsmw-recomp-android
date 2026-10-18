/* speed.exe 0062fe40 FUN_0062fe40; analysis pseudocode, not buildable source.
 * calls 0062c9a0 FUN_0062c9a0
 */

undefined4 * __thiscall FUN_0062fe40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878137;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  param_1[2] = param_2;
  param_1[3] = param_3;
  iVar1 = DAT_00920390 + 0x10;
  *param_1 = &PTR_FUN_008a723c;
  bVar2 = DAT_00920390 != 0;
  local_4 = 1;
  DAT_00920390 = iVar1;
  if (bVar2) {
    FUN_0062c9a0(0);
  }
  ExceptionList = local_c;
  return param_1;
}

