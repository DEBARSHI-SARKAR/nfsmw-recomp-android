/* speed.exe 005f93d0 FUN_005f93d0; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 005ed750 FUN_005ed750
 * calls 005f9270 FUN_005f9270
 * calls 00627400 FUN_00627400
 * calls 00621070 FUN_00621070
 * calls 005ee870 FUN_005ee870
 * calls 005e87f0 FUN_005e87f0
 */

void __fastcall FUN_005f93d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875e5f;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x3c) == '\0') {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x38) == 0) {
      ExceptionList = &local_c;
      FUN_005f9270();
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    FUN_005e87f0(1,param_1);
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_005ee870(*(int *)(param_1 + 0x28));
      ExceptionList = local_c;
      return;
    }
    FUN_005ed750("initial");
    iVar1 = FUN_00627400(0x10);
    local_4 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_00452430();
      uVar3 = FUN_00452430(uVar2);
      FUN_00621070(uVar3,uVar2);
    }
  }
  ExceptionList = local_c;
  return;
}

