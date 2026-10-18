/* speed.exe 00447990 FUN_00447990; analysis pseudocode, not buildable source.
 */

void FUN_00447990(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  param_2 = param_2 + -1;
  iVar7 = -1;
  piVar6 = &DAT_0090dbbc;
  iVar8 = 2;
  do {
    if ((piVar6[-4] != -1) && (*(int *)(DAT_009b0858 + 0x1c + piVar6[-4] * 4) == param_1)) {
      iVar7 = iVar8 + -2;
    }
    if ((*piVar6 != -1) && (*(int *)(DAT_009b0858 + 0x1c + *piVar6 * 4) == param_1)) {
      iVar7 = iVar8 + -1;
    }
    if ((piVar6[4] != -1) && (*(int *)(DAT_009b0858 + 0x1c + piVar6[4] * 4) == param_1)) {
      iVar7 = iVar8;
    }
    if ((piVar6[8] != -1) && (*(int *)(DAT_009b0858 + 0x1c + piVar6[8] * 4) == param_1)) {
      iVar7 = iVar8 + 1;
    }
    iVar1 = iVar8 + 2;
    piVar6 = piVar6 + 0x10;
    iVar8 = iVar8 + 4;
  } while (iVar1 < 0x10);
  if (iVar7 != param_2) {
    uVar2 = (&DAT_0090dba0)[param_2 * 4];
    uVar3 = (&DAT_0090dba4)[param_2 * 4];
    uVar4 = (&DAT_0090dba8)[param_2 * 4];
    uVar5 = (&DAT_0090dbac)[param_2 * 4];
    (&DAT_0090dba0)[param_2 * 4] = (&DAT_0090dba0)[iVar7 * 4];
    (&DAT_0090dba4)[param_2 * 4] = (&DAT_0090dba4)[iVar7 * 4];
    (&DAT_0090dba8)[param_2 * 4] = (&DAT_0090dba8)[iVar7 * 4];
    (&DAT_0090dbac)[param_2 * 4] = (&DAT_0090dbac)[iVar7 * 4];
    (&DAT_0090dba0)[iVar7 * 4] = uVar2;
    (&DAT_0090dba4)[iVar7 * 4] = uVar3;
    (&DAT_0090dba8)[iVar7 * 4] = uVar4;
    (&DAT_0090dbac)[iVar7 * 4] = uVar5;
  }
  return;
}

