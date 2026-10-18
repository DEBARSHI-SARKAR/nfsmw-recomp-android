/* speed.exe 006c6cc0 FUN_006c6cc0; analysis pseudocode, not buildable source.
 * calls 006c68b0 FUN_006c68b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c6cc0(int param_1)

{
  if ((DAT_00982cb4 == param_1) && (DAT_00982cc8 == DAT_00982c80)) {
    return;
  }
  _DAT_00987b30 = _DAT_00987b30 + 1;
  DAT_00982cb4 = param_1;
  DAT_00982cb8 = 0;
  DAT_00982cbc = 0;
  DAT_00982cc0 = 0;
  _DAT_00982cc4 = 0;
  DAT_00982cc8 = DAT_00982c80;
  FUN_006c68b0();
  return;
}

