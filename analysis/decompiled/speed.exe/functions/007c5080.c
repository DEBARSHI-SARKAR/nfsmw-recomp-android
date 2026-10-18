/* speed.exe 007c5080 IsExceptionObjectToBeDestroyed; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 */

/* Library Function - Single Match
    int __cdecl IsExceptionObjectToBeDestroyed(void *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl IsExceptionObjectToBeDestroyed(void *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  
  p_Var2 = __getptd();
  piVar1 = p_Var2->_curexception;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if ((void *)*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return 0;
}

