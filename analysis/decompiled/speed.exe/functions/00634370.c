/* speed.exe 00634370 FUN_00634370; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00634370(void)

{
  if ((DAT_00920e30 & 1) == 0) {
    DAT_00920e30 = DAT_00920e30 | 1;
    DAT_00920de0 = 0;
    _DAT_00920de4 = 0;
    _DAT_00920e28 = 0;
    _DAT_00920e2c = DAT_00925b14;
    _atexit((_func_4879 *)&DAT_0088e5e0);
  }
  return &DAT_00920de0;
}

