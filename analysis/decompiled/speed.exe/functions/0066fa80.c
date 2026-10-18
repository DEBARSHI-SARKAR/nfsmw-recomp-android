/* speed.exe 0066fa80 FUN_0066fa80; analysis pseudocode, not buildable source.
 */

void FUN_0066fa80(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar6 = (int)param_3 - (int)param_1 >> 2;
  iVar7 = param_2 - (int)param_1 >> 2;
  iVar5 = iVar7;
  param_2 = iVar6;
  while (iVar2 = iVar5, iVar2 != 0) {
    iVar5 = param_2 % iVar2;
    param_2 = iVar2;
  }
  if ((param_2 < iVar6) && (0 < param_2)) {
    puVar8 = param_1 + param_2;
    do {
      uVar1 = *puVar8;
      puVar4 = puVar8 + iVar7;
      puVar3 = puVar8;
      if (puVar8 + iVar7 == param_3) {
        puVar4 = param_1;
      }
      while (puVar4 != puVar8) {
        *puVar3 = *puVar4;
        iVar5 = (int)param_3 - (int)puVar4 >> 2;
        puVar3 = puVar4;
        if (iVar7 < iVar5) {
          puVar4 = puVar4 + iVar7;
        }
        else {
          puVar4 = param_1 + (iVar7 - iVar5);
        }
      }
      *puVar3 = uVar1;
      puVar8 = puVar8 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

