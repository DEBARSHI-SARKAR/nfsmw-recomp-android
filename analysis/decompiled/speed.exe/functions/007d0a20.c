/* speed.exe 007d0a20 terminate; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007deff0 _abort
 */

/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2003 Debug */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bcbe8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  p_Var1 = __getptd();
  if (p_Var1->ptlocinfo != (pthreadlocinfo)0x0) {
    local_8 = 0;
    p_Var1 = __getptd();
    (*(code *)p_Var1->ptlocinfo)();
    local_8 = 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

