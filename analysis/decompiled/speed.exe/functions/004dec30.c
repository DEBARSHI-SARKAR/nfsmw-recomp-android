/* speed.exe 004dec30 FUN_004dec30; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 0081daae FUN_0081daae
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dec30(void)

{
  if (DAT_00914290 != 0) {
    FUN_0081daae();
    DAT_00914290 = 0;
  }
  if (DAT_00914294 != 0) {
    FUN_0081daae();
    DAT_00914294 = 0;
  }
  DAT_00914260 = 0;
  DAT_00914264 = 0;
  _DAT_00914268 = 0;
  DAT_0091426c = 0;
  _DAT_00914270 = 0;
  _DAT_00914274 = 0;
  _DAT_00914278 = 0;
  _DAT_0091427c = 0;
  DAT_00914280 = 0;
  _DAT_00914284 = 0;
  _DAT_00914288 = 0;
  _DAT_0091428c = 0;
  if (DAT_0091432c != 0) {
    FUN_004ac0e0(DAT_0091432c);
    DAT_0091432c = 0;
  }
  return;
}

