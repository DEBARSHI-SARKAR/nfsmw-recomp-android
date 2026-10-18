/* speed.exe 005c81b0 thunk_FUN_0045dac0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 thunk_FUN_0045dac0(void)

{
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  float10 extraout_ST1;
  
  iVar1 = FUN_007c4b80();
  fVar2 = (float10)iVar1;
  if (extraout_ST0 < fVar2) {
    fVar2 = fVar2 - (float10)_DAT_0089096c;
  }
  return (extraout_ST0 - fVar2) * extraout_ST1;
}

