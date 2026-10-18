/* speed.exe 006004d0 FUN_006004d0; analysis pseudocode, not buildable source.
 * calls 005fcd80 FUN_005fcd80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_006004d0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_005fcd80();
  if (fVar1 <= (float10)_DAT_00890968) {
    fVar2 = (float10)_DAT_00890968;
  }
  else {
    fVar2 = (float10)(float)fVar1;
    if (_DAT_0089096c < (float)fVar1) {
      fVar2 = (float10)_DAT_0089096c;
    }
  }
  return fVar2 * (float10)_DAT_008a3720 +
         ((float10)_DAT_0089096c - fVar2) * (float10)*(float *)(param_1 + 0x18);
}

