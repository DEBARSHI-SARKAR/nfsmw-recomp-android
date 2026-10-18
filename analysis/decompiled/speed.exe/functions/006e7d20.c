/* speed.exe 006e7d20 FUN_006e7d20; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006e7d20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  local_24 = 0;
  pfVar7 = param_1;
  pfVar9 = param_2;
  do {
    if (local_24 == 1) {
      pfVar7 = param_2;
      pfVar9 = param_1;
    }
    local_28 = 0;
    do {
      if (local_28 == 1) {
        uVar8 = 2;
      }
      else {
        uVar8 = (uint)(local_28 == 2);
      }
      pfVar6 = pfVar7 + (uVar8 + 1) * 4;
      local_10 = *pfVar6;
      local_c = pfVar6[1];
      local_8 = pfVar6[2];
      local_20 = *pfVar9;
      local_1c = pfVar9[1];
      local_18 = pfVar9[2];
      fVar1 = pfVar9[3];
      fVar2 = (pfVar7[1] - pfVar9[1]) * local_c +
              (*pfVar7 - *pfVar9) * local_10 + (pfVar7[2] - pfVar9[2]) * local_8;
      pfVar6 = pfVar9 + 0x10;
      if (_DAT_00890968 <= fVar2) {
        local_10 = -local_10;
        local_c = -local_c;
        local_8 = -local_8;
      }
      else {
        fVar2 = -fVar2;
      }
      fVar3 = local_10 * *pfVar6 + local_8 * pfVar9[0x12] + local_c * pfVar9[0x11];
      if (fVar3 <= _DAT_00890968) {
        if (fVar3 < _DAT_00890968) {
          local_20 = local_20 + *pfVar6;
          local_1c = local_1c + pfVar9[0x11];
          local_18 = local_18 + pfVar9[0x12];
        }
      }
      else {
        local_20 = local_20 - *pfVar6;
        local_1c = local_1c - pfVar9[0x11];
        local_18 = local_18 - pfVar9[0x12];
      }
      pfVar6 = pfVar9 + 0x14;
      fVar4 = local_10 * *pfVar6 + local_8 * pfVar9[0x16] + local_c * pfVar9[0x15];
      if (fVar4 <= _DAT_00890968) {
        if (fVar4 < _DAT_00890968) {
          local_20 = local_20 + *pfVar6;
          local_1c = local_1c + pfVar9[0x15];
          local_18 = local_18 + pfVar9[0x16];
        }
      }
      else {
        local_20 = local_20 - *pfVar6;
        local_1c = local_1c - pfVar9[0x15];
        local_18 = local_18 - pfVar9[0x16];
      }
      pfVar6 = pfVar9 + 0x18;
      fVar5 = local_10 * *pfVar6 + local_8 * pfVar9[0x1a] + local_c * pfVar9[0x19];
      fVar2 = (((fVar2 - pfVar7[uVar8 + 0x28]) - ABS(fVar3)) - ABS(fVar4)) - ABS(fVar5);
      if (fVar5 <= _DAT_00890968) {
        if (fVar5 < _DAT_00890968) {
          local_20 = local_20 + *pfVar6;
          local_1c = local_1c + pfVar9[0x19];
          local_18 = local_18 + pfVar9[0x1a];
        }
      }
      else {
        local_20 = local_20 - *pfVar6;
        local_1c = local_1c - pfVar9[0x19];
        local_18 = local_18 - pfVar9[0x1a];
      }
      if (fVar2 >= _DAT_00890968 && (fVar2 == _DAT_00890968) == 0) {
        return (uint)(ushort)((ushort)(fVar2 < _DAT_00890968) << 8 |
                              (ushort)(NAN(fVar2) || NAN(_DAT_00890968)) << 10 |
                             (ushort)(fVar2 == _DAT_00890968) << 0xe);
      }
      if (param_3[0x24] < fVar2) {
        param_3[0x24] = fVar2;
        param_3[0x1c] = local_20;
        param_3[0x1d] = local_1c;
        param_3[0x1e] = local_18;
        param_3[0x1f] = fVar1;
        if (param_3 == pfVar7) {
          param_3[0x20] = local_10;
          param_3[0x21] = local_c;
          param_3[0x22] = local_8;
        }
        else {
          param_3[0x20] = -local_10;
          param_3[0x21] = -local_c;
          param_3[0x22] = -local_8;
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < 3);
    local_24 = local_24 + 1;
    if (1 < local_24) {
      return CONCAT31((int3)((uint)local_24 >> 8),1);
    }
  } while( true );
}

