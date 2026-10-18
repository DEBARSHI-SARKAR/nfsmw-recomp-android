/* speed.exe 006ad4f0 FUN_006ad4f0; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 006906b0 FUN_006906b0
 * calls 00671530 FUN_00671530
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ad4f0(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  char local_ed;
  float local_ec;
  float local_e8;
  int *local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  uint local_cc;
  int local_c8;
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
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [4];
  float local_40;
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  local_94 = param_2[0x30];
  *(float *)(*(int *)(param_1 + 0xf4) + 200) = param_2[0x17];
  *(float *)(*(int *)(param_1 + 0xf4) + 0xcc) = param_2[0x1f];
  *(float *)(*(int *)(param_1 + 0xf8) + 200) = param_2[0x17];
  *(float *)(*(int *)(param_1 + 0xf8) + 0xcc) = param_2[0x1f];
  *(float *)(*(int *)(param_1 + 0xfc) + 200) = param_2[0x17];
  *(float *)(*(int *)(param_1 + 0xfc) + 0xcc) = param_2[0x1f];
  local_e4 = (int *)(param_1 + 0xf4);
  *(float *)(*(int *)(param_1 + 0x100) + 200) = param_2[0x17];
  *(float *)(*(int *)(param_1 + 0x100) + 0xcc) = param_2[0x1f];
  local_a0 = param_2[0x2b];
  local_10c = param_2[0x1c];
  local_108 = param_2[0x1d];
  local_104 = param_2[0x1e];
  local_c8 = 0;
  local_ec = 0.0;
  local_18 = local_108 * param_2[4] + local_10c * *param_2 + local_104 * param_2[8];
  local_14 = local_104 * param_2[9] + local_108 * param_2[5] + local_10c * param_2[1];
  local_10 = local_10c * param_2[2] + local_104 * param_2[10] + local_108 * param_2[6];
  iVar5 = *(int *)(param_1 + 0xc0);
  local_38[0] = *(float *)(iVar5 + 8);
  local_20 = *(float *)(iVar5 + 0x30) * _DAT_008aae8c;
  local_ed = '\0';
  local_cc = 0;
  local_38[2] = *(float *)(iVar5 + 0x38) * _DAT_008aae8c;
  local_28 = *(float *)(iVar5 + 0x10) * _DAT_008a9388;
  local_50[0] = *(float *)(iVar5 + 0x18) * _DAT_008a9388;
  local_1c = *(float *)(iVar5 + 0x34) * _DAT_008aae8c;
  local_38[3] = *(float *)(iVar5 + 0x3c) * _DAT_008aae8c;
  local_24 = *(float *)(iVar5 + 0x14) * _DAT_008a9388;
  local_38[1] = *(float *)(iVar5 + 0xc);
  local_50[1] = *(float *)(iVar5 + 0x1c) * _DAT_008a9388;
  local_50[2] = (*(float *)(*local_e4 + 0x78) - *(float *)(*(int *)(param_1 + 0xf8) + 0x78)) *
                *(float *)(iVar5 + 0x48) * _DAT_008aae8c;
  local_50[3] = -local_50[2];
  local_40 = (*(float *)(*(int *)(param_1 + 0xfc) + 0x78) -
             *(float *)(*(int *)(param_1 + 0x100) + 0x78)) *
             *(float *)(iVar5 + 0x4c) * _DAT_008aae8c;
  local_3c = -local_40;
  do {
    iVar5 = *local_e4;
    uVar7 = local_cc >> 1;
    FUN_00671530(param_2 + 0x18,param_2 + 0x14,param_2,local_38 + 8,param_2[0x30],
                 *(undefined4 *)(iVar5 + 0xc4),1,param_2[0x36],param_2[0x21] + param_2[0x21]);
    local_d8 = *(float *)(iVar5 + 0x44);
    local_dc = *(float *)(iVar5 + 0x40);
    local_e0 = *(float *)(iVar5 + 0x3c);
    local_bc = param_2[10];
    local_c0 = param_2[9];
    local_c4 = param_2[8];
    local_10c = local_bc * local_dc - local_c0 * local_d8;
    local_108 = local_d8 * local_c4 - local_bc * local_e0;
    local_104 = local_c0 * local_e0 - local_dc * local_c4;
    local_5c = local_10c;
    local_58 = local_108;
    local_54 = local_104;
    FUN_0040fe20(&local_10c,&local_10c);
    fVar4 = _DAT_00890968;
    local_78 = *(float *)(iVar5 + 0x48);
    fVar2 = local_e0 * param_2[4] + local_d8 * param_2[6] + local_dc * param_2[5];
    fVar3 = _DAT_0089096c;
    if ((fVar2 < _DAT_0089096c) && (fVar3 = fVar2, fVar2 < _DAT_00890968)) {
      fVar3 = _DAT_00890968;
    }
    local_e8 = fVar3 * local_50[uVar7] + local_78;
    local_f4 = local_38[uVar7 + 4];
    fVar2 = local_ec;
    if ((*(float *)(iVar5 + 0x78) == _DAT_00890968) &&
       (fVar2 = local_e8 - local_f4, local_e8 - local_f4 < local_ec)) {
      fVar2 = local_ec;
    }
    local_ec = fVar2;
    if (local_e8 <= _DAT_00890968) {
      local_e8 = _DAT_00890968;
    }
    fVar2 = local_ec;
    if ((local_f4 < local_e8) &&
       (fVar2 = local_e8 - local_f4, local_e8 = local_f4, fVar2 < local_ec)) {
      fVar2 = local_ec;
    }
    local_ec = fVar2;
    if ((local_e8 <= _DAT_00890968) || (fVar3 <= _DAT_008f8760)) {
      *(undefined4 *)(iVar5 + 0x5c) = DAT_008a2fb4;
      *(undefined4 *)(iVar5 + 0x60) = DAT_008a2fb8;
      *(undefined4 *)(iVar5 + 100) = DAT_008a2fbc;
      *(undefined4 *)(iVar5 + 0xd4) = 0;
      *(undefined4 *)(iVar5 + 0xe4) = 0;
      *(undefined1 *)(iVar5 + 0x100) = 0;
      if ((fVar4 < *(float *)(iVar5 + 0xcc)) || (_DAT_00890968 < *(float *)(iVar5 + 200))) {
        *(undefined4 *)(iVar5 + 0xd0) = 0;
      }
      *(undefined4 *)(iVar5 + 0xd8) = 0;
      *(undefined4 *)(iVar5 + 0xdc) = 0;
    }
    else {
      local_c8 = local_c8 + 1;
      local_f4 = _DAT_0089096c / local_94;
      fVar2 = (local_e8 - *(float *)(iVar5 + 0x78)) * local_f4 * local_38[uVar7 + 6];
      if (local_a0 * *(float *)(*(int *)(param_1 + 0xc0) + 0x58) * _DAT_00891608 < fVar2) {
        fVar2 = _DAT_00890968;
      }
      local_d0 = fVar2 + local_50[local_cc + 2] +
                 (local_e8 * local_38[uVar7] + _DAT_0089096c) * local_38[uVar7 + 2] * local_e8;
      if (local_d0 <= _DAT_00890968) {
        local_d0 = 0.0;
      }
      local_4 = param_2[6];
      local_b8 = local_d0 * param_2[4];
      local_b4 = param_2[5] * local_d0;
      local_b0 = local_4 * local_d0;
      local_9c = fVar3 * _DAT_00890e98 - _DAT_008aac70;
      if (local_9c <= _DAT_00894b58) {
        local_9c = 0.3;
      }
      FUN_005c5e80(*(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x8c) +
                   *(float *)(iVar5 + 0x90) * *(float *)(iVar5 + 0x90) +
                   *(float *)(iVar5 + 0x94) * *(float *)(iVar5 + 0x94));
      local_d4 = local_104 * *(float *)(iVar5 + 0x94) +
                 local_10c * *(float *)(iVar5 + 0x8c) + local_108 * *(float *)(iVar5 + 0x90);
      FUN_006906b0(local_d4,local_c4 * *(float *)(iVar5 + 0x8c) +
                            local_bc * *(float *)(iVar5 + 0x94) +
                            local_c0 * *(float *)(iVar5 + 0x90),local_9c * local_d0,param_2[0x30]);
      local_98 = *(float *)(iVar5 + 0xd8);
      local_a4 = local_a0 * _DAT_008910f0 * local_f4 * local_d4;
      if (local_a4 < _DAT_00890968) {
        local_a4 = -local_a4;
      }
      local_d4 = -local_a4;
      if (local_98 < local_a4) {
        local_a4 = local_98;
      }
      if (local_a4 < local_d4) {
        local_a4 = local_d4;
      }
      local_ac = local_10c * local_a4;
      local_a8 = local_108 * local_a4;
      local_a4 = local_104 * local_a4;
      local_100 = local_108 * local_d8 - local_104 * local_dc;
      local_fc = local_104 * local_e0 - local_d8 * local_10c;
      local_f8 = local_dc * local_10c - local_108 * local_e0;
      local_80 = local_a8;
      local_7c = local_a4;
      local_74 = local_100;
      local_70 = local_fc;
      local_6c = local_f8;
      local_68 = local_ac;
      local_64 = local_a8;
      local_60 = local_a4;
      FUN_0040fe20(&local_100,&local_100);
      fVar2 = *(float *)(iVar5 + 0xdc);
      local_fc = local_fc * fVar2;
      local_f8 = local_f8 * fVar2;
      local_90 = local_100 * fVar2 + local_ac + local_b8;
      *(float *)(iVar5 + 0x5c) = local_90;
      local_8c = local_a8 + local_fc + local_b4;
      local_88 = local_a4 + local_f8 + local_b0;
      *(float *)(iVar5 + 0x60) = local_8c;
      *(float *)(iVar5 + 100) = local_88;
      local_ed = '\x01';
    }
    if (local_e8 == _DAT_00890968) {
      *(float *)(iVar5 + 0x68) = local_94 + *(float *)(iVar5 + 0x68);
    }
    else {
      *(undefined4 *)(iVar5 + 0x68) = 0;
    }
    fVar2 = _DAT_00890968;
    if (_DAT_00890968 < local_e8) {
      fVar2 = local_e8;
    }
    *(float *)(iVar5 + 0x78) = fVar2;
    local_cc = local_cc + 1;
    local_e4 = local_e4 + 1;
  } while (local_cc < 4);
  if (local_ed != '\0') {
    local_100 = param_2[0x1c];
    local_fc = param_2[0x1d];
    local_f8 = param_2[0x1e];
    uVar7 = 0;
    local_b8 = local_f8 * param_2[8] + local_fc * param_2[4] + local_100 * *param_2 + param_2[0xc];
    local_b4 = local_100 * param_2[1] + local_fc * param_2[5] + local_f8 * param_2[9] + param_2[0xd]
    ;
    local_b0 = local_f8 * param_2[10] + local_100 * param_2[2] + local_fc * param_2[6] +
               param_2[0xe];
    iVar5 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    if (iVar5 != 0) {
      local_e4 = (int *)(param_1 + 0xf4);
      do {
        iVar5 = *local_e4;
        local_100 = *(float *)(iVar5 + 0x6c);
        local_f8 = *(float *)(iVar5 + 0x74);
        local_fc = (*(float *)(iVar5 + 0x70) + *(float *)(iVar5 + 0x78)) - local_50[uVar7 >> 1];
        pfVar1 = (float *)(iVar5 + 0x5c);
        local_10c = local_f8 * param_2[8] + local_fc * param_2[4] + local_100 * *param_2 +
                    param_2[0xc];
        local_108 = local_100 * param_2[1] + local_fc * param_2[5] + local_f8 * param_2[9] +
                    param_2[0xd];
        local_104 = local_f8 * param_2[10] + local_100 * param_2[2] + local_fc * param_2[6] +
                    param_2[0xe];
        *(float *)(iVar5 + 0x4c) = local_10c;
        *(float *)(iVar5 + 0x50) = local_108;
        *(float *)(iVar5 + 0x54) = local_104;
        local_ac = (local_108 - local_b4) * *(float *)(iVar5 + 100) -
                   (local_104 - local_b0) * *(float *)(iVar5 + 0x60);
        local_a8 = (local_104 - local_b0) * *pfVar1 -
                   (local_10c - local_b8) * *(float *)(iVar5 + 100);
        local_a4 = (local_10c - local_b8) * *(float *)(iVar5 + 0x60) -
                   (local_108 - local_b4) * *pfVar1;
        fStack_84 = local_ac;
        local_80 = local_a8;
        local_7c = local_a4;
        (**(code **)(**(int **)(param_1 + 0xcc) + 0x84))(pfVar1,&fStack_84);
        local_ec = (float)((int)local_ec + 4);
        uVar7 = uVar7 + 1;
        uVar6 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
      } while (uVar7 < uVar6);
    }
  }
  if (local_ec <= _DAT_00890968) {
    *(int *)(param_1 + 0xe0) = local_c8;
    return;
  }
  uVar7 = 0;
  iVar5 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  if (iVar5 != 0) {
    piVar8 = (int *)(param_1 + 0xf4);
    do {
      iVar5 = *piVar8;
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 1;
      *(float *)(iVar5 + 0x50) = local_ec + *(float *)(iVar5 + 0x50);
      uVar6 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    } while (uVar7 < uVar6);
  }
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x7c))(local_ec);
  *(uint *)(param_1 + 0xe0) = local_cc;
  return;
}

