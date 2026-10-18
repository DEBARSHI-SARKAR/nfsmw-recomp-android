/* speed.exe 005ae7c0 FUN_005ae7c0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005ae7c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = 1;
  if (1 < *param_1) {
    local_10 = 0xc;
    do {
      if (0 < local_10) {
        iVar6 = 0;
        local_18 = local_14;
        do {
          iVar1 = param_1[1];
          if (*(uint *)(local_10 + 8 + iVar1) < *(uint *)(iVar6 + 8 + iVar1)) {
            puVar5 = (undefined4 *)(local_10 + iVar1);
            uVar2 = *puVar5;
            uVar3 = puVar5[1];
            uVar4 = puVar5[2];
            puVar7 = (undefined4 *)(iVar1 + iVar6);
            *puVar5 = *puVar7;
            puVar5[1] = puVar7[1];
            puVar5[2] = puVar7[2];
            puVar5 = (undefined4 *)(param_1[1] + iVar6);
            *puVar5 = uVar2;
            puVar5[1] = uVar3;
            puVar5[2] = uVar4;
          }
          iVar6 = iVar6 + 0xc;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + 0xc;
    } while (local_14 < *param_1);
  }
  return;
}

