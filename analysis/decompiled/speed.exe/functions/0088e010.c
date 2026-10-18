/* speed.exe 0088e010 FUN_0088e010; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 007ec1b2 FUN_007ec1b2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088e010(void)

{
  if (DAT_0090e698 != 0) {
    FUN_004655f0(DAT_0090e698);
    DAT_0090e698 = 0;
    _DAT_0090e694 = 0;
    _DAT_0090e690 = 0;
    _DAT_00910ecc = 0;
    FUN_007ec1b2();
    return;
  }
  return;
}

