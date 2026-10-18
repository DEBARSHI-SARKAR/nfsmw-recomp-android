/* speed.exe 004facb0 FUN_004facb0; analysis pseudocode, not buildable source.
 * calls 006bf540 FUN_006bf540
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004facb0(void)

{
  if ((DAT_00915fdc == 0) && ((DAT_00915fe0 != 0 || (DAT_00915fe4 != 0)))) {
    FUN_006bf540();
    DAT_00915fe0 = 0;
    DAT_00915fe4 = 0;
    _DAT_00915fe8 = 0;
  }
  return;
}

