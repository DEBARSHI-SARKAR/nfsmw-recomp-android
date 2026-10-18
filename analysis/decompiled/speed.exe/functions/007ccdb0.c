/* speed.exe 007ccdb0 __ioterm; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:00000067 DeleteCriticalSection
 */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio */

void __cdecl __ioterm(void)

{
  uint local_c;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x40; local_8 = local_8 + 1) {
    if ((&DAT_009c5340)[local_8] != 0) {
      for (local_c = (&DAT_009c5340)[local_8]; local_c < (&DAT_009c5340)[local_8] + 0x480;
          local_c = local_c + 0x24) {
        if (*(int *)(local_c + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(local_c + 0xc));
        }
      }
      __free_dbg((&DAT_009c5340)[local_8],2);
      (&DAT_009c5340)[local_8] = 0;
    }
  }
  return;
}

