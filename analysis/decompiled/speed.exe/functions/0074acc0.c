/* speed.exe 0074acc0 FUN_0074acc0; analysis pseudocode, not buildable source.
 * calls 004102f0 FUN_004102f0
 * calls 006d1e30 FUN_006d1e30
 * calls 006bd940 FUN_006bd940
 * calls 006d1f60 FUN_006d1f60
 * calls 006c1120 FUN_006c1120
 * calls 00445090 FUN_00445090
 * calls 006c10e0 FUN_006c10e0
 * calls 0045f490 FUN_0045f490
 * calls 00405ed0 FUN_00405ed0
 * calls 0045f7c0 FUN_0045f7c0
 */

/* WARNING: Removing unreachable block (ram,0x0074af4f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0074acc0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  char *local_cc;
  uint local_c8;
  uint local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  uint local_ac;
  undefined4 *local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  if ((((DAT_008f86e4 != 0) && (DAT_00904ad0 != 0)) && (DAT_00925e90 == 6)) &&
     (*(int *)(param_1 + 0x284) != 0)) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x288) + 0x40);
    local_7c = *(undefined4 *)(iVar4 + 0x54);
    local_80 = *(undefined4 *)(iVar4 + 0x50);
    local_78 = *(undefined4 *)(iVar4 + 0x58);
    FUN_006bd940(&local_80,param_1 + 0x3650,&local_80);
    iVar4 = FUN_00405ed0(1);
    if (iVar4 != 0) {
      local_84 = iVar4;
      FUN_00445090(param_1 + 0x3610);
      local_ac = *(uint *)(param_1 + 0x33d8);
      puVar6 = (undefined4 *)(param_1 + 0x3404);
      local_c4 = 0;
      do {
        if (puVar6[-10] != 0) {
          local_a8 = puVar6;
          cVar3 = FUN_006c1120(*(undefined4 *)(param_1 + 0x288),*puVar6,iVar4,
                               *(undefined4 *)(param_1 + 0x284));
          if (cVar3 == '\0') {
            return;
          }
          local_c8 = 0;
          if (local_ac != 0) {
            local_cc = (char *)(param_1 + 0x2e60);
            iVar7 = 0x2a;
            do {
              FUN_006c10e0();
              uVar8 = (uint)(byte)local_cc[1];
              if ((uVar8 == local_c4) && (*local_cc == '\0')) {
                pfVar5 = (float *)FUN_004102f0(local_20,(*(int *)(param_1 + 0x298) + iVar7) * 0x10 +
                                                        param_1);
                local_bc = pfVar5[1];
                local_b8 = pfVar5[2];
                local_c0 = *pfVar5;
                FUN_0045f490(&local_c0,&local_c0);
                FUN_0045f7c0(&local_a0,&local_80,&local_c0);
                uVar2 = local_58;
                fVar1 = *(float *)((uVar8 + 0x342) * 0x10 + param_1);
                local_a0 = local_a0 * fVar1;
                local_9c = local_9c * fVar1;
                local_98 = local_98 * fVar1;
                fVar1 = *(float *)(uVar8 * 0x10 + 0x3424 + param_1) + *(float *)(param_1 + 0x3690);
                local_c0 = local_c0 * fVar1;
                local_bc = local_bc * fVar1;
                local_b8 = local_b8 * fVar1;
                if (*local_cc == '\0') {
                  local_60 = *(undefined4 *)(param_1 + 0x3550);
                  puVar6 = (undefined4 *)((*(int *)(param_1 + 0x298) + iVar7) * 0x10 + param_1);
                  local_6c = puVar6[1];
                  local_68 = puVar6[2];
                  local_70 = *puVar6;
                  local_a4 = (float)(local_c8 % 10) * _DAT_00890cd4;
                  local_58 = local_50;
                  local_5c = _DAT_00890cd4 + local_a4;
                  local_88 = uVar2;
                  local_50 = uVar2;
                  local_54 = local_a4;
                  local_40 = local_a0;
                  local_3c = local_9c;
                  local_38 = local_98;
                  local_30 = local_c0;
                  local_2c = local_bc;
                  local_28 = local_b8;
                  FUN_006d1e30(&local_70);
                }
              }
              local_c8 = local_c8 + 1;
              local_cc = local_cc + 4;
              iVar7 = iVar7 + 2;
              iVar4 = local_84;
              puVar6 = local_a8;
            } while (local_c8 < local_ac);
          }
          FUN_006d1f60();
        }
        local_c4 = local_c4 + 1;
        puVar6 = puVar6 + 1;
      } while ((int)local_c4 < 1);
    }
  }
  return;
}

