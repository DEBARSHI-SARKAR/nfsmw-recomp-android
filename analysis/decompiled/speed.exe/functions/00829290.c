/* speed.exe 00829290 FUN_00829290; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 00829410 FUN_00829410
 * calls 00829450 FUN_00829450
 * calls 0082e3e0 FUN_0082e3e0
 */

undefined4 FUN_00829290(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00829410();
  if (iVar1 == 0) {
    return 0xffffffee;
  }
  uVar3 = 0xfffffff8;
  iVar1 = FUN_0082caa0(param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_0082e3e0(param_1);
    if (iVar2 != 0) {
      if (*(int *)(iVar1 + 300) == 0) {
        FUN_00829450();
        return 0xffffffd9;
      }
      uVar3 = (**(code **)(**(int **)(iVar1 + 300) + 0x18))(param_2);
    }
  }
  FUN_00829450();
  return uVar3;
}

