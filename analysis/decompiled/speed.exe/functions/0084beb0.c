/* speed.exe 0084beb0 FUN_0084beb0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000057 LeaveCriticalSection
 * calls 0084bd60 FUN_0084bd60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084beb0(void)

{
  FUN_0084bd60(&DAT_009c3840);
  if (1 < DAT_009c3844) {
    DAT_009c3844 = DAT_009c3844 - 1;
    return;
  }
  DAT_009c3840 = 0;
  DAT_009c3844 = 0;
  _DAT_009c3848 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_009c384c);
  return;
}

