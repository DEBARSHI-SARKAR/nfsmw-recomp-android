/* speed.exe 007c9140 _vfprintf; analysis pseudocode, not buildable source.
 * calls 007d1300 __ftbuf
 * calls 007d11b0 __stbuf
 * calls 007c9390 __lock_file
 * calls 007c9215 FUN_007c9215
 * calls 007c9208 FUN_007c9208
 * calls 007d1390 __output
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    _vfprintf
   
   Library: Visual Studio 2003 Debug */

int __cdecl _vfprintf(FILE *_File,char *_Format,va_list _ArgList)

{
  code *pcVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8ae0;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (_File == (FILE *)0x0) {
    ExceptionList = &pvStack_14;
    iVar2 = __CrtDbgReport(2,"vfprintf.c",0x35,0,"str != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"vfprintf.c",0x36,0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  __lock_file(_File);
  local_8 = 0;
  iVar2 = __stbuf(_File);
  __output(_File,_Format,_ArgList);
  __ftbuf(iVar2,_File);
  local_8 = 0xffffffff;
  FUN_007c9208();
  iVar2 = FUN_007c9215();
  return iVar2;
}

