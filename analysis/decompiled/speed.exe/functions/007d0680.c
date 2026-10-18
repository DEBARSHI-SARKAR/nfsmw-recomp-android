/* speed.exe 007d0680 ___CxxRegisterExceptionObject; analysis pseudocode, not buildable source.
 * calls 007c5050 _CreateFrameInfo
 * calls 007cd100 __getptd
 */

/* Library Function - Single Match
    ___CxxRegisterExceptionObject
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl ___CxxRegisterExceptionObject(void *exception,void *storage)

{
  _ptiddata p_Var1;
  int *local_14;
  
  if ((exception == (void *)0x0) || (*(int *)exception == 0)) {
    *(undefined4 *)((int)storage + 8) = 0xffffffff;
    *(undefined4 *)((int)storage + 0xc) = 0xffffffff;
  }
  else {
    local_14 = *(int **)exception;
    if ((((*local_14 == -0x1f928c9d) && (local_14[4] == 3)) &&
        ((local_14[5] == 0x19930520 || (local_14[5] == 0x19930521)))) && (local_14[7] == 0)) {
      p_Var1 = __getptd();
      local_14 = p_Var1->_unexpected;
    }
    _CreateFrameInfo(storage,(void *)local_14[6]);
    p_Var1 = __getptd();
    *(undefined4 *)((int)storage + 8) = p_Var1->_unexpected;
    p_Var1 = __getptd();
    *(undefined4 *)((int)storage + 0xc) = p_Var1->_translator;
    p_Var1 = __getptd();
    p_Var1->_unexpected = local_14;
  }
  p_Var1 = __getptd();
  p_Var1->_purecall = (void *)((int)p_Var1->_purecall + -1);
  p_Var1 = __getptd();
  if ((int)p_Var1->_purecall < 0) {
    p_Var1 = __getptd();
    p_Var1->_purecall = (void *)0x0;
  }
  return 1;
}

