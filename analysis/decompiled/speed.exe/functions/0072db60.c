/* speed.exe 0072db60 FUN_0072db60; analysis pseudocode, not buildable source.
 * calls 0072c370 FUN_0072c370
 * calls 0072c410 FUN_0072c410
 */

undefined4 FUN_0072db60(void)

{
  int iVar1;
  
  iVar1 = FUN_0072c410();
  if (iVar1 != 0) {
    FUN_0072c370(iVar1);
    return 1;
  }
  return 0;
}

