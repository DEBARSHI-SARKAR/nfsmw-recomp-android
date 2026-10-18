/* speed.exe 007d0df0 __mtdeletelocks; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:00000067 DeleteCriticalSection
 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Library: Visual Studio 2003 Debug */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x24; local_8 = local_8 + 1) {
    if ((*(int *)(&DAT_00906990 + local_8 * 8) != 0) && (*(int *)(&DAT_00906994 + local_8 * 8) != 1)
       ) {
      lpCriticalSection = *(LPCRITICAL_SECTION *)(&DAT_00906990 + local_8 * 8);
      DeleteCriticalSection(lpCriticalSection);
      __free_dbg(lpCriticalSection,2);
      *(undefined4 *)(&DAT_00906990 + local_8 * 8) = 0;
    }
  }
  for (local_8 = 0; local_8 < 0x24; local_8 = local_8 + 1) {
    if ((*(int *)(&DAT_00906990 + local_8 * 8) != 0) && (*(int *)(&DAT_00906994 + local_8 * 8) == 1)
       ) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_00906990 + local_8 * 8));
    }
  }
  return;
}

