/* speed.exe 00860ac0 _fputwc; analysis pseudocode, not buildable source.
 * calls 00860b43 FUN_00860b43
 * calls 00860b50 FUN_00860b50
 * calls 00860b70 __putwc_lk
 * calls 007c9390 __lock_file
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    _fputwc
   
   Library: Visual Studio 2003 Debug */

wint_t __cdecl _fputwc(wchar_t _Ch,FILE *_File)

{
  code *pcVar1;
  wint_t wVar2;
  int iVar3;
  undefined2 extraout_var;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008c8140;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (_File == (FILE *)0x0) {
    ExceptionList = &pvStack_14;
    iVar3 = __CrtDbgReport(2,"fputwc.c",0x35,0,"str != NULL");
    if (iVar3 == 1) {
      pcVar1 = (code *)swi(3);
      wVar2 = (*pcVar1)();
      return wVar2;
    }
  }
  __lock_file(_File);
  local_8 = 0;
  __putwc_lk(CONCAT22(extraout_var,_Ch),_File);
  local_8 = 0xffffffff;
  FUN_00860b43();
  wVar2 = FUN_00860b50();
  return wVar2;
}

