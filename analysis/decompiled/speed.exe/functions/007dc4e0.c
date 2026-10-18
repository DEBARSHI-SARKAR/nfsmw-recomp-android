/* speed.exe 007dc4e0 __isindst; analysis pseudocode, not buildable source.
 * calls 007dc531 FUN_007dc531
 * calls 007d0fd0 __lock
 * calls 007dc550 __isindst_lk
 * calls 007dc53c FUN_007dc53c
 */

/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isindst(tm *_Time)

{
  int iVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd7d8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(6);
  local_8 = 0;
  __isindst_lk(_Time);
  local_8 = 0xffffffff;
  FUN_007dc531();
  iVar1 = FUN_007dc53c();
  return iVar1;
}

