/* speed.exe 004c1b80 FUN_004c1b80; analysis pseudocode, not buildable source.
 */

void FUN_004c1b80(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 **ppuVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *local_10;
  undefined4 *local_c [3];
  
  puVar5 = param_3;
  iVar10 = (int)param_3 - param_1 >> 3;
  iVar11 = param_2 - param_1 >> 3;
  iVar8 = iVar11;
  param_2 = iVar10;
  while (iVar3 = iVar8, iVar3 != 0) {
    iVar8 = param_2 % iVar3;
    param_2 = iVar3;
  }
  if ((param_2 < iVar10) && (0 < param_2)) {
    puVar12 = (undefined4 *)(param_1 + param_2 * 8);
    do {
      uVar1 = puVar12[1];
      uVar2 = *puVar12;
      if (puVar12 + iVar11 * 2 == puVar5) {
        puVar7 = &param_1;
      }
      else {
        param_3 = puVar12 + iVar11 * 2;
        puVar7 = &param_3;
      }
      puVar6 = (undefined4 *)*puVar7;
      puVar7 = puVar12;
      while (puVar4 = puVar6, puVar4 != puVar12) {
        *puVar7 = *puVar4;
        puVar7[1] = puVar4[1];
        iVar8 = (int)puVar5 - (int)puVar4 >> 3;
        if (iVar11 < iVar8) {
          local_10 = puVar4 + iVar11 * 2;
          ppuVar9 = &local_10;
        }
        else {
          local_c[0] = (undefined4 *)(param_1 + (iVar8 * 0x1fffffff + iVar11) * 8);
          ppuVar9 = local_c;
        }
        puVar7 = puVar4;
        puVar6 = *ppuVar9;
      }
      puVar12 = puVar12 + -2;
      param_2 = param_2 + -1;
      *puVar7 = uVar2;
      puVar7[1] = uVar1;
    } while (param_2 != 0);
  }
  return;
}

