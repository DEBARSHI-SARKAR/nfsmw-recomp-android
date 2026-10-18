/* speed.exe 0075e810 FUN_0075e810; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 */

undefined4 * FUN_0075e810(void)

{
  if ((DAT_009b37c0 & 1) == 0) {
    DAT_009b37c0 = DAT_009b37c0 | 1;
    DAT_009b37b8 = &DAT_009b37b8;
    DAT_009b37bc = &DAT_009b37b8;
    _atexit(FUN_0088eea0);
  }
  return &DAT_009b37b8;
}

