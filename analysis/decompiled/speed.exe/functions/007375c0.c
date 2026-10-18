/* speed.exe 007375c0 FUN_007375c0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007375c0(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = _DAT_008b2e60;
  if (*(char *)(param_1 + 0x17c0) != '\0') {
    fVar1 = DAT_009259bc + *(float *)(param_1 + 0x17c4);
    *(float *)(param_1 + 0x17c4) = fVar1;
    if (fVar2 < fVar1) {
      *(float *)(param_1 + 0x17c4) = fVar1 - _DAT_008b48c0;
      return;
    }
  }
  return;
}

