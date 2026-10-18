/* speed.exe 0041e920 FUN_0041e920; analysis pseudocode, not buildable source.
 */

void FUN_0041e920(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_20 [8];
  
  iVar7 = (int)param_3 - (int)param_1 >> 5;
  iVar6 = param_2 - (int)param_1 >> 5;
  iVar4 = iVar6;
  local_30 = iVar7;
  while (iVar1 = iVar4, iVar1 != 0) {
    iVar4 = local_30 % iVar1;
    local_30 = iVar1;
  }
  if ((local_30 < iVar7) && (0 < local_30)) {
    puVar5 = param_1 + local_30 * 8;
    do {
      puVar8 = puVar5;
      puVar9 = local_20;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      if (puVar5 + iVar6 * 8 == param_3) {
        ppuVar3 = &param_1;
      }
      else {
        local_2c = puVar5 + iVar6 * 8;
        ppuVar3 = &local_2c;
      }
      puVar9 = *ppuVar3;
      puVar8 = puVar5;
      while (puVar2 = puVar9, puVar2 != puVar5) {
        iVar4 = (int)param_3 - (int)puVar2 >> 5;
        puVar9 = puVar2;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar8 = puVar8 + 1;
        }
        if (iVar6 < iVar4) {
          local_28 = puVar2 + iVar6 * 8;
          ppuVar3 = &local_28;
        }
        else {
          local_24 = param_1 + (iVar4 * 0x7ffffff + iVar6) * 8;
          ppuVar3 = &local_24;
        }
        puVar8 = puVar2;
        puVar9 = *ppuVar3;
      }
      puVar5 = puVar5 + -8;
      local_30 = local_30 + -1;
      puVar9 = local_20;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
    } while (local_30 != 0);
  }
  return;
}

