/* speed.exe 00530c10 FUN_00530c10; analysis pseudocode, not buildable source.
 * calls 006515d0 FUN_006515d0
 * calls 00651550 FUN_00651550
 * calls 00524ee0 FUN_00524ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00530c10(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00524ee0(*(undefined4 *)(param_1 + 0x124),&local_10,&local_c);
  FUN_006515d0(&local_20);
  local_20 = (local_20 - _DAT_008933d4) + _DAT_008933d4;
  local_1c = (local_1c - _DAT_008933d4) + _DAT_008933d4;
  FUN_006515d0(&local_8);
  if (local_8 == _DAT_00890968) {
    local_24 = 1.0;
  }
  else {
    local_24 = _DAT_0089096c / local_8;
  }
  FUN_00524ee0(*(undefined4 *)(param_1 + 0x140),&local_8,&local_4);
  local_10 = ((local_10 - local_8) / *(float *)(param_1 + 0x14c)) * (_DAT_0089096c / local_24);
  local_c = (_DAT_0089096c / local_24) * ((local_c - local_4) / *(float *)(param_1 + 0x150));
  fVar1 = local_10 + local_20;
  local_14 = local_c + local_1c;
  *(float *)(param_1 + 0x134) = fVar1 * *(float *)(param_1 + 0x14c) + *(float *)(param_1 + 0x144);
  *(float *)(param_1 + 0x138) = local_14 * *(float *)(param_1 + 0x150) + *(float *)(param_1 + 0x148)
  ;
  fVar2 = (_DAT_0089096c / param_2) * _DAT_008933d4;
  fVar3 = _DAT_0089096c - fVar2;
  local_18 = fVar2;
  if (fVar2 < fVar1) {
    local_18 = fVar1;
  }
  if (fVar3 < local_18) {
    local_18 = fVar3;
  }
  if (local_14 <= fVar2) {
    local_14 = fVar2;
  }
  if (fVar3 < local_14) {
    local_14 = fVar3;
  }
  local_8 = local_10;
  local_4 = local_c;
  FUN_00651550(&local_18);
  return;
}

