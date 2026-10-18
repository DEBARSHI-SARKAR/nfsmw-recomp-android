/* speed.exe 0046bce0 FUN_0046bce0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046bce0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_8;
  
  fVar2 = _DAT_0089096c / *(float *)(param_1 + 0x24);
  fVar1 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x14);
  local_8 = (_DAT_00890968 * fVar2 * *(float *)(param_1 + 0x10) * _DAT_00891048 + fVar1) * fVar2 *
            fVar2;
  fVar3 = local_8;
  if (local_8 < _DAT_00890968) {
    fVar3 = -local_8;
  }
  fVar2 = (fVar2 * *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x10) * _DAT_00891048 + fVar1)
          * fVar2 * fVar2;
  fVar1 = fVar2;
  if (fVar2 < _DAT_00890968) {
    fVar1 = -fVar2;
  }
  if (param_2 < fVar3) {
    local_8 = (fVar3 / local_8) * param_2;
  }
  if (fVar1 <= param_2) {
    if (fVar3 <= param_2) {
      return;
    }
  }
  else {
    fVar2 = (fVar1 / fVar2) * param_2;
  }
  fVar1 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24);
  local_8 = local_8 * fVar1;
  *(float *)(param_1 + 0x14) = _DAT_00894594 * local_8;
  *(float *)(param_1 + 0x10) = (fVar1 * fVar2 - local_8) * _DAT_00894210;
  return;
}

