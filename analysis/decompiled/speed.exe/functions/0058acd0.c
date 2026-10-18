/* speed.exe 0058acd0 FUN_0058acd0; analysis pseudocode, not buildable source.
 * calls 005769c0 FUN_005769c0
 * calls 007c4b80 FUN_007c4b80
 * calls 0058aab0 FUN_0058aab0
 */

void __thiscall
FUN_0058acd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_005769c0(param_3,param_1);
  if (iVar1 != 0) {
    FUN_0058aab0(iVar1,param_4,0);
  }
  FUN_007c4b80();
  return;
}

