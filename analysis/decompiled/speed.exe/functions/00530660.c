/* speed.exe 00530660 FUN_00530660; analysis pseudocode, not buildable source.
 * calls 006515d0 FUN_006515d0
 * calls 00515140 FUN_00515140
 * calls 00651550 FUN_00651550
 * calls 00524ee0 FUN_00524ee0
 * calls 00525050 FUN_00525050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00530660(int param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  float local_8 [2];
  
  FUN_00524ee0(*(undefined4 *)(param_1 + 0x124),&local_2c,&local_30);
  local_30 = local_2c + param_2;
  FUN_00524ee0(*(undefined4 *)(param_1 + 0x124),&local_28,&local_2c);
  local_2c = local_2c + param_3;
  local_20 = 0.0;
  local_1c = 0.0;
  FUN_00515140(*(undefined4 *)(param_1 + 0x140),&local_10,&local_c);
  if ((*(int *)(param_1 + 0x168) != 0) && ((param_2 != _DAT_00890968 || (param_3 != _DAT_00890968)))
     ) {
    fVar2 = *(float *)(param_1 + 0x144) + _DAT_00899e70;
    if (fVar2 <= local_30) {
      if (local_10 - _DAT_00899e70 < local_30) {
        local_20 = local_30 - (local_10 - _DAT_00899e70);
        fVar2 = local_20;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x148) + _DAT_00899e68;
        if (fVar2 <= local_2c) {
          if (local_2c <= local_c - _DAT_0089c408) goto LAB_005309a9;
          local_1c = local_2c - (local_c - _DAT_0089c408);
          fVar2 = local_1c;
        }
        else {
          local_1c = fVar2 - local_2c;
          fVar2 = local_1c;
        }
      }
    }
    else {
      local_20 = fVar2 - local_30;
      fVar2 = local_20;
    }
    if (fVar2 != _DAT_00890968) {
      FUN_006515d0(&local_28);
      local_28 = local_28 - _DAT_008933d4;
      local_24 = local_24 - _DAT_008933d4;
      if (local_20 != _DAT_00890968) {
        local_20 = param_2 / *(float *)(param_1 + 0x14c);
      }
      if (local_1c != _DAT_00890968) {
        local_1c = param_3 / *(float *)(param_1 + 0x150);
      }
      FUN_006515d0(local_8);
      fVar2 = _DAT_0089096c;
      if (local_8[0] != _DAT_00890968) {
        fVar2 = _DAT_0089096c / local_8[0];
      }
      fVar4 = _DAT_008933d4 - (_DAT_0089096c / fVar2) * _DAT_008933d4;
      fVar2 = -fVar4;
      fVar3 = fVar2;
      if (fVar2 < local_28 + local_20) {
        fVar3 = local_28 + local_20;
      }
      local_28 = fVar3;
      if (fVar4 < fVar3) {
        local_28 = fVar4;
      }
      if (fVar2 < local_24 + local_1c) {
        fVar2 = local_24 + local_1c;
      }
      local_24 = fVar2;
      if (fVar4 < fVar2) {
        local_24 = fVar4;
      }
      FUN_006515d0(&local_18);
      local_18 = local_18 - _DAT_008933d4;
      iVar1 = *(int *)(param_1 + 0x160);
      local_14 = local_14 - _DAT_008933d4;
      local_28 = (local_18 + local_28) * _DAT_008933d4 + _DAT_008933d4;
      local_24 = (local_14 + local_24) * _DAT_008933d4 + _DAT_008933d4;
      FUN_00651550(&local_28);
      *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar1 + 0x7c);
      *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0x80);
      *(undefined2 *)(iVar1 + 0x9c) = 0;
      *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(iVar1 + 0xa8);
      *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(iVar1 + 0xac);
      *(undefined2 *)(iVar1 + 200) = 0;
    }
  }
LAB_005309a9:
  param_3 = *(float *)(param_1 + 0x144) + _DAT_00899e70;
  if (param_3 < local_30) {
    param_3 = local_30;
  }
  if (local_10 - _DAT_00899e70 < param_3) {
    param_3 = local_10 - _DAT_00899e70;
  }
  param_2 = *(float *)(param_1 + 0x148) + _DAT_00899e68;
  if (param_2 < local_2c) {
    param_2 = local_2c;
  }
  if (local_c - _DAT_0089c408 < param_2) {
    param_2 = local_c - _DAT_0089c408;
  }
  FUN_00525050(*(undefined4 *)(param_1 + 0x124),param_3,param_2);
  return;
}

