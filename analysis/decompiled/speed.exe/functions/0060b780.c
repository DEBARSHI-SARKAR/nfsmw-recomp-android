/* speed.exe 0060b780 FUN_0060b780; analysis pseudocode, not buildable source.
 * calls 00607d40 FUN_00607d40
 * calls 00606b60 FUN_00606b60
 * calls 0060b630 FUN_0060b630
 */

void FUN_0060b780(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int unaff_ESI;
  int *unaff_EDI;
  undefined4 uVar4;
  
  if (*unaff_EDI == 5) {
    uVar4 = *(undefined4 *)(unaff_EDI[1] + 8);
  }
  else {
    if (*unaff_EDI != 7) {
      piVar3 = &DAT_008a3c5c;
      goto LAB_0060b7ba;
    }
    uVar4 = *(undefined4 *)(unaff_EDI[1] + 8);
  }
  piVar3 = (int *)FUN_00607d40(uVar4,*(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0x8c));
LAB_0060b7ba:
  iVar1 = *(int *)(unaff_ESI + 0x1c);
  if (*piVar3 != 6) {
    FUN_0060b630();
  }
  for (piVar2 = *(int **)(unaff_ESI + 8); unaff_EDI < piVar2; piVar2 = piVar2 + -2) {
    *piVar2 = piVar2[-2];
    piVar2[1] = piVar2[-1];
  }
  if (*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 8) < 9) {
    FUN_00606b60();
  }
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 8;
  piVar2 = (int *)((int)unaff_EDI + (*(int *)(unaff_ESI + 0x1c) - iVar1));
  *piVar2 = *piVar3;
  piVar2[1] = piVar3[1];
  return;
}

