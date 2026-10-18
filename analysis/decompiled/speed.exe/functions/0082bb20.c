/* speed.exe 0082bb20 FUN_0082bb20; analysis pseudocode, not buildable source.
 * calls 00862905 FUN_00862905
 * calls 008628cb FUN_008628cb
 */

bool FUN_0082bb20(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == -0x41102151) {
    return true;
  }
  iVar1 = FUN_008628cb(param_1);
  if (iVar1 == -1) {
    return true;
  }
  if (iVar1 == 1) {
    FUN_00862905(param_1,param_2,0);
  }
  return iVar1 == 1;
}

