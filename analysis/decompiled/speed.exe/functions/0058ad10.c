/* speed.exe 0058ad10 FUN_0058ad10; analysis pseudocode, not buildable source.
 * calls 005768a0 FUN_005768a0
 * calls 007c4b80 FUN_007c4b80
 * calls 0058aab0 FUN_0058aab0
 */

void __thiscall
FUN_0058ad10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = FUN_005768a0(param_3,param_4,param_1);
  if (iVar1 != 0) {
    FUN_0058aab0(iVar1,*(byte *)(extraout_ECX + 5) >> 5,0);
  }
  FUN_007c4b80();
  return;
}

