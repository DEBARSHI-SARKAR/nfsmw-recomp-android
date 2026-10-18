/* speed.exe 005d1c00 FUN_005d1c00; analysis pseudocode, not buildable source.
 */

void FUN_005d1c00(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 **ppuVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar7 = (int)param_3 - (int)param_1 >> 3;
  iVar9 = param_2 - (int)param_1 >> 3;
  iVar5 = iVar9;
  param_2 = iVar7;
  while (iVar1 = iVar5, iVar1 != 0) {
    iVar5 = param_2 % iVar1;
    param_2 = iVar1;
  }
  if ((param_2 < iVar7) && (0 < param_2)) {
    puVar8 = param_1 + param_2 * 2;
    do {
      local_8 = *puVar8;
      local_14 = puVar8 + iVar9 * 2;
      local_4 = local_14[iVar9 * -2 + 1];
      if (local_14 == param_3) {
        ppuVar6 = &param_1;
      }
      else {
        ppuVar6 = &local_14;
      }
      puVar4 = *ppuVar6;
      puVar3 = puVar8;
      while (puVar2 = puVar4, puVar2 != puVar8) {
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        iVar5 = (int)param_3 - (int)puVar2 >> 3;
        if (iVar9 < iVar5) {
          local_10 = puVar2 + iVar9 * 2;
          ppuVar6 = &local_10;
        }
        else {
          local_c = param_1 + (iVar5 * 0x1fffffff + iVar9) * 2;
          ppuVar6 = &local_c;
        }
        puVar3 = puVar2;
        puVar4 = *ppuVar6;
      }
      puVar3[1] = local_4;
      puVar8 = puVar8 + -2;
      param_2 = param_2 + -1;
      *puVar3 = local_8;
    } while (param_2 != 0);
  }
  return;
}

