/* speed.exe 007cb290 _fprintf; analysis pseudocode, not buildable source.
 * calls 007d1300 __ftbuf
 * calls 007d11b0 __stbuf
 * calls 007cb35e FUN_007cb35e
 * calls 007c9390 __lock_file
 * calls 007cb36b FUN_007cb36b
 * calls 007d1390 __output
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    _fprintf
   
   Library: Visual Studio 2003 Debug */

int __cdecl _fprintf(FILE *_File,char *_Format,...)

{
  code *pcVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8c80;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (_File == (FILE *)0x0) {
    ExceptionList = &pvStack_14;
    iVar2 = __CrtDbgReport(2,"fprintf.c",0x38,0,"str != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"fprintf.c",0x39,0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  __lock_file(_File);
  local_8 = 0;
  iVar2 = __stbuf(_File);
  __output(_File,_Format,&stack0x0000000c);
  __ftbuf(iVar2,_File);
  local_8 = 0xffffffff;
  FUN_007cb35e();
  iVar2 = FUN_007cb36b();
  return iVar2;
}

