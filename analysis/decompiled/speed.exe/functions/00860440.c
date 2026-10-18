/* speed.exe 00860440 __getdcwd; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 00860499 FUN_00860499
 * calls 008604c0 __getdcwd_lk
 * calls 008604a4 FUN_008604a4
 */

/* Library Function - Single Match
    __getdcwd
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __getdcwd(int _Drive,char *_DstBuf,int _SizeInBytes)

{
  char *pcVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008c7bd8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(7);
  local_8 = 0;
  __getdcwd_lk(_Drive,_DstBuf,_SizeInBytes);
  local_8 = 0xffffffff;
  FUN_00860499();
  pcVar1 = (char *)FUN_008604a4();
  return pcVar1;
}

