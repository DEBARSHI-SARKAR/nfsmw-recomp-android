/* speed.exe 0073c9f0 FUN_0073c9f0; analysis pseudocode, not buildable source.
 * calls 0073c980 FUN_0073c980
 * calls 0045dbf0 FUN_0045dbf0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0073c9f0(void)

{
  int iVar1;
  float10 fVar2;
  
  FUN_0073c980();
  iVar1 = FUN_007c4b80();
  fVar2 = (float10)FUN_0045dbf0(iVar1 / 0x168);
  if (fVar2 < (float10)_DAT_00890968) {
    fVar2 = (float10)_DAT_00890968;
  }
  return (float10)_DAT_0089096c - ABS(fVar2);
}

