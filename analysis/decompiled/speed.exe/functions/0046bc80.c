/* speed.exe 0046bc80 FUN_0046bc80; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046bc80(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_0089096c / *(float *)(param_1 + 0x24);
  fVar2 = fVar1 * *(float *)(param_1 + 0x24);
  fVar1 = ((*(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x14) +
           fVar2 * *(float *)(param_1 + 0x10) * _DAT_008945ec) * fVar2 + *(float *)(param_1 + 0x18))
          * fVar1;
  fVar2 = fVar1;
  if (fVar1 < _DAT_00890968) {
    fVar2 = -fVar1;
  }
  if (param_2 < fVar2) {
    *(float *)(param_1 + 0xc) = (fVar2 / fVar1) * param_2 * *(float *)(param_1 + 0x24);
    return;
  }
  return;
}

