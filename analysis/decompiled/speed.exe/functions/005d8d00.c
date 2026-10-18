/* speed.exe 005d8d00 FUN_005d8d00; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005d8d00(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 local_8;
  
  fVar2 = *(float *)(param_1 + 0x24);
  fVar1 = *(float *)(param_1 + 0x20);
  local_8 = fVar2;
  if (fVar1 < fVar2) {
    local_8 = fVar1;
    fVar1 = fVar2;
  }
  if (_DAT_008a3624 < fVar1 - local_8) {
    if (param_2 <= *(float *)(param_1 + 0x20)) {
      fVar1 = *(float *)(param_1 + 0x20) - _DAT_008a3624;
      *(float *)(param_1 + 0x20) = fVar1;
      if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x20) + _DAT_008a3624;
      *(float *)(param_1 + 0x20) = fVar1;
      if (_DAT_0089096c <= fVar1) {
        *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
        return;
      }
    }
  }
  return;
}

