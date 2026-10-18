/* speed.exe 007dd1d0 ___updatetmbcinfo; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007d0fd0 __lock
 * calls 007cd100 __getptd
 * calls 007dd278 FUN_007dd278
 * calls 007dd283 FUN_007dd283
 */

/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2003 Debug */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  pthreadmbcinfo ptVar3;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd820;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(0xd);
  local_8 = 0;
  p_Var2 = __getptd();
  piVar1 = p_Var2->_tpxcptinfoptrs;
  if (piVar1 != DAT_009c50a4) {
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
      __free_dbg(piVar1,2);
    }
    p_Var2->_tpxcptinfoptrs = DAT_009c50a4;
    *DAT_009c50a4 = *DAT_009c50a4 + 1;
  }
  local_8 = 0xffffffff;
  FUN_007dd278();
  ptVar3 = (pthreadmbcinfo)FUN_007dd283();
  return ptVar3;
}

