/* speed.exe 0067c570 FUN_0067c570; analysis pseudocode, not buildable source.
 * calls 00679660 FUN_00679660
 * calls 00677f80 FUN_00677f80
 * calls 006269b0 FUN_006269b0
 * calls 006796c0 FUN_006796c0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0067c570(undefined4 param_1,float *param_2)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  ushort uVar8;
  float10 fVar9;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0.0;
  uVar3 = FUN_00679660(param_1,&local_30);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_006796c0(param_1,&local_3c);
    if ((char)uVar3 != '\0') {
      iVar5 = 0;
      param_2[2] = 0.0;
      param_2[1] = 0.0;
      *param_2 = 0.0;
      local_24 = 0.0;
      local_20 = 0.0;
      local_1c = 0.0;
      local_c = 0.0;
      local_8 = 0.0;
      local_4 = 0.0;
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = 0.0;
      pfVar6 = (float *)&DAT_008f8930;
      do {
        fVar9 = (float10)FUN_00677f80(param_1,iVar5);
        fVar1 = (float)fVar9;
        local_14 = local_14 + pfVar6[-1];
        local_10 = local_10 + *pfVar6;
        local_18 = local_18 + pfVar6[-2];
        puVar4 = (uint *)FUN_00454810(0xcdc136e8,0);
        if (puVar4 == (uint *)0x0) {
          puVar4 = (uint *)FUN_006269b0(4);
        }
        if ((*puVar4 & 1 << ((byte)iVar5 & 0x1f)) != 0) {
          local_8 = local_8 + pfVar6[-1];
          local_4 = local_4 + *pfVar6;
          local_c = local_c + pfVar6[-2];
        }
        pfVar7 = pfVar6 + 3;
        local_20 = local_20 + pfVar6[-1];
        iVar5 = iVar5 + 1;
        param_2[1] = fVar1 * pfVar6[-1] + param_2[1];
        local_1c = local_1c + *pfVar6;
        param_2[2] = fVar1 * *pfVar6 + param_2[2];
        local_24 = local_24 + pfVar6[-2];
        *param_2 = fVar1 * pfVar6[-2] + *param_2;
        pfVar6 = pfVar7;
      } while ((int)pfVar7 < 0x8f8984);
      if (_DAT_008a92d4 < local_20) {
        param_2[1] = param_2[1] / local_20;
      }
      if (_DAT_008a92d4 < local_1c) {
        param_2[2] = param_2[2] / local_1c;
      }
      if (_DAT_008a92d4 < local_24) {
        *param_2 = *param_2 / local_24;
      }
      if (_DAT_008a92d4 < local_14) {
        local_8 = local_8 / local_14;
        local_38 = (_DAT_0089096c - local_38) * local_8 + local_38;
        local_2c = (local_38 - local_2c) * local_8 * _DAT_008a934c + local_2c;
        fVar1 = (local_8 * _DAT_008a934c + _DAT_0089096c) * param_2[1];
        bVar2 = _DAT_0089096c <= fVar1;
        param_2[1] = fVar1;
        if (bVar2) {
          fVar1 = _DAT_0089096c;
        }
        param_2[1] = fVar1;
      }
      if (_DAT_008a92d4 < local_10) {
        local_4 = local_4 / local_10;
        local_34 = (_DAT_0089096c - local_34) * local_4 + local_34;
        local_28 = (local_34 - local_28) * local_4 * _DAT_008a934c + local_28;
        fVar1 = (local_4 * _DAT_008a934c + _DAT_0089096c) * param_2[2];
        bVar2 = _DAT_0089096c <= fVar1;
        param_2[2] = fVar1;
        if (bVar2) {
          fVar1 = _DAT_0089096c;
        }
        param_2[2] = fVar1;
      }
      uVar8 = (ushort)(local_18 < _DAT_008a92d4) << 8 |
              (ushort)(NAN(local_18) || NAN(_DAT_008a92d4)) << 10 |
              (ushort)(local_18 == _DAT_008a92d4) << 0xe;
      if (local_18 < _DAT_008a92d4 == 0 && (local_18 == _DAT_008a92d4) == 0) {
        local_c = local_c / local_18;
        local_3c = (_DAT_0089096c - local_3c) * local_c + local_3c;
        local_30 = (local_3c - local_30) * local_c * _DAT_008a934c + local_30;
        fVar1 = (local_c * _DAT_008a934c + _DAT_0089096c) * *param_2;
        bVar2 = fVar1 < _DAT_0089096c;
        uVar8 = (ushort)bVar2 << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_0089096c)) << 10 |
                (ushort)(fVar1 == _DAT_0089096c) << 0xe;
        *param_2 = fVar1;
        if (!bVar2) {
          fVar1 = _DAT_0089096c;
        }
        *param_2 = fVar1;
      }
      param_2[1] = (local_38 - local_2c) * param_2[1] + local_2c;
      param_2[2] = (local_34 - local_28) * param_2[2] + local_28;
      *param_2 = (local_3c - local_30) * *param_2 + local_30;
      return CONCAT31((int3)(CONCAT22((short)((uint)puVar4 >> 0x10),uVar8) >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

