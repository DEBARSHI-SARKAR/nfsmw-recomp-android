/* speed.exe 006b00f0 FUN_006b00f0; analysis pseudocode, not buildable source.
 * calls 006af740 FUN_006af740
 * calls 006930f0 FUN_006930f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006b00f0(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  float10 fVar3;
  float10 fVar4;
  
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  FUN_006af740(param_2);
  FUN_006930f0(param_2);
  if (_DAT_00890968 < *(float *)(param_1 + 0x1c4)) {
    cVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x10))();
    if (cVar2 == '\0') {
      param_2 = *(float *)(param_1 + 0x1c0) - param_2;
      *(float *)(param_1 + 0x1c0) = param_2;
      if (param_2 < _DAT_00890968 != (param_2 == _DAT_00890968)) {
        *(undefined4 *)(param_1 + 0x1c0) = 0;
        *(undefined4 *)(param_1 + 0x1c4) = 0;
      }
    }
  }
  fVar3 = (float10)(**(code **)(*(int *)(param_1 + 0x54) + 8))();
  fVar1 = (float)fVar3;
  fVar3 = (float10)(**(code **)(*(int *)(param_1 + 0x54) + 0xc))();
  fVar4 = (float10)(**(code **)(*(int *)(param_1 + 0x54) + 4))();
  if (fVar4 <= (float10)fVar1) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    return;
  }
  if ((float)fVar3 - fVar1 <= _DAT_00890968) {
    return;
  }
  fVar1 = ((float)fVar4 - fVar1) / ((float)fVar3 - fVar1);
  if (fVar1 < _DAT_0089096c) {
    if (fVar1 < _DAT_00890968) {
      fVar1 = _DAT_00890968;
    }
    *(float *)(param_1 + 0x1c8) = fVar1;
    return;
  }
  *(float *)(param_1 + 0x1c8) = _DAT_0089096c;
  return;
}

