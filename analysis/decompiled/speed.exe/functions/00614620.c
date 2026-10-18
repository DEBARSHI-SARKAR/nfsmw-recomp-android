/* speed.exe 00614620 FUN_00614620; analysis pseudocode, not buildable source.
 * calls 00614510 FUN_00614510
 * calls 00613880 FUN_00613880
 * calls 00606980 FUN_00606980
 * calls 006143d0 FUN_006143d0
 */

void FUN_00614620(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int unaff_EDI;
  
  iVar2 = FUN_006143d0();
  iVar6 = *in_EAX;
  uVar5 = iVar2 * 0xc;
  if (uVar5 == 0) {
LAB_00614648:
    iVar3 = 0;
  }
  else {
    if (uVar5 < 0xfffffffd) {
      iVar3 = (*DAT_0091e0e0)(iVar6,0,0,uVar5,7);
      if (iVar3 == 0) {
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00606980(iVar6,4);
        }
        goto LAB_00614648;
      }
    }
    else {
      FUN_00613880(iVar6,"memory allocation error: block too big");
      iVar3 = 0;
    }
    if (iVar6 != 0) {
      piVar1 = (int *)(*(int *)(iVar6 + 0x10) + 0x24);
      *piVar1 = *piVar1 + uVar5;
    }
  }
  *(int *)(unaff_EDI + 0x18) = iVar3;
  *(int *)(unaff_EDI + 0x38) = iVar2;
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      uVar4 = FUN_00614510();
      *(undefined4 *)(iVar6 + *(int *)(unaff_EDI + 0x18)) = uVar4;
      uVar4 = FUN_006143d0();
      *(undefined4 *)(*(int *)(unaff_EDI + 0x18) + 4 + iVar6) = uVar4;
      uVar4 = FUN_006143d0();
      *(undefined4 *)(*(int *)(unaff_EDI + 0x18) + 8 + iVar6) = uVar4;
      iVar6 = iVar6 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

