/* speed.exe 00820c64 FUN_00820c64; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000003f CreateThread
 * calls EXTERNAL:0000001d SetThreadPriority
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00820c64(void)

{
  DAT_009c2010 = 1;
  DAT_009c2011 = 1;
  _DAT_009c22e8 =
       CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00820bd7,(LPVOID)0x0,0
                    ,(LPDWORD)&DAT_009c22ec);
  SetThreadPriority(_DAT_009c22e8,0xf);
  return;
}

