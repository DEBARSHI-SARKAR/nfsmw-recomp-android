/* speed.exe 00607f20 FUN_00607f20; analysis pseudocode, not buildable source.
 * calls 00606310 FUN_00606310
 * calls 00606c20 FUN_00606c20
 */

void FUN_00607f20(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0x30) & 8) != 0) && (*(int *)(unaff_EDI + 0x38) == 0)) {
    *(undefined4 *)(unaff_EDI + 0x38) = *(undefined4 *)(unaff_EDI + 0x34);
    FUN_00606c20();
    return;
  }
  if ((*(byte *)(unaff_EDI + 0x30) & 4) == 0) {
    return;
  }
  piVar2 = *(int **)(unaff_EDI + 0x14);
  iVar3 = *(int *)(*(int *)(*piVar2 + -4) + 0xc);
  if (*(int *)(iVar3 + 0x14) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar3 + 0x14) + -4 +
                    (*(int *)piVar2[4] - *(int *)(iVar3 + 0xc) >> 2) * 4);
  }
  if (*(char *)(unaff_EDI + 0x32) == '\0') {
    FUN_00606310();
    return;
  }
  uVar1 = *(uint *)piVar2[4];
  if ((int)(uVar1 - *(int *)(iVar3 + 0xc)) >> 2 == 1) {
    piVar2[3] = uVar1;
  }
  if ((uint)piVar2[3] < *(uint *)piVar2[4]) {
    if (*(int *)(iVar3 + 0x14) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x14) + -4 + (piVar2[3] - *(int *)(iVar3 + 0xc) >> 2) * 4);
    }
    if (iVar4 == iVar3) goto LAB_00607fc8;
  }
  FUN_00606c20();
  piVar2 = *(int **)(unaff_EDI + 0x14);
LAB_00607fc8:
  piVar2[3] = *(int *)piVar2[4];
  return;
}

