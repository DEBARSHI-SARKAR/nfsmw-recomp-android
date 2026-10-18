/* speed.exe 0081c944 FUN_0081c944; analysis pseudocode, not buildable source.
 * calls 00862b38 FUN_00862b38
 * calls 00862bb6 FUN_00862bb6
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081dafd FUN_0081dafd
 * calls 0081ba5d FUN_0081ba5d
 * calls 0081c3b6 FUN_0081c3b6
 * calls 0081c4d8 FUN_0081c4d8
 * calls 0081bae3 FUN_0081bae3
 * calls 00822050 FUN_00822050
 * calls 0081e063 FUN_0081e063
 * calls 00821ba4 FUN_00821ba4
 * calls 0081bccb FUN_0081bccb
 * calls 00821b95 FUN_00821b95
 * calls 0081db11 FUN_0081db11
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0081c944(void)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int unaff_EBP;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  FUN_0081bccb();
  iVar3 = 0;
  if (DAT_009c205e == 0) {
LAB_0081c968:
    iVar3 = -9;
LAB_0081c96b:
    FUN_0081bcd9();
    return iVar3;
  }
LAB_0081c959:
  if ((&DAT_009c1b68)[iVar3] != 0) goto code_r0x0081c963;
  piVar1 = *(int **)(unaff_EBP + 0x14);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(int **)(unaff_EBP + -0x10) = piVar1 + 0x85;
  iVar3 = DAT_0090bd18;
  *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) - (DAT_0090bd18 * 4 + 0x214);
  piVar8 = piVar1 + iVar3 + 0x85;
  FUN_00822050(piVar1,0x214);
  iVar3 = *(int *)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + iVar3 * -0x28;
  *(int **)(unaff_EBP + -8) = piVar8;
  iVar4 = FUN_0081dafd(*(undefined4 *)(unaff_EBP + 0x10));
  *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) - iVar4;
  *(int **)(unaff_EBP + -0xc) = piVar8 + iVar3 * 10;
  FUN_00821b95(piVar1 + 0x48);
  FUN_00821b95(piVar1 + 0x4b);
  if (0 < iVar3) {
    *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(unaff_EBP + -8);
    *(int *)(unaff_EBP + -8) = iVar3;
    do {
      FUN_00821ba4(piVar1 + 0x4b,*(undefined4 *)(unaff_EBP + -4));
      *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 0x28;
      piVar9 = (int *)(unaff_EBP + -8);
      *piVar9 = *piVar9 + -1;
    } while (*piVar9 != 0);
  }
  uVar5 = FUN_0081dafd(*(undefined4 *)(unaff_EBP + 0x10));
  iVar6 = FUN_0081db11(&LAB_0081c199,&LAB_0081c1b9,piVar1,*(undefined4 *)(unaff_EBP + -0xc),uVar5);
  piVar1[2] = iVar6;
  if (piVar1[2] < 0) {
    FUN_0081bcd9();
    return piVar1[2];
  }
  if (*(int *)(unaff_EBP + 0x20) != 0) {
    iVar3 = *(int *)(unaff_EBP + 0x1c);
    *(undefined1 *)((int)piVar1 + 0x11) = 1;
LAB_0081ca75:
    fVar2 = _DAT_00890bf0;
    piVar8 = *(int **)(unaff_EBP + 8);
    *piVar1 = iVar3;
    iVar3 = *(int *)(unaff_EBP + -0x10);
    piVar1[3] = 0;
    piVar1[1] = -1;
    piVar9 = piVar8;
    piVar10 = piVar1 + 0x3b;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar10 = piVar10 + 1;
    }
    piVar1[0x41] = iVar3;
    iVar3 = 0;
    if (0 < DAT_0090bd18) {
      do {
        *(int *)(unaff_EBP + -0x10) = (int)*(char *)((int)piVar1 + 0xf1);
        *(float *)(piVar1[0x41] + iVar3 * 4) = (float)*(int *)(unaff_EBP + -0x10) * fVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_0090bd18);
    }
    *(int *)(unaff_EBP + -0x10) = (int)(char)*piVar8;
    iVar4 = 0;
    puVar7 = (undefined1 *)((int)piVar1 + 0x141);
    iVar3 = *(int *)(unaff_EBP + -0x10);
    do {
      *puVar7 = (char)iVar4;
      *(float *)(puVar7 + 3) = fVar2 * (float)iVar3;
      puVar7[-1] = 0;
      *(undefined4 *)(puVar7 + -5) = 0xc9742400;
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 0x24;
    } while (iVar4 < 6);
    *(undefined1 *)((int)piVar1 + 0x12) = 1;
    iVar3 = FUN_0081c3b6();
    if (iVar3 == 0) {
      FUN_0081ba5d(&LAB_0081c7b4);
      DAT_009c21ec = &LAB_0081c90d;
    }
    iVar4 = *(int *)(unaff_EBP + 0x20);
    iVar3 = *(int *)(unaff_EBP + -0x14);
    (&DAT_009c1b68)[iVar3] = piVar1;
    if (iVar4 == 0) {
      iVar4 = FUN_00862bb6(*piVar1);
      FUN_0081bae3(iVar3,iVar4 / 3);
    }
    piVar1[0x27] = 0;
    FUN_0081c4d8(iVar3);
    goto LAB_0081c96b;
  }
  iVar3 = FUN_00862b38(iVar3 + 2,1,1,(int)(piVar8 + iVar3 * 10) + iVar4,
                       *(undefined4 *)(unaff_EBP + 0x18));
  if (iVar3 != 0) {
    *(undefined1 *)((int)piVar1 + 0x11) = 0;
    goto LAB_0081ca75;
  }
  FUN_0081e063(piVar1[2]);
  goto LAB_0081c968;
code_r0x0081c963:
  iVar3 = iVar3 + 1;
  if ((int)(uint)DAT_009c205e <= iVar3) goto LAB_0081c968;
  goto LAB_0081c959;
}

