/* speed.exe 0081d55b FUN_0081d55b; analysis pseudocode, not buildable source.
 * calls 00862b2f FUN_00862b2f
 * calls 0081d535 FUN_0081d535
 */

int FUN_0081d55b(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0081d535(param_1,param_2);
  iVar2 = FUN_00862b2f(param_1 + 2,1,1);
  return iVar2 + iVar1;
}

