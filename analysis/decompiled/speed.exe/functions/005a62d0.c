/* speed.exe 005a62d0 FUN_005a62d0; analysis pseudocode, not buildable source.
 * calls 005a41e0 FUN_005a41e0
 * calls 00577590 FUN_00577590
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 * calls 00573140 FUN_00573140
 * calls 00576b80 FUN_00576b80
 * calls 00576c50 FUN_00576c50
 * calls 007c4b80 FUN_007c4b80
 */

void FUN_005a62d0(undefined4 param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)FUN_00454810(0x3c2fdaab,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006269b0(4);
  }
  puVar2 = (undefined4 *)FUN_00454810(0x6a077d5,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(4);
  }
  iVar3 = FUN_00577590(*puVar2,*puVar1);
  if (iVar3 != 0) {
    uVar4 = 0;
    if (param_2 != '\0') {
      if (iVar3 == 0x12) {
        uVar4 = FUN_00573140(&DAT_0089eb60,*(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0));
        FUN_005a41e0(uVar4);
        return;
      }
      if (iVar3 != 0x13) {
        FUN_00576c50(iVar3,0);
        return;
      }
      iVar3 = FUN_00454810(0xab0179f4,0);
      if (iVar3 == 0) {
        FUN_006269b0(4);
      }
      iVar3 = *(int *)(DAT_0091cf90 + 0x10);
      iVar5 = FUN_007c4b80();
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) + iVar5;
      return;
    }
    if (iVar3 == 0x12) {
      uVar4 = FUN_00573140(&DAT_0089eb60,*(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0));
    }
    else if (iVar3 == 0x13) {
      iVar3 = FUN_00454810(0xab0179f4,0);
      if (iVar3 == 0) {
        FUN_006269b0(4);
      }
      uVar4 = FUN_007c4b80();
      FUN_00576b80(0x13,uVar4);
      return;
    }
    FUN_00576b80(iVar3,uVar4);
  }
  return;
}

