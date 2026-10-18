/* speed.exe 004de4f0 FUN_004de4f0; analysis pseudocode, not buildable source.
 * calls 004b0cc0 FUN_004b0cc0
 * calls 004cfce0 FUN_004cfce0
 * calls 007c4b80 FUN_007c4b80
 * calls 004b0c50 FUN_004b0c50
 * calls 004ba760 FUN_004ba760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004de4f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ccab;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar3 = DAT_00914ae8 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    ExceptionList = &local_c;
    iVar1 = FUN_007c4b80();
    DAT_00914ae8 = uVar3 + 1;
    uVar2 = FUN_004ba760(0,uVar3 + iVar1 * -4 + 0x51);
    iVar1 = FUN_004b0cc0(0x6c);
    local_4 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004b0c50(uVar2);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    FUN_004cfce0(0,0,0);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0x7fff;
  }
  ExceptionList = local_c;
  return;
}

