/* speed.exe 007c50b0 _FindAndUnlinkFrame; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007d0ab0 _inconsistency
 */

/* Library Function - Single Match
    void __cdecl _FindAndUnlinkFrame(struct FrameInfo *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl _FindAndUnlinkFrame(FrameInfo *param_1)

{
  int iVar1;
  FrameInfo *pFVar2;
  FrameInfo *pFVar3;
  _ptiddata p_Var4;
  
  p_Var4 = __getptd();
  if (param_1 == p_Var4->_curexception) {
    p_Var4 = __getptd();
    p_Var4->_curexception = *(void **)(param_1 + 4);
    return;
  }
  p_Var4 = __getptd();
  iVar1 = *(int *)(p_Var4->_curexception + 4);
  pFVar3 = p_Var4->_curexception;
  while( true ) {
    if (iVar1 == 0) {
      _inconsistency();
      return;
    }
    pFVar2 = *(FrameInfo **)(pFVar3 + 4);
    if (param_1 == pFVar2) break;
    iVar1 = *(int *)(pFVar2 + 4);
    pFVar3 = pFVar2;
  }
  *(undefined4 *)(pFVar3 + 4) = *(undefined4 *)(param_1 + 4);
  return;
}

