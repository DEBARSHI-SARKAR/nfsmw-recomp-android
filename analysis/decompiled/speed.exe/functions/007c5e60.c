/* speed.exe 007c5e60 _printf; analysis pseudocode, not buildable source.
 * calls 007d1300 __ftbuf
 * calls 007d11b0 __stbuf
 * calls 007c93d0 __lock_file2
 * calls 007c5f0a FUN_007c5f0a
 * calls 007c5f1a FUN_007c5f1a
 * calls 007d1390 __output
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    _printf
   
   Library: Visual Studio 2003 Debug */

int __cdecl _printf(char *_Format,...)

{
  code *pcVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8160;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (_Format == (char *)0x0) {
    ExceptionList = &pvStack_14;
    iVar2 = __CrtDbgReport(2,"printf.c",0x36,0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  __lock_file2(1,&DAT_00906350);
  local_8 = 0;
  iVar2 = __stbuf((FILE *)&DAT_00906350);
  __output(&DAT_00906350,_Format,&stack0x00000008);
  __ftbuf(iVar2,(FILE *)&DAT_00906350);
  local_8 = 0xffffffff;
  FUN_007c5f0a();
  iVar2 = FUN_007c5f1a();
  return iVar2;
}

