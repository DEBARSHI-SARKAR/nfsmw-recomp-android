/* speed.exe 006512f0 FUN_006512f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006512f0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_c;
  
  fVar3 = _DAT_0089096c / *(float *)(param_1 + 0x24);
  fVar1 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x14);
  local_c = (_DAT_00890968 * fVar3 * *(float *)(param_1 + 0x10) * _DAT_00891048 + fVar1) * fVar3 *
            fVar3;
  fVar2 = ABS(local_c);
  fVar3 = (fVar3 * *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x10) * _DAT_00891048 + fVar1)
          * fVar3 * fVar3;
  if (param_2 < fVar2) {
    local_c = (fVar2 / local_c) * param_2;
  }
  if (ABS(fVar3) <= param_2) {
    if (fVar2 <= param_2) {
      return;
    }
  }
  else {
    fVar3 = (ABS(fVar3) / fVar3) * param_2;
  }
  fVar1 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24);
  local_c = local_c * fVar1;
  *(float *)(param_1 + 0x14) = _DAT_008933d4 * local_c;
  *(float *)(param_1 + 0x10) = (fVar1 * fVar3 - local_c) * _DAT_00894210;
  return;
}

