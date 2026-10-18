/* speed.exe 0079a6d0 FUN_0079a6d0; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0079a6d0(void)

{
  if ((DAT_009b9414 & 1) == 0) {
    DAT_009b9414 = DAT_009b9414 | 1;
    DAT_009b93e4 = 0;
    _DAT_009b93e8 = 0;
    _DAT_009b93ec = 0;
    DAT_009b93f0 = 0;
    _atexit((_func_4879 *)&LAB_0088f070);
  }
  return &DAT_009b93e4;
}

