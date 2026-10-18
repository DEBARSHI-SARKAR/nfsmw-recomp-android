/* speed.exe 00569050 FUN_00569050; analysis pseudocode, not buildable source.
 * calls 006022d0 FUN_006022d0
 * calls 00627400 FUN_00627400
 * calls 00624360 FUN_00624360
 * calls 00624810 FUN_00624810
 * calls 005fbd90 FUN_005fbd90
 */

void __thiscall FUN_00569050(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008714ae;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x18) != 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_006022d0(*(int *)(param_1 + 0x18));
    if ((iVar2 != 0) && (cVar1 = FUN_005fbd90(), cVar1 != '\0')) {
      iVar2 = FUN_00627400(0xc);
      local_4 = 0;
      if (iVar2 == 0) {
        ExceptionList = local_c;
        return;
      }
      FUN_00624360(3);
      ExceptionList = local_c;
      return;
    }
    iVar2 = FUN_00627400(0x10);
    local_4 = 1;
    if (iVar2 != 0) {
      FUN_00624810(param_2,*(undefined4 *)(param_1 + 0x18));
    }
  }
  ExceptionList = local_c;
  return;
}

