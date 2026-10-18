/* speed.exe 00695f50 FUN_00695f50; analysis pseudocode, not buildable source.
 */

int FUN_00695f50(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_34;
  undefined4 local_30 [12];
  
  iVar5 = ((int)param_3 - (int)param_1) * 0x2aaaaaab;
  iVar2 = ((int)param_3 - (int)param_1) / 0x30;
  iVar1 = (param_2 - (int)param_1) / 0x30;
  iVar4 = iVar1;
  local_34 = iVar2;
  while (iVar3 = iVar4, iVar3 != 0) {
    iVar5 = local_34 / iVar3;
    iVar4 = local_34 % iVar3;
    local_34 = iVar3;
  }
  if ((local_34 < iVar2) && (0 < local_34)) {
    puVar7 = param_1 + local_34 * 0xc;
    do {
      puVar9 = puVar7;
      puVar10 = local_30;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar9 = puVar7;
      puVar10 = param_1;
      if (puVar7 + iVar1 * 0xc != param_3) {
        puVar10 = puVar7 + iVar1 * 0xc;
      }
      while (puVar10 != puVar7) {
        puVar6 = puVar10;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        iVar5 = ((int)param_3 - (int)puVar10) / 0x30;
        puVar6 = (undefined4 *)(iVar1 * 0x30);
        puVar8 = puVar10;
        if (iVar5 <= iVar1) {
          puVar6 = param_1;
          puVar8 = (undefined4 *)((iVar1 - iVar5) * 0x30);
        }
        puVar9 = puVar10;
        puVar10 = (undefined4 *)((int)puVar8 + (int)puVar6);
      }
      puVar7 = puVar7 + -0xc;
      local_34 = local_34 + -1;
      puVar10 = local_30;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      }
    } while (local_34 != 0);
    iVar5 = 0;
  }
  return iVar5;
}

