/* speed.exe 00577680 FUN_00577680; analysis pseudocode, not buildable source.
 * calls 00577640 FUN_00577640
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

void FUN_00577680(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 uVar6;
  
  iVar2 = FUN_00454810(0xc385f75d,0);
  if (iVar2 == 0) {
    FUN_006269b0(4);
  }
  puVar3 = (undefined4 *)FUN_00454810(0x3c2fdaab,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006269b0(4);
  }
  uVar1 = *puVar3;
  piVar4 = (int *)FUN_00454810(0xd267facc,0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_006269b0(4);
  }
  iVar2 = *piVar4;
  iVar5 = FUN_00577640(uVar1);
  if (iVar5 != 0) {
    if (iVar5 == 0x32) {
      if (iVar2 == 1) {
        iVar5 = 0x2c;
      }
      else if (iVar2 == 2) {
        iVar5 = 0x2e;
      }
      else if (iVar2 == 3) {
        iVar5 = 0x30;
      }
    }
    uVar6 = (undefined1)iVar2;
    if (iVar2 < 0) {
      uVar6 = 0;
    }
    *(undefined1 *)(&DAT_0091cd10 + iVar5 * 2) = uVar6;
    *(undefined1 *)((int)&DAT_0091cd10 + iVar5 * 8 + 1) = uVar6;
    *(undefined1 *)(&DAT_0091cd14 + iVar5 * 2) = uVar6;
    *(undefined1 *)((int)&DAT_0091cd14 + iVar5 * 8 + 1) = uVar6;
  }
  return;
}

