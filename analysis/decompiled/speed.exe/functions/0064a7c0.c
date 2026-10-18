/* speed.exe 0064a7c0 FUN_0064a7c0; analysis pseudocode, not buildable source.
 * calls 006e7220 FUN_006e7220
 * calls 0045ce40 FUN_0045ce40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064a7c0(void)

{
  if (0 < DAT_00925850) {
    DAT_00925850 = DAT_00925850 + -1;
    return;
  }
  _DAT_00925830 = DAT_00925834;
  DAT_00925834 = FUN_0045ce40();
  _DAT_00925828 = FUN_0045ce40();
  FUN_006e7220();
  _DAT_0092582c = FUN_0045ce40();
  _DAT_009b0988 = _DAT_008f8508 + _DAT_009b0988;
  return;
}

