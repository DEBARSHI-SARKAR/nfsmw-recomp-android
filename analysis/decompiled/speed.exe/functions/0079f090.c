/* speed.exe 0079f090 FUN_0079f090; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0079f090(void)

{
  if ((DAT_009b9d28 & 1) == 0) {
    DAT_009b9d28 = DAT_009b9d28 | 1;
    _DAT_009b9d14 = 0;
    _DAT_009b9d18 = 0;
    _DAT_009b9d1c = 0;
    _DAT_009b9d20 = 0;
    DAT_009b9d24 = 0;
    _atexit((_func_4879 *)&LAB_0088f110);
  }
  return &DAT_009b9d14;
}

