/* speed.exe 0081c930 FUN_0081c930; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0081c930(int *param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int param_6,
                int param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iStack_c;
  int *piStack_8;
  
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  FUN_0081bccb();
  iVar2 = 0;
  if (DAT_009c205e == 0) {
LAB_0081c968:
    iVar2 = -9;
LAB_0081c96b:
    FUN_0081bcd9();
    return iVar2;
  }
LAB_0081c959:
  if ((&DAT_009c1b68)[iVar2] != 0) goto code_r0x0081c963;
  iVar7 = DAT_0090bd18 * 4;
  piStack_8 = param_4 + DAT_0090bd18 + 0x85;
  FUN_00822050(param_4,0x214);
  piVar8 = piStack_8 + param_2 * 10;
  iVar3 = FUN_0081dafd(param_3);
  FUN_00821b95(param_4 + 0x48);
  FUN_00821b95(param_4 + 0x4b);
  if (0 < param_2) {
    iStack_c = param_2;
    do {
      FUN_00821ba4(param_4 + 0x4b,piStack_8);
      piStack_8 = piStack_8 + 10;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  uVar4 = FUN_0081dafd(param_3);
  iVar5 = FUN_0081db11(&LAB_0081c199,&LAB_0081c1b9,param_4,piVar8,uVar4);
  param_4[2] = iVar5;
  if (param_4[2] < 0) {
    FUN_0081bcd9();
    return param_4[2];
  }
  if (param_7 != 0) {
    *(undefined1 *)((int)param_4 + 0x11) = 1;
LAB_0081ca75:
    fVar1 = _DAT_00890bf0;
    *param_4 = param_6;
    param_4[3] = 0;
    param_4[1] = -1;
    piVar8 = param_1;
    piVar9 = param_4 + 0x3b;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar9 = piVar9 + 1;
    }
    param_4[0x41] = (int)(param_4 + 0x85);
    iVar7 = 0;
    if (0 < DAT_0090bd18) {
      do {
        *(float *)(param_4[0x41] + iVar7 * 4) = (float)(int)*(char *)((int)param_4 + 0xf1) * fVar1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_0090bd18);
    }
    iVar7 = *param_1;
    iVar3 = 0;
    puVar6 = (undefined1 *)((int)param_4 + 0x141);
    do {
      *puVar6 = (char)iVar3;
      *(float *)(puVar6 + 3) = fVar1 * (float)(int)(char)iVar7;
      puVar6[-1] = 0;
      *(undefined4 *)(puVar6 + -5) = 0xc9742400;
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 0x24;
    } while (iVar3 < 6);
    *(undefined1 *)((int)param_4 + 0x12) = 1;
    iVar7 = FUN_0081c3b6();
    if (iVar7 == 0) {
      FUN_0081ba5d(&LAB_0081c7b4);
      DAT_009c21ec = &LAB_0081c90d;
    }
    (&DAT_009c1b68)[iVar2] = param_4;
    if (param_7 == 0) {
      iVar7 = FUN_00862bb6(*param_4);
      FUN_0081bae3(iVar2,iVar7 / 3);
    }
    param_4[0x27] = 0;
    FUN_0081c4d8(iVar2);
    goto LAB_0081c96b;
  }
  param_6 = FUN_00862b38(param_2 + 2,1,1,(int)piVar8 + iVar3,
                         ((param_5 - (iVar7 + 0x214)) + param_2 * -0x28) - iVar3);
  if (param_6 != 0) {
    *(undefined1 *)((int)param_4 + 0x11) = 0;
    goto LAB_0081ca75;
  }
  FUN_0081e063(param_4[2]);
  goto LAB_0081c968;
code_r0x0081c963:
  iVar2 = iVar2 + 1;
  if ((int)(uint)DAT_009c205e <= iVar2) goto LAB_0081c968;
  goto LAB_0081c959;
}

