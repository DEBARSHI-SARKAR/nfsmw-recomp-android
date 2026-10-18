/* speed.exe 007585b0 FUN_007585b0; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 */

undefined4 * FUN_007585b0(void)

{
  if ((DAT_009b37b4 & 1) == 0) {
    DAT_009b37b4 = DAT_009b37b4 | 1;
    DAT_009b37ac = &DAT_009b37ac;
    DAT_009b37b0 = &DAT_009b37ac;
    _atexit(FUN_0088ed80);
  }
  return &DAT_009b37ac;
}

