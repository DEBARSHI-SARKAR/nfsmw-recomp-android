/* speed.exe 0078c730 FUN_0078c730; analysis pseudocode, not buildable source.
 * calls 0078c5c0 FUN_0078c5c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0078c730(void)

{
  if ((_DAT_009b5580 & 1) == 0) {
    _DAT_009b5580 = _DAT_009b5580 | 1;
    FUN_0078c5c0();
  }
  return &DAT_009b4c08;
}

