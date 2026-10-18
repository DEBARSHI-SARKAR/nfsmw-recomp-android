/* speed.exe 005fd210 FUN_005fd210; analysis pseudocode, not buildable source.
 * calls 007696b0 FUN_007696b0
 * calls 005fccc0 FUN_005fccc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fd210(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005fccc0();
  if ((float10)_DAT_00890968 <= fVar1) {
    fVar1 = (float10)FUN_005fccc0();
    FUN_007696b0((float)fVar1);
  }
  return;
}

