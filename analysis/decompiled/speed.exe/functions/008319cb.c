/* speed.exe 008319cb FUN_008319cb; analysis pseudocode, not buildable source.
 * calls 0083191c FUN_0083191c
 * calls EXTERNAL:0000003e CreateMutexA
 * calls 0083193c FUN_0083193c
 */

undefined4 FUN_008319cb(void)

{
  if (DAT_009c29d8 == 0) {
    DAT_009c29d8 = FUN_0083193c(DAT_009c29d4);
    DAT_009c29dd = 1;
  }
  else if (DAT_009c29d4 == 0) {
    DAT_009c29d4 = FUN_0083191c(DAT_009c29d8);
    DAT_009c29dc = 1;
  }
  DAT_009c29cc = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  DAT_009c29e4 = 0;
  DAT_009c29de = 1;
  return 0;
}

