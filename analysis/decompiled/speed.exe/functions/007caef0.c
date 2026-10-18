/* speed.exe 007caef0 _fread; analysis pseudocode, not buildable source.
 * calls 007c9390 __lock_file
 * calls 007caf70 __fread_lk
 * calls 007caf5c FUN_007caf5c
 * calls 007caf4f FUN_007caf4f
 */

/* Library Function - Single Match
    _fread
   
   Library: Visual Studio 2003 Debug */

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8c58;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock_file(_File);
  local_8 = 0;
  __fread_lk(_DstBuf,_ElementSize,_Count,_File);
  local_8 = 0xffffffff;
  FUN_007caf4f();
  sVar1 = FUN_007caf5c();
  return sVar1;
}

