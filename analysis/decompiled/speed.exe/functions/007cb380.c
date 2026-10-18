/* speed.exe 007cb380 _ungetc; analysis pseudocode, not buildable source.
 * calls 007cb408 FUN_007cb408
 * calls 007cb3fb FUN_007cb3fb
 * calls 007c9390 __lock_file
 * calls 007cb420 __ungetc_lk
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    _ungetc
   
   Library: Visual Studio 2003 Debug */

int __cdecl _ungetc(int _Ch,FILE *_File)

{
  code *pcVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8c98;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (_File == (FILE *)0x0) {
    ExceptionList = &pvStack_14;
    iVar2 = __CrtDbgReport(2,"ungetc.c",0x31,0,"stream != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  __lock_file(_File);
  local_8 = 0;
  __ungetc_lk(_Ch,_File);
  local_8 = 0xffffffff;
  FUN_007cb3fb();
  iVar2 = FUN_007cb408();
  return iVar2;
}

