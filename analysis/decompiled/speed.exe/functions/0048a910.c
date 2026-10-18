/* speed.exe 0048a910 FUN_0048a910; analysis pseudocode, not buildable source.
 * calls 00486da0 FUN_00486da0
 * calls 00486e30 FUN_00486e30
 * calls 005c5e80 FUN_005c5e80
 * calls 00486ec0 FUN_00486ec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0048a910(int param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float *local_5c;
  float local_54;
  float local_50;
  float local_44;
  undefined1 local_40 [64];
  
  local_f4 = 0.0;
  local_f0 = 0.0;
  local_ec = 0.0;
  FUN_00486e30(param_2,&local_f4);
  FUN_00486ec0(&local_f4,local_40);
  pfVar1 = (float *)(param_1 + 0xa4);
  local_100 = *pfVar1;
  local_fc = *(float *)(param_1 + 0xa8);
  local_f8 = *(float *)(param_1 + 0xac);
  local_5c = (float *)(param_1 + 0x98);
  local_e8 = *local_5c;
  local_e4 = *(float *)(param_1 + 0x9c);
  local_e0 = *(float *)(param_1 + 0xa0);
  local_c4 = *(float *)(param_1 + 0xd0);
  local_d0 = 0.0;
  local_cc = 0.0;
  local_c8 = 0.0;
  local_c0 = 0.0;
  local_bc = 0.0;
  local_b8 = 0.0;
  local_90 = 0;
  if (0 < param_3) {
    do {
      iVar2 = local_90;
      local_80 = local_ec * local_fc - local_f0 * local_f8;
      local_7c = local_f8 * local_f4 - local_ec * local_100;
      local_78 = local_f0 * local_100 - local_fc * local_f4;
      local_8c = local_80 + local_e8;
      local_88 = local_7c + local_e4;
      local_84 = local_78 + local_e0;
      local_dc = local_8c * local_c4;
      local_d8 = local_88 * local_c4;
      local_d4 = local_84 * local_c4;
      local_68 = local_80;
      local_64 = local_7c;
      local_60 = local_78;
      fVar3 = (float10)FUN_005c5e80(local_dc * local_dc + local_d8 * local_d8 + local_d4 * local_d4)
      ;
      if ((float10)_DAT_00890968 == fVar3) break;
      local_b4 = local_dc * _DAT_00890da8;
      local_54 = local_d8 * _DAT_00890da8;
      local_50 = local_d4 * _DAT_00890da8;
      if (iVar2 == 0) {
        local_74 = local_8c * _DAT_00890da8;
        *(float *)(param_1 + 0xf0) = local_b4;
        local_70 = local_88 * _DAT_00890da8;
        *(float *)(param_1 + 0xf4) = local_54;
        local_6c = local_84 * _DAT_00890da8;
        *(float *)(param_1 + 0xf8) = local_50;
        *(float *)(param_1 + 0xd8) = local_74;
        *(float *)(param_1 + 0xdc) = local_70;
        *(float *)(param_1 + 0xe0) = local_6c;
        local_b0 = local_54;
        local_ac = local_50;
        local_44 = local_6c;
      }
      else {
        local_ac = (float)local_90 / (float)param_3;
        local_9c = 0.0;
        local_98 = 0.0;
        local_94 = 0.0;
        local_a8 = 0.0;
        local_a4 = 0.0;
        local_a0 = 0.0;
        local_b4 = local_b4 * local_ac;
        local_b0 = local_54 * local_ac;
        local_ac = local_50 * local_ac;
        FUN_00486da0(&local_b4,&local_f4,local_40,&local_9c,&local_a8);
        local_e8 = local_9c + local_e8;
        local_e4 = local_98 + local_e4;
        local_e0 = local_94 + local_e0;
        local_100 = local_a8 + local_100;
        local_fc = local_a4 + local_fc;
        local_f8 = local_a0 + local_f8;
        local_d0 = local_d0 + local_9c;
        local_cc = local_cc + local_98;
        local_c8 = local_c8 + local_94;
        local_c0 = local_c0 + local_a8;
        local_bc = local_bc + local_a4;
        local_b8 = local_b8 + local_a0;
      }
      iVar2 = iVar2 + 1;
      local_90 = iVar2;
    } while (iVar2 < param_3);
    if (iVar2 != 0) {
      *local_5c = local_d0 + *local_5c;
      local_5c[1] = local_cc + local_5c[1];
      local_5c[2] = local_c8 + local_5c[2];
      *pfVar1 = local_c0 + *pfVar1;
      *(float *)(param_1 + 0xa8) = local_bc + *(float *)(param_1 + 0xa8);
      *(float *)(param_1 + 0xac) = local_b8 + *(float *)(param_1 + 0xac);
      return 1;
    }
  }
  return 0;
}

