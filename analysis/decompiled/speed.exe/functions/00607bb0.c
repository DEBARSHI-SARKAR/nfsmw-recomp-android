/* speed.exe 00607bb0 FUN_00607bb0; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 00613970 FUN_00613970
 */

void FUN_00607bb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_ESI;
  int iVar4;
  
  iVar4 = 1 << ((byte)param_1 & 0x1f);
  if (0x18 < param_1) {
    FUN_00613880();
  }
  if (param_1 == 0) {
    *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_EBX + 0x10) + 0x40;
  }
  else {
    uVar1 = FUN_00613970();
    *(undefined4 *)(unaff_ESI + 0x10) = uVar1;
    if (0 < iVar4) {
      iVar2 = 0;
      iVar3 = iVar4;
      do {
        *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0x10 + iVar2) = 0;
        *(undefined4 *)(iVar2 + *(int *)(unaff_ESI + 0x10)) = 0;
        *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 8 + iVar2) = 0;
        iVar2 = iVar2 + 0x14;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *(byte *)(unaff_ESI + 7) = (byte)param_1;
  *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x10) + -0x14 + iVar4 * 0x14;
  return;
}

