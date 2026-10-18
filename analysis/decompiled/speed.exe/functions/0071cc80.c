/* speed.exe 0071cc80 FUN_0071cc80; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 00713310 FUN_00713310
 * calls 00713750 FUN_00713750
 * calls 005d0370 FUN_005d0370
 * calls 00712180 FUN_00712180
 * calls 007159d0 FUN_007159d0
 */

void __fastcall FUN_0071cc80(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  int *local_44;
  undefined4 *local_40;
  undefined4 *puStack_3c;
  float fStack_38;
  undefined **local_34;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined **local_20;
  int *local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008802e0;
  local_c = ExceptionList;
  iVar2 = param_1[0x17];
  if (iVar2 == 0) {
    return;
  }
  if (param_1[0x18] - iVar2 >> 3 == 0) {
    return;
  }
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_34 = &PTR_FUN_008b2658;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_20 = &PTR_FUN_008b2658;
  local_4 = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0x18] - iVar2 >> 3;
  }
  ExceptionList = &local_c;
  local_40 = param_1;
  FUN_00712180(iVar2);
  if (param_1[0x17] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)(param_1[0x18] - param_1[0x17]) >> 3;
  }
  FUN_00712180(iVar2);
  iVar2 = param_1[0x17];
  if (iVar2 != param_1[0x18]) {
    do {
      local_44 = *(int **)(iVar2 + 4);
      (**(code **)(*local_44 + 0x60))();
      FUN_00713750(&local_44);
      iVar2 = iVar2 + 8;
    } while (iVar2 != param_1[0x18]);
  }
  puVar8 = local_28;
  local_44 = local_18;
  puVar6 = local_2c;
  if (local_18 != local_14) {
joined_r0x0071cd7f:
    do {
      if (puVar6 != puVar8) {
        piVar4 = (int *)*local_44;
        puStack_3c = (undefined4 *)(**(code **)(*(int *)*puVar6 + 0x30))();
        puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x30))();
        if (puVar3 != puStack_3c) {
          puVar6 = puVar6 + 1;
          goto joined_r0x0071cd7f;
        }
        uVar5 = (**(code **)(*(int *)*local_44 + 0x28))();
        FUN_007159d0(uVar5);
      }
      local_44 = local_44 + 1;
      puVar6 = local_2c;
    } while (local_44 != local_14);
  }
  puVar6 = local_2c;
  if (local_2c != (undefined4 *)0x0) {
    if ((1 < (uint)((int)puVar8 - (int)local_2c >> 2)) && (local_2c != puVar8)) {
      do {
        if ((uint)((int)puVar8 - (int)local_2c >> 2) < 2) break;
        puVar3 = puVar6 + 1;
        puVar7 = puVar3;
        for (; puStack_3c = puVar7, puVar3 != puVar8; puVar3 = puVar3 + 1) {
          piVar4 = (int *)*puVar3;
          local_44 = (int *)(**(code **)(*(int *)*puVar6 + 0x30))();
          piVar4 = (int *)(**(code **)(*piVar4 + 0x30))();
          if (local_44 == piVar4) {
            piVar4 = (int *)*puVar6;
            local_44 = (int *)(**(code **)(*(int *)*puVar3 + 0x28))();
            piVar4 = (int *)(**(code **)(*piVar4 + 0x28))();
            if (piVar4 != local_44) {
              piVar4 = (int *)*puVar6;
              local_44 = (int *)*puVar3;
              fVar9 = (float10)(**(code **)(*piVar4 + 0x58))();
              fStack_38 = (float)fVar9;
              fVar9 = (float10)(**(code **)(*local_44 + 0x58))();
              puVar7 = puVar6;
              if (fVar9 <= (float10)fStack_38) {
                uVar5 = (**(code **)(*piVar4 + 0x28))();
                param_1 = local_40;
                FUN_007159d0(uVar5);
                FID_conflict__memcpy(puVar6,puStack_3c,((int)puVar8 - (int)puStack_3c >> 2) << 2);
                puVar8 = puVar8 + -1;
                local_28 = puVar8;
              }
              else {
                uVar5 = (**(code **)(*local_44 + 0x28))();
                param_1 = local_40;
                FUN_007159d0(uVar5);
                FID_conflict__memcpy(puVar3,puVar3 + 1,((int)puVar8 - (int)(puVar3 + 1) >> 2) << 2);
                puVar8 = puVar8 + -1;
                local_28 = puVar8;
              }
              break;
            }
          }
          puVar7 = puStack_3c;
          param_1 = local_40;
        }
        puVar6 = puVar7;
      } while (puVar7 != puVar8);
    }
    puVar6 = local_2c;
    if ((int)puVar8 - (int)local_2c >> 2 != 0) {
      puVar3 = puVar6;
      if (((((int *)param_1[0x37] != (int *)0x0) &&
           (cVar1 = (**(code **)(*(int *)param_1[0x37] + 0x60))(), cVar1 == '\0')) ||
          ((int *)param_1[0x37] == (int *)0x0)) ||
         (cVar1 = (**(code **)(*(int *)param_1[0x37] + 0x1a0))(), cVar1 != '\0')) {
        while (local_40 = puVar3, local_40 != puVar8) {
          piVar4 = (int *)*local_40;
          cVar1 = (**(code **)(*piVar4 + 0x19c))();
          if ((cVar1 != '\0') && (cVar1 = (**(code **)(*piVar4 + 0x70))(), cVar1 != '\0')) {
            param_1[0x37] = piVar4;
            if ((param_1[0x4e] == 2) && (cVar1 = (**(code **)(*piVar4 + 0x1a0))(), cVar1 == '\0')) {
              (**(code **)(*(int *)param_1[0x37] + 0x128))();
            }
            break;
          }
          puVar3 = local_40 + 1;
        }
      }
      if ((((int *)param_1[0x37] != (int *)0x0) &&
          (cVar1 = (**(code **)(*(int *)param_1[0x37] + 0x60))(), cVar1 == '\0')) &&
         (cVar1 = FUN_00713310(param_1[0x37]), cVar1 == '\0')) {
        local_4 = local_4 & 0xffffff00;
        if (local_18 != (int *)0x0) {
          FUN_005d0370(local_18,(local_10 - (int)local_18 >> 2) * 4,0);
        }
        goto LAB_0071d04e;
      }
    }
  }
  local_4 = local_4 & 0xffffff00;
  if (local_18 != (int *)0x0) {
    FUN_005d0370(local_18,(local_10 - (int)local_18 >> 2) * 4,0);
  }
  if (puVar6 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return;
  }
LAB_0071d04e:
  local_4 = 0xffffffff;
  FUN_005d0370(puVar6,(local_24 - (int)puVar6 >> 2) << 2,0);
  ExceptionList = local_c;
  return;
}

