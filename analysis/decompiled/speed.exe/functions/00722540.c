/* speed.exe 00722540 FUN_00722540; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00722540(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = (*param_2 - *(float *)(param_1 + 0x30)) *
          (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34)) -
          (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30)) *
          (param_2[1] - *(float *)(param_1 + 0x34));
  fVar2 = _DAT_00890da8;
  if ((_DAT_00890da8 <= fVar1) && (fVar2 = fVar1, _DAT_00890968 < fVar1)) {
    return (float10)fVar1;
  }
  fVar3 = (float10)fVar2;
  fVar1 = (*param_2 - *(float *)(param_1 + 0x40)) *
          (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x44)) -
          (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x40)) *
          (param_2[1] - *(float *)(param_1 + 0x44));
  if (fVar3 <= (float10)fVar1) {
    fVar3 = (float10)fVar1;
  }
  if (fVar3 <= (float10)_DAT_00890968) {
    fVar1 = (*param_2 - *(float *)(param_1 + 0x60)) *
            (*(float *)(param_1 + 0x34) - *(float *)(param_1 + 100)) -
            (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x60)) *
            (param_2[1] - *(float *)(param_1 + 100));
    if (fVar3 <= (float10)fVar1) {
      fVar3 = (float10)fVar1;
    }
    if (((fVar3 <= (float10)_DAT_00890968) && (*(char *)(param_1 + 9) == '\x04')) &&
       (fVar1 = (*param_2 - *(float *)(param_1 + 0x50)) *
                (*(float *)(param_1 + 100) - *(float *)(param_1 + 0x54)) -
                (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x50)) *
                (param_2[1] - *(float *)(param_1 + 0x54)), fVar3 <= (float10)fVar1)) {
      fVar3 = (float10)fVar1;
    }
  }
  return fVar3;
}

