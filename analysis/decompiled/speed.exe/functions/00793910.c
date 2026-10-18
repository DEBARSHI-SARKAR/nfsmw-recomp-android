/* speed.exe 00793910 FUN_00793910; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 */

undefined * FUN_00793910(void)

{
  if ((DAT_009b5644 & 1) == 0) {
    DAT_009b5644 = DAT_009b5644 | 1;
    _atexit((_func_4879 *)&DAT_0088efe0);
  }
  return &DAT_009b55d0;
}

