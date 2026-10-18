/* speed.exe 0066bb00 FUN_0066bb00; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066bb00(int param_1,char param_2)

{
  float fVar1;
  
  fVar1 = _DAT_008a9348;
  if (param_2 != '\0') {
    fVar1 = _DAT_0089096c;
  }
  return ((float10)*(float *)(*(int *)(param_1 + 8) + 0x50) * (float10)_DAT_008916cc +
         (float10)_DAT_008910f0) * (float10)fVar1;
}

