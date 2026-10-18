/* speed.exe 007d2f80 ___updatetlocinfo; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007d2fd5 FUN_007d2fd5
 * calls 007d2fca FUN_007d2fca
 * calls 007d2ff0 ___updatetlocinfo_lk
 */

/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2003 Debug */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  pthreadlocinfo ptVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd0c0;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(0xc);
  local_8 = 0;
  ___updatetlocinfo_lk();
  local_8 = 0xffffffff;
  FUN_007d2fca();
  ptVar1 = (pthreadlocinfo)FUN_007d2fd5();
  return ptVar1;
}

