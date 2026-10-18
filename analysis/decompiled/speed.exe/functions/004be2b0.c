/* speed.exe 004be2b0 FUN_004be2b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004be2b0(int param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    fVar1 = *(float *)(param_1 + 0x40) + _DAT_00890dd0;
    if ((_DAT_00890968 <= fVar1) &&
       (fVar1 = *(float *)(param_1 + 0x40) - _DAT_00890dd0, fVar1 <= _DAT_00890968)) {
      fVar1 = _DAT_00890968;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x40) + _DAT_00890dd0;
    if ((_DAT_00890fc8 <= fVar1) &&
       (fVar1 = *(float *)(param_1 + 0x40) - _DAT_00890dd0, fVar1 <= _DAT_00890fc8)) {
      *(float *)(param_1 + 0x40) = _DAT_00890fc8;
      return;
    }
  }
  *(float *)(param_1 + 0x40) = fVar1;
  return;
}

