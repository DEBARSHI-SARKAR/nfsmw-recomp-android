/* speed.exe 006be590 FUN_006be590; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_006be590(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_18;
  int local_14;
  int local_10;
  undefined4 uStack_8;
  
  uVar5 = 0;
  uVar7 = 0;
  iVar2 = -1;
  local_14 = 0;
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    local_18 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x14) + local_18;
      if (iVar2 == *(int *)(*(int *)(param_1 + 0x14) + 0x30 + local_18)) {
        *(undefined4 *)(iVar6 + 0x54) = uVar7;
        *(undefined4 *)(iVar6 + 0x58) = uVar5;
      }
      else {
        puVar1 = (undefined4 *)(iVar6 + 0x54);
        puVar9 = (undefined4 *)&DAT_00000008;
        (**(code **)(*DAT_00982bdc + 0x68))
                  (DAT_00982bdc,*(undefined4 *)(iVar6 + 0x50),8,0,1,puVar1,0);
        *(uint *)(iVar6 + 0x58) = *(uint *)(iVar6 + 0x50) / *(uint *)(*(int *)(iVar6 + 0x34) + 8);
        (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1,0,0,&stack0xffffffd8,0);
        uVar4 = *(uint *)(iVar6 + 0x50);
        puVar8 = *(undefined4 **)(iVar6 + 0x4c);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1);
        uVar7 = *puVar1;
        local_14 = local_14 + 1;
        uVar5 = uStack_8;
      }
      iVar2 = *(int *)(iVar6 + 0x30);
      local_10 = local_10 + 1;
      local_18 = local_18 + 0x68;
    } while (local_10 < *(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x20) = 2;
    return local_14;
  }
  *(undefined4 *)(param_1 + 0x20) = 2;
  return 0;
}

