/* speed.exe 007c9660 __fsopen; analysis pseudocode, not buildable source.
 * calls 007c9775 FUN_007c9775
 * calls 007c9768 FUN_007c9768
 * calls 007d7a80 __getstream
 * calls 007cb270 FUN_007cb270
 * calls 007d76f0 __openfile
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __fsopen
   
   Library: Visual Studio 2003 Debug */

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  code *pcVar1;
  int iVar2;
  FILE *pFVar3;
  undefined4 *puVar4;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8b70;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (_Filename == (char *)0x0) {
    ExceptionList = &pvStack_14;
    iVar2 = __CrtDbgReport(2,"fopen.c",0x36,0,"file != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FILE *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*_Filename == '\0') {
    iVar2 = __CrtDbgReport(2,"fopen.c",0x37,0,"*file != _T(\'\\0\')");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FILE *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (_Mode == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"fopen.c",0x38,0,"mode != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FILE *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*_Mode == '\0') {
    iVar2 = __CrtDbgReport(2,"fopen.c",0x39,0,"*mode != _T(\'\\0\')");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FILE *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = __getstream();
  if (pFVar3 == (FILE *)0x0) {
    puVar4 = (undefined4 *)FUN_007cb270();
    *puVar4 = 0x18;
    ExceptionList = pvStack_14;
    return (FILE *)0x0;
  }
  local_8 = 0;
  __openfile(_Filename,_Mode,_ShFlag,pFVar3);
  local_8 = 0xffffffff;
  FUN_007c9768();
  pFVar3 = (FILE *)FUN_007c9775();
  return pFVar3;
}

