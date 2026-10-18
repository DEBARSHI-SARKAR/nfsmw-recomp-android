/* speed.exe 006c9860 FUN_006c9860; analysis pseudocode, not buildable source.
 * calls 0045ed20 thunk_FUN_006bd940
 */

void __thiscall FUN_006c9860(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  undefined4 *puVar5;
  int iVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((*(int *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 0x44) != 0)) {
    iVar1 = *param_2;
    iVar9 = 0;
    local_30 = 0;
    local_34 = 0;
    if (0 < *(int *)(iVar1 + 0x10)) {
      local_2c = 0;
      do {
        iVar6 = *(int *)(iVar1 + 0x14) + local_2c;
        uVar2 = local_30;
        if ((*(int *)(iVar6 + 0x50) != 0) && (uVar2 = iVar6, local_30 != 0)) {
          iVar9 = iVar9 + *(uint *)(local_30 + 0x50) / *(uint *)(*(int *)(local_30 + 0x34) + 8);
        }
        local_30 = uVar2;
        psVar3 = (short *)(*(int *)(iVar1 + 0x24) + *(int *)(iVar6 + 0x44) * 2);
        iVar10 = *(int *)(iVar6 + 0x40);
        local_28 = 0;
        if (iVar10 != 0) {
          do {
            sVar8 = (short)iVar9;
            **(short **)(param_1 + 0x38) = *psVar3 + sVar8 + *(short *)(param_1 + 0x40);
            psVar7 = (short *)(*(int *)(param_1 + 0x38) + 2);
            *(short **)(param_1 + 0x38) = psVar7;
            psVar4 = psVar3 + 2;
            *psVar7 = psVar3[1] + sVar8 + *(short *)(param_1 + 0x40);
            psVar7 = (short *)(*(int *)(param_1 + 0x38) + 2);
            *(short **)(param_1 + 0x38) = psVar7;
            psVar3 = psVar3 + 3;
            *psVar7 = *psVar4 + sVar8 + *(short *)(param_1 + 0x40);
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 2;
            local_28 = local_28 + 1;
          } while (local_28 < *(uint *)(iVar6 + 0x40));
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar10 * 3;
        local_2c = local_2c + 0x68;
        local_34 = local_34 + 1;
      } while (local_34 < *(int *)(iVar1 + 0x10));
    }
    local_28 = -1;
    local_34 = 0;
    if (0 < *(int *)(iVar1 + 0x10)) {
      local_2c = 0;
      do {
        iVar9 = *(int *)(*(int *)(iVar1 + 0x14) + 0x30 + local_2c);
        iVar6 = *(int *)(iVar1 + 0x14) + local_2c;
        if ((local_28 != iVar9) && (local_28 = iVar9, *(uint *)(iVar6 + 0x50) != 0)) {
          iVar10 = *(int *)(iVar6 + 0x4c);
          local_30 = *(uint *)(iVar6 + 0x50) / *(uint *)(*(int *)(iVar6 + 0x34) + 8);
          iVar9 = *(int *)((&DAT_0093de78)[iVar9] + 8);
          if (0 < (int)local_30) {
            do {
              thunk_FUN_006bd940(&local_20,param_3,iVar10);
              **(undefined4 **)(param_1 + 0x44) = local_20;
              puVar5 = (undefined4 *)(*(int *)(param_1 + 0x44) + 4);
              *(undefined4 **)(param_1 + 0x44) = puVar5;
              *puVar5 = local_1c;
              puVar5 = (undefined4 *)(*(int *)(param_1 + 0x44) + 4);
              *(undefined4 **)(param_1 + 0x44) = puVar5;
              *puVar5 = local_18;
              *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
              iVar10 = iVar10 + iVar9;
              local_30 = local_30 - 1;
              *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
            } while (local_30 != 0);
          }
        }
        local_34 = local_34 + 1;
        local_2c = local_2c + 0x68;
      } while (local_34 < *(int *)(iVar1 + 0x10));
    }
  }
  return;
}

