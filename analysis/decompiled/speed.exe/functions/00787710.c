/* speed.exe 00787710 FUN_00787710; analysis pseudocode, not buildable source.
 * calls 007641f0 FUN_007641f0
 * calls 00444dc0 FUN_00444dc0
 * calls 00767640 FUN_00767640
 * calls 00787350 FUN_00787350
 * calls 00762640 FUN_00762640
 * calls 00762530 FUN_00762530
 * calls 00486610 FUN_00486610
 * calls 005c6860 FUN_005c6860
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00787710(int param_1,float *param_2,float param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  float *pfVar11;
  int iVar12;
  int local_e8;
  int local_e4;
  float local_d4 [2];
  float local_cc;
  undefined4 local_c8;
  float local_c4 [2];
  float local_bc;
  float local_b4 [2];
  float local_ac;
  byte local_a8;
  undefined1 local_a7;
  float local_a4 [2];
  float local_9c;
  int local_98;
  int local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74 [2];
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  fVar3 = param_3 * param_3;
  piVar10 = *(int **)(param_1 + 4);
  if (piVar10 != *(int **)(param_1 + 8)) {
    do {
      puVar1 = (undefined4 *)*piVar10;
      pfVar2 = (float *)puVar1[7];
      if (pfVar2 != (float *)0x0) {
        local_28 = *param_2;
        local_24 = param_2[1];
        local_20 = param_2[2];
        local_60 = puVar1[2];
        local_68 = *puVar1;
        local_64 = puVar1[1];
        local_5c = 0;
        if ((*(byte *)((int)puVar1 + 0x12) & 3) == 0) {
          local_58 = 0;
          local_54 = 0x3f800000;
          local_50 = 0;
        }
        else {
          FUN_00444dc0(puVar1 + 8,puVar1,&local_58);
        }
        local_48 = puVar1[8];
        local_44 = puVar1[9];
        local_40 = puVar1[10];
        local_38 = (float)puVar1[0xc];
        local_34 = (float)puVar1[0xd];
        local_30 = (float)puVar1[0xe];
        local_4c = 0;
        local_3c = 0;
        local_2c = 0x3f800000;
        FUN_00486610(&local_28,&local_68,local_c);
        local_90 = *param_2 - param_3;
        local_98 = 0;
        local_8c = param_2[2] - param_3;
        local_88 = param_3 + *param_2;
        local_84 = param_3 + param_2[2];
        pfVar5 = pfVar2;
        if (*(short *)pfVar2 != 0) {
          do {
            pfVar11 = pfVar5 + 4;
            FUN_005c6860(1,pfVar11,local_c,local_74);
            fVar4 = (float)*(ushort *)(pfVar5 + 7) * _DAT_008b493c + param_3;
            if (local_74[0] * local_74[0] + local_6c * local_6c < fVar4 * fVar4) {
              local_80 = *pfVar11 - local_38;
              local_94 = *(ushort *)((int)pfVar5 + 0x1e) + 0x10 + (int)pfVar2;
              local_7c = pfVar5[5] - local_34;
              local_78 = pfVar5[6] - local_30;
              iVar12 = *(ushort *)(*(ushort *)((int)pfVar5 + 0x1e) + 0x16 + (int)pfVar2) - 2;
              local_a8 = 0;
              local_a7 = 0;
              FUN_00762530(0,&local_80,local_d4);
              if (0 < iVar12) {
                local_e4 = 1;
                local_e8 = iVar12;
                do {
                  FUN_007641f0(local_d4,local_c4,local_b4);
                  if ((((local_90 <= local_14) && (local_8c <= local_10)) && (local_1c <= local_88))
                     && (local_18 <= local_84)) {
                    fVar6 = local_bc - local_cc;
                    fVar4 = local_c4[0] - local_d4[0];
                    fVar9 = (local_b4[0] - local_d4[0]) * fVar6 - (local_ac - local_cc) * fVar4;
                    fVar7 = ((param_2[2] - local_bc) * (local_d4[0] - local_c4[0]) -
                            (*param_2 - local_c4[0]) * (local_cc - local_bc)) * fVar9;
                    if (fVar7 < _DAT_00890968 != (fVar7 == _DAT_00890968)) {
                      fVar8 = fVar4 * fVar4 + fVar6 * fVar6;
                      fVar7 = _DAT_00890968;
                      if (_DAT_008b5a0c < fVar8) {
                        fVar7 = ((*param_2 - local_d4[0]) * fVar4 + (param_2[2] - local_cc) * fVar6)
                                / fVar8;
                      }
                      local_a4[0] = fVar4 * fVar7 + local_d4[0];
                      local_9c = fVar6 * fVar7 + local_cc;
                      if (fVar3 <= (param_2[2] - local_9c) * (param_2[2] - local_9c) +
                                   (*param_2 - local_a4[0]) * (*param_2 - local_a4[0]))
                      goto LAB_00787c0a;
                    }
                    fVar4 = ((param_2[2] - local_ac) * (local_c4[0] - local_b4[0]) -
                            (*param_2 - local_b4[0]) * (local_bc - local_ac)) * fVar9;
                    if (((fVar4 < _DAT_00890968 == (fVar4 == _DAT_00890968)) ||
                        (FUN_00767640(param_2,local_c4,local_b4,local_a4),
                        (*param_2 - local_a4[0]) * (*param_2 - local_a4[0]) +
                        (param_2[2] - local_9c) * (param_2[2] - local_9c) < fVar3)) &&
                       ((fVar9 = ((param_2[2] - local_cc) * (local_b4[0] - local_d4[0]) -
                                 (*param_2 - local_d4[0]) * (local_ac - local_cc)) * fVar9,
                        fVar9 < _DAT_00890968 == (fVar9 == _DAT_00890968) ||
                        (FUN_00767640(param_2,local_b4,local_d4,local_a4),
                        (*param_2 - local_a4[0]) * (*param_2 - local_a4[0]) +
                        (param_2[2] - local_9c) * (param_2[2] - local_9c) < fVar3)))) {
                      local_c8 = *(undefined4 *)
                                  ((int)pfVar2 +
                                  (uint)*(ushort *)((int)pfVar2 + 2) +
                                  (uint)local_a8 * 4 + *(ushort *)((int)pfVar2 + 6) + 0x10);
                      FUN_00787350(local_d4);
                    }
                  }
LAB_00787c0a:
                  if (local_e4 < iVar12) {
                    FUN_00762640(local_e4,&local_80,local_d4);
                  }
                  local_e4 = local_e4 + 1;
                  local_e8 = local_e8 + -1;
                } while (local_e8 != 0);
              }
            }
            local_98 = local_98 + 1;
            pfVar5 = pfVar11;
          } while (local_98 < (int)(uint)*(ushort *)pfVar2);
        }
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != *(int **)(param_1 + 8));
  }
  return;
}

