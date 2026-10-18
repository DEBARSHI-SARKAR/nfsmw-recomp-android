/* speed.exe 007939a0 FUN_007939a0; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 */

undefined * FUN_007939a0(void)

{
  if ((DAT_009b5658 & 1) == 0) {
    DAT_009b5658 = DAT_009b5658 | 1;
    DAT_009b5648 = 0;
    _atexit((_func_4879 *)&LAB_0088eff0);
  }
  return &DAT_009b5648;
}

