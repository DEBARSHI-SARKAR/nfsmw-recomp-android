/* speed.exe 007d7190 _fflush; analysis pseudocode, not buildable source.
 * calls 007d7202 FUN_007d7202
 * calls 007d71f5 FUN_007d71f5
 * calls 007c9390 __lock_file
 * calls 007d7220 __fflush_lk
 * calls 007d7330 flsall
 */

/* Library Function - Single Match
    _fflush
   
   Library: Visual Studio 2003 Debug */

int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd1f8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if (_File == (FILE *)0x0) {
    ExceptionList = &pvStack_14;
    iVar1 = flsall(0);
    ExceptionList = pvStack_14;
    return iVar1;
  }
  ExceptionList = &pvStack_14;
  __lock_file(_File);
  local_8 = 0;
  __fflush_lk(_File);
  local_8 = 0xffffffff;
  FUN_007d71f5();
  iVar1 = FUN_007d7202();
  return iVar1;
}

