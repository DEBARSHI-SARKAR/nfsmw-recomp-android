/* speed.exe 007dc050 __tzset; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007dc0c0 __tzset_lk
 * calls 007dc0a2 FUN_007dc0a2
 * calls 007dc097 FUN_007dc097
 */

/* Library Function - Single Match
    __tzset
   
   Library: Visual Studio 2003 Debug */

void __cdecl __tzset(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd7b0;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(6);
  local_8 = 0;
  __tzset_lk();
  local_8 = 0xffffffff;
  FUN_007dc097();
  FUN_007dc0a2();
  return;
}

