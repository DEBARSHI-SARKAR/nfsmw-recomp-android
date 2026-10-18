/* speed.exe 008603c0 __getcwd; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 00860417 FUN_00860417
 * calls 008604c0 __getdcwd_lk
 * calls 00860422 FUN_00860422
 */

/* Library Function - Single Match
    __getcwd
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __getcwd(char *_DstBuf,int _SizeInBytes)

{
  char *pcVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008c7bc8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(7);
  local_8 = 0;
  __getdcwd_lk(0,_DstBuf,_SizeInBytes);
  local_8 = 0xffffffff;
  FUN_00860417();
  pcVar1 = (char *)FUN_00860422();
  return pcVar1;
}

