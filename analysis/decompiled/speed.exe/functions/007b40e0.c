/* speed.exe 007b40e0 FUN_007b40e0; analysis pseudocode, not buildable source.
 * calls 00662b80 FUN_00662b80
 * calls 00461360 FUN_00461360
 * calls 00516e10 FUN_00516e10
 * calls 006bf690 FUN_006bf690
 * calls 00516e40 FUN_00516e40
 * calls 00460d20 FUN_00460d20
 * calls 00663f00 FUN_00663f00
 * calls 00460c70 FUN_00460c70
 * calls 0062c9a0 FUN_0062c9a0
 * calls 00627400 FUN_00627400
 * calls 006bf720 FUN_006bf720
 */

void FUN_007b40e0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008831d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00516e10();
  uVar1 = FUN_00516e40();
  iVar2 = FUN_00516e10();
  iVar2 = *(int *)(iVar2 + 0x20);
  FUN_00460c70(local_8c,*(undefined4 *)(iVar2 + 0x1c));
  uVar3 = FUN_00461360(local_8c,&DAT_00893ce4);
  FUN_00460c70(uVar3,&DAT_008a3ae8);
  iVar4 = FUN_00460d20(local_8c,uVar1);
  if (iVar4 != 0) {
    iVar4 = FUN_00627400(0xc);
    local_4 = 0;
    if (iVar4 != 0) {
      FUN_0062c9a0(0);
    }
    local_4 = 0xffffffff;
    FUN_006bf720();
    FUN_006bf690();
    FUN_00663f00(iVar2);
    FUN_00662b80(FUN_007a9620,0);
  }
  ExceptionList = local_c;
  return;
}

