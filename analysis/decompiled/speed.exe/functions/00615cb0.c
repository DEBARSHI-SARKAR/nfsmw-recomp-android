/* speed.exe 00615cb0 FUN_00615cb0; analysis pseudocode, not buildable source.
 * calls 0060e2e0 FUN_0060e2e0
 * calls 00613eb0 FUN_00613eb0
 * calls 0060bd50 FUN_0060bd50
 * calls 00607de0 FUN_00607de0
 */

void FUN_00615cb0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int unaff_ESI;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x10) + 0x30);
  if (*(int *)(iVar1 + 0x1c) < 2) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x10) +
                    (0x40400000U % ((1 << (*(byte *)(iVar1 + 7) & 0x1f)) - 1U | 1)) * 0x14);
    do {
      if ((*piVar5 == 3) && (piVar5[1] == 0x40000000)) {
        piVar5 = piVar5 + 2;
        goto LAB_00615d16;
      }
      piVar5 = (int *)piVar5[4];
    } while (piVar5 != (int *)0x0);
    piVar5 = &DAT_008a3c5c;
  }
  else {
    piVar5 = (int *)(*(int *)(iVar1 + 0xc) + 8);
  }
LAB_00615d16:
  piVar4 = *(int **)(unaff_ESI + 8);
  *piVar4 = *piVar5;
  piVar4[1] = piVar5[1];
  piVar5 = *(int **)(unaff_ESI + 8);
  *(int **)(unaff_ESI + 8) = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (*piVar5 != 0) {
    return;
  }
  *(int **)(unaff_ESI + 8) = piVar5;
  FUN_0060e2e0();
  puVar6 = *(undefined4 **)(unaff_ESI + 8);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  piVar5 = *(int **)(unaff_ESI + 8);
  *(int **)(unaff_ESI + 8) = piVar5 + 2;
  piVar4 = piVar5;
  if (*piVar5 == 0) {
    piVar4 = (int *)(*(int *)(unaff_ESI + 0x10) + 0x34);
  }
  if ((piVar5[-2] == 5) || (piVar5[-2] == 7)) {
    *(int *)(piVar5[-1] + 8) = piVar4[1];
  }
  iVar1 = *(int *)(unaff_ESI + 8);
  puVar6 = (undefined4 *)(iVar1 + -8);
  *(undefined4 **)(unaff_ESI + 8) = puVar6;
  *puVar6 = 4;
  uVar2 = FUN_00613eb0();
  *(undefined4 *)(iVar1 + -4) = uVar2;
  iVar1 = *(int *)(unaff_ESI + 8);
  puVar6 = (undefined4 *)(iVar1 + 8);
  *(undefined4 **)(unaff_ESI + 8) = puVar6;
  *puVar6 = 4;
  uVar2 = FUN_00613eb0();
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  puVar6 = *(undefined4 **)(unaff_ESI + 8);
  *(undefined4 **)(unaff_ESI + 8) = puVar6 + 2;
  puVar3 = (undefined4 *)FUN_00607de0();
  *puVar3 = *puVar6;
  puVar3[1] = puVar6[1];
  iVar1 = *(int *)(unaff_ESI + 8);
  *(undefined4 **)(unaff_ESI + 8) = (undefined4 *)(iVar1 + -0x10);
  *(undefined4 *)(iVar1 + -0x10) = *(undefined4 *)(iVar1 + -0x18);
  *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar1 + -0x14);
  piVar5 = *(int **)(unaff_ESI + 8);
  *(int **)(unaff_ESI + 8) = piVar5 + 2;
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x10) + 0x30);
  if (*(int *)(iVar1 + 0x1c) < 2) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x10) +
                    (0x40400000U % ((1 << (*(byte *)(iVar1 + 7) & 0x1f)) - 1U | 1)) * 0x14);
    do {
      if ((*piVar4 == 3) && (piVar4[1] == 0x40000000)) goto LAB_00615e6a;
      piVar4 = (int *)piVar4[4];
    } while (piVar4 != (int *)0x0);
  }
  else {
    piVar4 = *(int **)(iVar1 + 0xc);
LAB_00615e6a:
    piVar4 = piVar4 + 2;
    if (piVar4 != &DAT_008a3c5c) goto LAB_00615e90;
  }
  piVar4 = (int *)FUN_0060bd50();
LAB_00615e90:
  *piVar4 = *piVar5;
  piVar4[1] = piVar5[1];
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -8;
  return;
}

