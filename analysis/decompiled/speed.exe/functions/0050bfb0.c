/* speed.exe 0050bfb0 FUN_0050bfb0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0050bce0 FUN_0050bce0
 * calls 00508260 FUN_00508260
 * calls 004fd630 FUN_004fd630
 * calls 004528d0 FUN_004528d0
 */

int __thiscall FUN_0050bfb0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e02f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  param_2 = FUN_004528d0(param_2);
  FUN_00508260(&local_10,&param_2);
  if (local_10 != *(int *)(param_1 + 0x370)) {
    ExceptionList = local_c;
    return *(int *)(local_10 + 0x10);
  }
  iVar2 = FUN_005d29d0(0x14,0);
  local_4 = 0;
  local_10 = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_004fd630(uVar1,0,0);
  }
  local_4 = 0xffffffff;
  piVar3 = (int *)FUN_0050bce0(&param_2);
  *piVar3 = iVar2;
  ExceptionList = local_c;
  return iVar2;
}

