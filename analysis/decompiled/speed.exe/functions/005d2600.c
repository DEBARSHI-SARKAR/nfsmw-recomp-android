/* speed.exe 005d2600 FUN_005d2600; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005d2600(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ushort uVar8;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = *param_3 - *param_2;
  local_14 = param_3[1] - param_2[1];
  local_10 = param_3[2] - param_2[2];
  FUN_0040fe20(&local_18,&local_24);
  if (_DAT_00890968 <= *param_2) {
    local_30 = *param_1;
  }
  else {
    local_30 = -*param_1;
  }
  fVar3 = local_30;
  if (_DAT_00890968 <= param_2[1]) {
    local_2c = param_1[1];
  }
  else {
    local_2c = -param_1[1];
  }
  fVar4 = local_2c;
  fVar1 = param_1[2];
  if (param_2[2] < _DAT_00890968) {
    fVar1 = -fVar1;
  }
  local_30 = 0.0;
  local_28 = 0.0;
  local_2c = 0.0;
  if (_DAT_00891218 < local_24 * local_24) {
    local_30 = (fVar3 - *param_2) / local_24;
  }
  if (_DAT_00891218 < local_20 * local_20) {
    local_2c = (fVar4 - param_2[1]) / local_20;
  }
  if (_DAT_00891218 < local_1c * local_1c) {
    local_28 = (fVar1 - param_2[2]) / local_1c;
  }
  fVar3 = local_30;
  if (local_30 < _DAT_00890968) {
    fVar3 = -local_30;
  }
  fVar1 = local_2c;
  if (local_2c < _DAT_00890968) {
    fVar1 = -local_2c;
  }
  fVar4 = local_28;
  if (local_28 < _DAT_00890968) {
    fVar4 = -local_28;
  }
  iVar7 = 3;
  do {
    local_18 = DAT_008a2fb4;
    local_14 = DAT_008a2fb8;
    local_10 = DAT_008a2fbc;
    if ((fVar1 <= fVar3) || (fVar4 <= fVar3)) {
      if (fVar4 <= fVar1) {
        local_10 = 1e+09;
        fVar2 = local_28 * local_24;
        fVar5 = local_28 * local_20;
        fVar6 = local_28 * local_1c;
      }
      else {
        local_14 = 1e+09;
        fVar2 = local_2c * local_24;
        fVar5 = local_2c * local_20;
        fVar6 = local_1c * local_2c;
      }
    }
    else {
      local_18 = 1e+09;
      fVar2 = local_30 * local_24;
      fVar5 = local_20 * local_30;
      fVar6 = local_1c * local_30;
    }
    *param_4 = fVar2 + *param_2;
    param_4[1] = fVar5 + param_2[1];
    fVar6 = fVar6 + param_2[2];
    param_4[2] = fVar6;
    fVar2 = *param_4;
    if (fVar2 < _DAT_00890968) {
      fVar2 = -fVar2;
    }
    fVar5 = *param_1 + _DAT_00890cd4;
    uVar8 = (ushort)(fVar2 < fVar5) << 8 | (ushort)(NAN(fVar2) || NAN(fVar5)) << 10 |
            (ushort)(fVar2 == fVar5) << 0xe;
    if (fVar2 < fVar5 || (fVar2 == fVar5) != 0) {
      fVar2 = param_4[1];
      if (fVar2 < _DAT_00890968) {
        fVar2 = -fVar2;
      }
      fVar5 = param_1[1] + _DAT_00890cd4;
      uVar8 = (ushort)(fVar2 < fVar5) << 8 | (ushort)(NAN(fVar2) || NAN(fVar5)) << 10 |
              (ushort)(fVar2 == fVar5) << 0xe;
      if (fVar2 < fVar5 || (fVar2 == fVar5) != 0) {
        if (fVar6 < _DAT_00890968) {
          fVar6 = -fVar6;
        }
        fVar2 = param_1[2] + _DAT_00890cd4;
        uVar8 = (ushort)(fVar6 < fVar2) << 8 | (ushort)(NAN(fVar6) || NAN(fVar2)) << 10 |
                (ushort)(fVar6 == fVar2) << 0xe;
        if (fVar6 < fVar2 || (fVar6 == fVar2) != 0) {
          return CONCAT31((uint3)(byte)(uVar8 >> 8),1);
        }
      }
    }
    iVar7 = iVar7 + -1;
    fVar3 = local_18 + fVar3;
    fVar1 = local_14 + fVar1;
    fVar4 = fVar4 + local_10;
    if (iVar7 < 1) {
      return (uint)uVar8;
    }
  } while( true );
}

