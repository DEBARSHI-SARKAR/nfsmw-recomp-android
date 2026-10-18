/* speed.exe 0084c0b0 FUN_0084c0b0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000001f Sleep
 * calls EXTERNAL:00000067 DeleteCriticalSection
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084c0b0(void)

{
  DAT_009c3868 = 0;
  while (0 < DAT_0090d3e0) {
    Sleep(1);
  }
  DAT_009c3720 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_009c3724);
  _DAT_009c3848 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_009c384c);
  return;
}

