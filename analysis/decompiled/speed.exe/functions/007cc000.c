/* speed.exe 007cc000 __XcptFilter; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000005c UnhandledExceptionFilter
 * calls 007cd100 __getptd
 * calls 007cc1c0 xcptlookup
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2003 Debug */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  _ptiddata p_Var4;
  int *piVar5;
  int iVar6;
  int local_14;
  
  p_Var4 = __getptd();
  piVar5 = (int *)xcptlookup(_ExceptionNum,p_Var4->_initaddr);
  if ((piVar5 == (int *)0x0) || (piVar5[2] == 0)) {
    iVar6 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (piVar5[2] == 5) {
    piVar5[2] = 0;
    iVar6 = 1;
  }
  else if (piVar5[2] == 1) {
    iVar6 = -1;
  }
  else {
    pcVar1 = (code *)piVar5[2];
    pvVar2 = p_Var4->_initarg;
    p_Var4->_initarg = _ExceptionPtr;
    if (piVar5[1] == 8) {
      for (local_14 = DAT_009067f8; local_14 < DAT_009067f8 + _DAT_009067fc; local_14 = local_14 + 1
          ) {
        *(undefined4 *)((int)p_Var4->_initaddr + local_14 * 0xc + 8) = 0;
      }
      pvVar3 = p_Var4->_pxcptacttab;
      if (*piVar5 == -0x3fffff72) {
        p_Var4->_pxcptacttab = (void *)0x83;
      }
      else if (*piVar5 == -0x3fffff70) {
        p_Var4->_pxcptacttab = (void *)0x81;
      }
      else if (*piVar5 == -0x3fffff6f) {
        p_Var4->_pxcptacttab = (void *)0x84;
      }
      else if (*piVar5 == -0x3fffff6d) {
        p_Var4->_pxcptacttab = (void *)0x85;
      }
      else if (*piVar5 == -0x3fffff73) {
        p_Var4->_pxcptacttab = (void *)0x82;
      }
      else if (*piVar5 == -0x3fffff71) {
        p_Var4->_pxcptacttab = (void *)0x86;
      }
      else if (*piVar5 == -0x3fffff6e) {
        p_Var4->_pxcptacttab = (void *)0x8a;
      }
      (*pcVar1)(8,p_Var4->_pxcptacttab);
      p_Var4->_pxcptacttab = pvVar3;
    }
    else {
      piVar5[2] = 0;
      (*pcVar1)(piVar5[1]);
    }
    p_Var4->_initarg = pvVar2;
    iVar6 = -1;
  }
  return iVar6;
}

