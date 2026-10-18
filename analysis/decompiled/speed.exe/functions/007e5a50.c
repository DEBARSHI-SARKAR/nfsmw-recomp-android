/* speed.exe 007e5a50 _getenv; analysis pseudocode, not buildable source.
 * calls 007e5aa1 FUN_007e5aa1
 * calls 007d0fd0 __lock
 * calls 007e5ac0 __getenv_lk
 * calls 007e5aac FUN_007e5aac
 */

/* Library Function - Single Match
    _getenv
   
   Library: Visual Studio 2003 Debug */

char * __cdecl _getenv(char *_VarName)

{
  char *pcVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bf118;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(7);
  local_8 = 0;
  __getenv_lk(_VarName);
  local_8 = 0xffffffff;
  FUN_007e5aa1();
  pcVar1 = (char *)FUN_007e5aac();
  return pcVar1;
}

