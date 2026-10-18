/* speed.exe 0079a9e0 FUN_0079a9e0; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0079a9e0(void)

{
  if ((DAT_009b9438 & 1) == 0) {
    DAT_009b9438 = DAT_009b9438 | 1;
    _DAT_009b9420 = &DAT_009b9420;
    _DAT_009b9424 = &DAT_009b9420;
    _DAT_009b9418 = 0;
    _DAT_009b941c = 0;
    _DAT_009b9428 = &DAT_009b9428;
    _DAT_009b942c = &DAT_009b9428;
    _DAT_009b9430 = 0;
    _DAT_009b9434 = 0;
    _atexit((_func_4879 *)&LAB_0088f0c0);
  }
  return &DAT_009b9418;
}

