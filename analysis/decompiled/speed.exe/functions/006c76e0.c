/* speed.exe 006c76e0 FUN_006c76e0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c76e0(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_18;
  
  local_114 = *(float *)(param_1 + 0x50);
  local_120 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x30);
  local_11c = *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x30);
  local_118 = *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x30);
  local_f0 = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x40) - local_120;
  local_ec = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x40) - local_11c;
  local_e8 = *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x40) - local_118;
  local_e4 = (*(float *)(param_1 + 0x54) - local_114) * _DAT_008910f0;
  local_f8 = *(float *)(DAT_009b392c + 0x60) * *(float *)(param_1 + 0x5c);
  local_104 = *(float *)(DAT_009b392c + 0x60) * *(float *)(param_1 + 0x6c);
  local_100 = local_f8 * *(float *)(param_1 + 0x60);
  local_fc = local_f8 * *(float *)(param_1 + 100);
  local_f8 = local_f8 * *(float *)(param_1 + 0x68);
  local_e0 = local_104 * *(float *)(param_1 + 0x70) - local_100;
  local_dc = local_104 * *(float *)(param_1 + 0x74) - local_fc;
  local_d8 = local_104 * *(float *)(param_1 + 0x78) - local_f8;
  fVar2 = _DAT_0089096c;
  if (*(char *)(DAT_00982c80 + 0x40) == '\0') {
    fVar2 = _DAT_008933d4;
  }
  local_c4 = 0;
  local_94 = 0;
  local_d0 = *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x80) * fVar2;
  local_cc = *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x80) * fVar2;
  local_c8 = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x80) * fVar2;
  local_a0 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x90) * fVar2 - local_d0;
  local_9c = *(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x90) * fVar2 - local_cc;
  local_98 = *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x90) * fVar2 - local_c8;
  if ((((param_2 & 0x100) != 0) && (DAT_009017b8 != 0)) && (-1 < (char)param_2)) {
    local_120 = 0.0;
    local_11c = 0.0;
    local_118 = 0.0;
    local_114 = 0.0;
    local_f0 = 0.0;
    local_ec = 0.0;
    local_e8 = 0.0;
    local_e4 = 0.0;
    local_100 = 0.0;
    local_fc = 0.0;
    local_f8 = 0.0;
    local_e0 = 0.0;
    local_dc = 0.0;
    local_d8 = 0.0;
  }
  local_d4 = 0;
  local_f4 = 0;
  if (*(int *)(DAT_00982c80 + 4) == 4) {
    if (*(char *)(DAT_00982c80 + 0x40) == '\0') {
      local_c0 = 0x3f800000;
      local_b4 = 0x3f800000;
      local_bc = 0x3f800000;
      local_a8 = 0;
      local_68 = local_f0 * _DAT_008933d4 + local_120;
      local_b0 = 0;
      local_b8 = 0x3f800000;
      local_ac = 0;
      local_a4 = 0x3f800000;
      local_5c = 0x3f800000;
      local_64 = local_ec * _DAT_008933d4 + local_11c;
      local_3c = 0x3f800000;
      local_60 = local_e8 * _DAT_008933d4 + local_118;
      local_90 = local_e0 * _DAT_008933d4 + local_100;
      local_58 = 0x3f800000;
      local_8c = local_dc * _DAT_008933d4 + local_fc;
      local_4c = 0x3f800000;
      local_30 = 0;
      local_54 = 0x3f800000;
      local_88 = local_d8 * _DAT_008933d4 + local_f8;
      local_38 = 0;
      local_2c = 0x3f800000;
      local_50 = 0x3f800000;
      local_80 = local_a0 * _DAT_008910f0 + local_d0;
      local_34 = 0;
      local_7c = local_9c * _DAT_008910f0 + local_cc;
      local_78 = local_98 * _DAT_008910f0 + local_c8;
      local_28 = _DAT_008fae84 * *(float *)(param_1 + 0x58);
      if (_DAT_00890cd4 <= local_28) {
        if (_DAT_00894b64 < local_28) {
          local_28 = 20.0;
        }
      }
      else {
        local_28 = 0.1;
      }
      local_48 = local_90;
      local_44 = local_8c;
      local_40 = local_88;
      local_18 = local_60;
      (**(code **)(*DAT_00982bdc + 0xc4))(DAT_00982bdc,&local_68);
      piVar3 = DAT_00982bdc;
      iVar1 = *DAT_00982bdc;
      iVar4 = FUN_007c4b80();
      uVar5 = FUN_007c4b80();
      uVar6 = FUN_007c4b80();
      uVar7 = FUN_007c4b80();
      (**(code **)(iVar1 + 0xe4))(piVar3,0x3c,((iVar4 << 8 | uVar5) << 8 | uVar6) << 8 | uVar7);
      return;
    }
  }
  else if (*(int *)(DAT_00982c80 + 4) != 2) {
    return;
  }
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x88))
            (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x254),
             &local_120);
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x88))
            (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x27c),
             &local_fc);
  if (*(int *)(DAT_00982c80 + 4) == 4) {
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x88))
              (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xccc)
               ,&local_118);
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x88))
              (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xd1c)
               ,&local_104);
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x88))
              (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x394)
               ,&local_100);
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x88))
              (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x36c)
               ,&local_dc);
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x78))
              (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xcf4)
               ,_DAT_009018e0 * *(float *)(param_1 + 0x58));
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x78))
              (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x3bc)
               ,_DAT_009018dc * *(float *)(param_1 + 0x7c));
  }
  return;
}

