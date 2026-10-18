/* speed.exe 0085eb90 _vprintf; analysis pseudocode, not buildable source.
 * calls 0085ec42 FUN_0085ec42
 * calls 007c9390 __lock_file
 * calls 007d1300 __ftbuf
 * calls 007d11b0 __stbuf
 * calls 0085ec35 FUN_0085ec35
 * calls 007d2670 __CrtDbgReport
 * calls 007d1390 __output
 */

/* Library Function - Single Match
    _vprintf
   
   Library: Visual Studio 2003 Debug */

int __cdecl _vprintf(char *_Format,va_list _ArgList)

{
  code *pcVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008c7b80;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (_Format == (char *)0x0) {
    ExceptionList = &pvStack_14;
    iVar2 = __CrtDbgReport(2,"vprintf.c",0x31,0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  __lock_file((FILE *)&DAT_00906350);
  local_8 = 0;
  iVar2 = __stbuf((FILE *)&DAT_00906350);
  __output(&DAT_00906350,_Format,_ArgList);
  __ftbuf(iVar2,(FILE *)&DAT_00906350);
  local_8 = 0xffffffff;
  FUN_0085ec35();
  iVar2 = FUN_0085ec42();
  return iVar2;
}

