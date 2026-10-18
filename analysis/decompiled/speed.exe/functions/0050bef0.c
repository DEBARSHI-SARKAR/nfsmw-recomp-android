/* speed.exe 0050bef0 FUN_0050bef0; analysis pseudocode, not buildable source.
 * calls 00503af0 FUN_00503af0
 * calls 005081f0 FUN_005081f0
 * calls 005d29d0 FUN_005d29d0
 * calls 0050bc20 FUN_0050bc20
 * calls 004528d0 FUN_004528d0
 */

undefined4 __thiscall FUN_0050bef0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e012;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  param_2 = FUN_004528d0(param_2);
  FUN_005081f0(&local_10,&param_2);
  if (local_10 != *(int *)(param_1 + 0x364)) {
    ExceptionList = local_c;
    return *(undefined4 *)(local_10 + 0x10);
  }
  uVar3 = 0;
  local_10 = FUN_005d29d0(0xa0,0);
  local_4 = 0;
  if (local_10 != 0) {
    uVar3 = FUN_00503af0(uVar1);
  }
  local_4 = 0xffffffff;
  puVar2 = (undefined4 *)FUN_0050bc20(&param_2);
  *puVar2 = uVar3;
  ExceptionList = local_c;
  return uVar3;
}

