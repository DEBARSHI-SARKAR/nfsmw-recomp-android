/* speed.exe 007cb730 _fwrite; analysis pseudocode, not buildable source.
 * calls 007cb78f FUN_007cb78f
 * calls 007cb79c FUN_007cb79c
 * calls 007cb7b0 __fwrite_lk
 * calls 007c9390 __lock_file
 */

/* Library Function - Single Match
    _fwrite
   
   Library: Visual Studio 2003 Debug */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  size_t sVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8cd0;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock_file(_File);
  local_8 = 0;
  __fwrite_lk(_Str,_Size,_Count,_File);
  local_8 = 0xffffffff;
  FUN_007cb78f();
  sVar1 = FUN_007cb79c();
  return sVar1;
}

