/* speed.exe 007361a0 FUN_007361a0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000c FreeLibrary
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007361a0(void)

{
  if (DAT_009b08e8 != (HMODULE)0x0) {
    if (DAT_009b08f0 != (code *)0x0) {
      (*DAT_009b08f0)();
    }
    FreeLibrary(DAT_009b08e8);
    DAT_009b08e8 = (HMODULE)0x0;
    _DAT_009b08ec = 0;
    DAT_009b08f0 = (code *)0x0;
    _DAT_009b08f4 = 0;
  }
  return;
}

