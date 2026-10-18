/* speed.exe 0078aed0 FUN_0078aed0; analysis pseudocode, not buildable source.
 * calls 00465280 FUN_00465280
 * calls 004655f0 FUN_004655f0
 */

void FUN_0078aed0(void)

{
  if (DAT_009b4168 != 0) {
    FUN_00465280(8);
    FUN_004655f0(DAT_009b4168);
    DAT_009b4168 = 0;
  }
  return;
}

