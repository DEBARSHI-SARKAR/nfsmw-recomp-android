/* speed.exe 0083e020 FUN_0083e020; analysis pseudocode, not buildable source.
 * calls 0078af20 thunk_FUN_004655f0
 * calls 0078af00 FUN_0078af00
 */

int FUN_0083e020(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *unaff_EBX;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (unaff_EBX[1] < 1) {
    iVar1 = *unaff_EBX;
    if (0 < iVar1) goto LAB_0083e049;
  }
  else {
    iVar1 = (unaff_EBX[6] * 100) / unaff_EBX[1];
    if (*unaff_EBX != 0) {
      iVar1 = (iVar1 + *unaff_EBX) / 2;
    }
LAB_0083e049:
    if (1 < iVar1) goto LAB_0083e053;
  }
  iVar1 = 2;
LAB_0083e053:
  piVar2 = (int *)FUN_0078af00((iVar1 + 2U) * 4);
  iVar3 = 0;
  if (piVar2 != (int *)0x0) {
    piVar7 = piVar2;
    for (uVar5 = iVar1 + 2U & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)piVar7 = 0;
      piVar7 = (int *)((int)piVar7 + 1);
    }
    *piVar2 = unaff_EBX[0xf];
    piVar2[iVar1 + 1] = -1;
    unaff_EBX[0xf] = (int)piVar2;
    iVar3 = 1;
    iVar1 = piVar2[1];
    piVar2 = piVar2 + 1;
    while (iVar1 == 0) {
      *piVar2 = unaff_EBX[0xe];
      unaff_EBX[0xe] = (int)piVar2;
      iVar3 = iVar3 + 1;
      iVar1 = piVar2[1];
      piVar2 = piVar2 + 1;
    }
    iVar1 = unaff_EBX[4] + iVar3 + -1;
    unaff_EBX[4] = iVar1;
    puVar4 = (undefined4 *)FUN_0078af00((unaff_EBX[6] + iVar1) * 8);
    if ((undefined4 *)unaff_EBX[0x10] != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)unaff_EBX[0x10];
      puVar8 = puVar4;
      for (uVar5 = unaff_EBX[6] & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      thunk_FUN_004655f0(unaff_EBX[0x10]);
    }
    unaff_EBX[0x10] = (int)puVar4;
    iVar3 = iVar3 + -1;
  }
  return iVar3;
}

