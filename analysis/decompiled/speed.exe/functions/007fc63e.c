/* speed.exe 007fc63e FUN_007fc63e; analysis pseudocode, not buildable source.
 * calls 007fc5f5 FUN_007fc5f5
 * calls 007fc60c FUN_007fc60c
 */

int FUN_007fc63e(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_007fc5f5(param_1 * param_2,param_3);
  if (iVar1 != 0) {
    FUN_007fc60c(iVar1,0,param_1 * param_2);
  }
  return iVar1;
}

