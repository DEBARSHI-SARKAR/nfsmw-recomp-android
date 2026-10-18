/* speed.exe 00511b80 FUN_00511b80; analysis pseudocode, not buildable source.
 * calls 00510e60 FUN_00510e60
 * calls 006515d0 FUN_006515d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00511b80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(char *)(param_1 + 0x173) != '\0') {
    local_10 = (float)-DAT_00987f64;
    local_c = (float)-DAT_00987f68;
    FUN_006515d0(&local_8);
    fVar1 = _DAT_0089096c;
    if (local_8 != _DAT_00890968) {
      fVar1 = _DAT_0089096c / local_8;
    }
    fVar1 = _DAT_0089096c / fVar1;
    local_10 = local_10 * (fVar1 + fVar1);
    local_c = (fVar1 + fVar1) * local_c;
    if ((*(int *)(param_1 + 0x168) != 0) &&
       ((local_10 != _DAT_00890968 || (local_c != _DAT_00890968)))) {
      FUN_006515d0(&local_18);
      local_c = local_c / *(float *)(param_1 + 0x150);
      fVar2 = (local_18 - _DAT_008933d4) + local_10 / *(float *)(param_1 + 0x14c);
      fVar3 = (local_14 - _DAT_008933d4) + local_c;
      fVar1 = _DAT_008933d4 - fVar1 * _DAT_008933d4;
      local_14 = -fVar1;
      local_18 = local_14;
      if (local_14 < fVar2) {
        local_18 = fVar2;
      }
      if (fVar1 < local_18) {
        local_18 = fVar1;
      }
      if (local_14 < fVar3) {
        local_14 = fVar3;
      }
      if (fVar1 < local_14) {
        local_14 = fVar1;
      }
      FUN_006515d0(&local_8);
      local_8 = local_8 - _DAT_008933d4;
      local_4 = local_4 - _DAT_008933d4;
      local_18 = (local_8 + local_18) * _DAT_008933d4 + _DAT_008933d4;
      local_14 = (local_4 + local_14) * _DAT_008933d4 + _DAT_008933d4;
      FUN_00510e60(&local_18);
    }
  }
  return;
}

