/* speed.exe 00707380 FUN_00707380; analysis pseudocode, not buildable source.
 */

int FUN_00707380(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c [11];
  
  iVar6 = ((int)param_3 - (int)param_1) * 0x2e8ba2e9;
  iVar2 = ((int)param_3 - (int)param_1) / 0x2c;
  iVar1 = (param_2 - (int)param_1) / 0x2c;
  iVar5 = iVar1;
  local_3c = iVar2;
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar6 = local_3c / iVar3;
    iVar5 = local_3c % iVar3;
    local_3c = iVar3;
  }
  if ((local_3c < iVar2) && (0 < local_3c)) {
    puVar8 = param_1 + local_3c * 0xb;
    do {
      puVar9 = puVar8;
      puVar10 = local_2c;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      if (puVar8 + iVar1 * 0xb == param_3) {
        ppuVar7 = &param_1;
      }
      else {
        local_38 = puVar8 + iVar1 * 0xb;
        ppuVar7 = &local_38;
      }
      puVar10 = *ppuVar7;
      puVar9 = puVar8;
      while (puVar4 = puVar10, puVar4 != puVar8) {
        puVar10 = puVar4;
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        }
        iVar6 = ((int)param_3 - (int)puVar4) / 0x2c;
        if (iVar1 < iVar6) {
          local_34 = puVar4 + iVar1 * 0xb;
          ppuVar7 = &local_34;
        }
        else {
          local_30 = param_1 + (iVar1 - iVar6) * 0xb;
          ppuVar7 = &local_30;
        }
        puVar9 = puVar4;
        puVar10 = *ppuVar7;
      }
      puVar8 = puVar8 + -0xb;
      local_3c = local_3c + -1;
      puVar10 = local_2c;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      }
    } while (local_3c != 0);
    iVar6 = 0;
  }
  return iVar6;
}

