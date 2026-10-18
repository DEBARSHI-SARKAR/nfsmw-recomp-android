/* speed.exe 0066f8a0 FUN_0066f8a0; analysis pseudocode, not buildable source.
 */

void FUN_0066f8a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  
  puVar12 = param_3;
  iVar8 = ((int)param_3 - (int)param_1) / 0x18;
  iVar7 = (param_2 - (int)param_1) / 0x18;
  iVar13 = iVar7;
  param_3 = (undefined4 *)iVar8;
  while (iVar9 = iVar13, iVar9 != 0) {
    iVar13 = (int)param_3 % iVar9;
    param_3 = (undefined4 *)iVar9;
  }
  if (((int)param_3 < iVar8) && (0 < (int)param_3)) {
    puVar14 = param_1 + (int)param_3 * 6;
    do {
      uVar1 = *puVar14;
      uVar2 = puVar14[1];
      uVar3 = puVar14[2];
      uVar4 = puVar14[3];
      uVar5 = puVar14[4];
      uVar6 = puVar14[5];
      puVar10 = puVar14;
      puVar11 = puVar14 + iVar7 * 6;
      if (puVar14 + iVar7 * 6 == puVar12) {
        puVar11 = param_1;
      }
      while (puVar11 != puVar14) {
        *puVar10 = *puVar11;
        puVar10[1] = puVar11[1];
        puVar10[2] = puVar11[2];
        puVar10[3] = puVar11[3];
        puVar10[4] = puVar11[4];
        puVar10[5] = puVar11[5];
        iVar8 = ((int)puVar12 - (int)puVar11) / 0x18;
        puVar10 = puVar11;
        if (iVar7 < iVar8) {
          puVar11 = puVar11 + iVar7 * 6;
        }
        else {
          puVar11 = param_1 + (iVar7 - iVar8) * 6;
        }
      }
      *puVar10 = uVar1;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      puVar10[4] = uVar5;
      puVar10[5] = uVar6;
      puVar14 = puVar14 + -6;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}

