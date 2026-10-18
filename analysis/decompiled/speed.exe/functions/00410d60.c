/* speed.exe 00410d60 FUN_00410d60; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_00410d60(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005d59f0(&LAB_004038e0);
  if (piVar1 == (int *)0x0) {
    return false;
  }
  piVar1 = (int *)(**(code **)(*piVar1 + 0x80))();
  return *piVar1 != 0;
}

