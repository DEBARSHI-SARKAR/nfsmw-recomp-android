/* speed.exe 007c94f0 _fclose; analysis pseudocode, not buildable source.
 * calls 007c9592 FUN_007c9592
 * calls 007c9390 __lock_file
 * calls 007c9585 FUN_007c9585
 * calls 007d2670 __CrtDbgReport
 * calls 007c95b0 __fclose_lk
 */

/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2003 Debug */

int __cdecl _fclose(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8b10;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (_File == (FILE *)0x0) {
    ExceptionList = &pvStack_14;
    iVar2 = __CrtDbgReport(2,"fclose.c",0x30,0,"stream != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if ((_File->_flag & 0x40U) != 0) {
    _File->_flag = 0;
    iVar2 = FUN_007c9592();
    return iVar2;
  }
  __lock_file(_File);
  local_8 = 0;
  __fclose_lk(_File);
  local_8 = 0xffffffff;
  FUN_007c9585();
  iVar2 = FUN_007c9592();
  return iVar2;
}

