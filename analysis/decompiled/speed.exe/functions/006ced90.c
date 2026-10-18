/* speed.exe 006ced90 FUN_006ced90; analysis pseudocode, not buildable source.
 */

void FUN_006ced90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar6 = (int)param_3 - (int)param_1 >> 3;
  iVar9 = param_2 - (int)param_1 >> 3;
  iVar7 = iVar9;
  param_2 = iVar6;
  while (iVar3 = iVar7, iVar3 != 0) {
    iVar7 = param_2 % iVar3;
    param_2 = iVar3;
  }
  if ((param_2 < iVar6) && (0 < param_2)) {
    puVar8 = param_1 + param_2 * 2;
    do {
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      puVar5 = puVar8 + iVar9 * 2;
      puVar4 = puVar8;
      if (puVar8 + iVar9 * 2 == param_3) {
        puVar5 = param_1;
      }
      while (puVar5 != puVar8) {
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        iVar7 = (int)param_3 - (int)puVar5 >> 3;
        puVar4 = puVar5;
        if (iVar9 < iVar7) {
          puVar5 = puVar5 + iVar9 * 2;
        }
        else {
          puVar5 = param_1 + (iVar9 - iVar7) * 2;
        }
      }
      puVar4[1] = uVar2;
      puVar8 = puVar8 + -2;
      param_2 = param_2 + -1;
      *puVar4 = uVar1;
    } while (param_2 != 0);
  }
  return;
}

