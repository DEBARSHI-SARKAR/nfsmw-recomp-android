/* speed.exe 007cb550 FID_conflict:_getc; analysis pseudocode, not buildable source.
 * calls 007cb612 FUN_007cb612
 * calls 007c9390 __lock_file
 * calls 007cb605 FUN_007cb605
 * calls 007d2670 __CrtDbgReport
 * calls 007db3e0 __filbuf
 */

/* Library Function - Multiple Matches With Different Base Names
    _fgetc
    _getc
   
   Library: Visual Studio 2003 Debug */

int __cdecl FID_conflict__getc(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8cb0;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (_File == (FILE *)0x0) {
    ExceptionList = &pvStack_14;
    iVar2 = __CrtDbgReport(2,"fgetc.c",0x29,0,"stream != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  __lock_file(_File);
  local_8 = 0;
  _File->_cnt = _File->_cnt + -1;
  if (_File->_cnt < 0) {
    __filbuf(_File);
  }
  else {
    _File->_ptr = _File->_ptr + 1;
  }
  local_8 = 0xffffffff;
  FUN_007cb605();
  iVar2 = FUN_007cb612();
  return iVar2;
}

