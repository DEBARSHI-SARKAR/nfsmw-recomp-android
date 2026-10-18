/* speed.exe 007d7070 __fcloseall; analysis pseudocode, not buildable source.
 * calls 007c94f0 _fclose
 * calls 007c7290 __free_dbg
 * calls 007d7174 FUN_007d7174
 * calls 007d0fd0 __lock
 * calls EXTERNAL:00000067 DeleteCriticalSection
 * calls 007d7169 FUN_007d7169
 */

/* Library Function - Single Match
    __fcloseall
   
   Library: Visual Studio 2003 Debug */

int __cdecl __fcloseall(void)

{
  int iVar1;
  int local_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd1e8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(1);
  local_8 = 0;
  for (local_24 = 3; local_24 < DAT_009c6460; local_24 = local_24 + 1) {
    if (*(int *)(DAT_009c5454 + local_24 * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_009c5454 + local_24 * 4) + 0xc) & 0x83) != 0) {
        _fclose(*(FILE **)(DAT_009c5454 + local_24 * 4));
      }
      if (0x13 < local_24) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_009c5454 + local_24 * 4) + 0x20));
        __free_dbg(*(undefined4 *)(DAT_009c5454 + local_24 * 4),2);
        *(undefined4 *)(DAT_009c5454 + local_24 * 4) = 0;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_007d7169();
  iVar1 = FUN_007d7174();
  return iVar1;
}

