/* speed.exe 007d0800 ___CxxUnregisterExceptionObject; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007c50b0 _FindAndUnlinkFrame
 * calls 007d03d0 ___DestructExceptionObject
 * calls 007c5080 IsExceptionObjectToBeDestroyed
 */

/* Library Function - Single Match
    ___CxxUnregisterExceptionObject
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl ___CxxUnregisterExceptionObject(void *storage,int rethrow)

{
  _ptiddata p_Var1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)storage + 8) != -1) {
    _FindAndUnlinkFrame(storage);
    if ((((rethrow == 0) && (p_Var1 = __getptd(), *(int *)p_Var1->_unexpected == -0x1f928c9d)) &&
        (p_Var1 = __getptd(), *(int *)((int)p_Var1->_unexpected + 0x10) == 3)) &&
       ((p_Var1 = __getptd(), *(int *)((int)p_Var1->_unexpected + 0x14) == 0x19930520 ||
        (p_Var1 = __getptd(), *(int *)((int)p_Var1->_unexpected + 0x14) == 0x19930521)))) {
      p_Var1 = __getptd();
      iVar2 = IsExceptionObjectToBeDestroyed(*(void **)((int)p_Var1->_unexpected + 0x18));
      if (iVar2 != 0) {
        uVar3 = 1;
        p_Var1 = __getptd();
        ___DestructExceptionObject(p_Var1->_unexpected,uVar3);
      }
    }
    p_Var1 = __getptd();
    p_Var1->_unexpected = *(void **)((int)storage + 8);
    p_Var1 = __getptd();
    p_Var1->_translator = *(void **)((int)storage + 0xc);
    return;
  }
  return;
}

