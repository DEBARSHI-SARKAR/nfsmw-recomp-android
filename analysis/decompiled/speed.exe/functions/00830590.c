/* speed.exe 00830590 FUN_00830590; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 00829450 FUN_00829450
 * calls 0082e3e0 FUN_0082e3e0
 * calls 00829410 FUN_00829410
 */

uint FUN_00830590(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0xfffffff8;
  iVar1 = FUN_00829410();
  if (iVar1 == 0) {
    return 0xffffffee;
  }
  iVar1 = FUN_0082e3e0(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0082caa0(param_1);
    if ((iVar1 != 0) && (*(int **)(iVar1 + 300) != (int *)0x0)) {
      if (-1 < param_2) {
        iVar2 = (**(code **)(**(int **)(iVar1 + 300) + 0x6c))();
        if (param_2 < iVar2) {
          iVar1 = (**(code **)(**(int **)(iVar1 + 300) + 0x74))(param_2);
          if (iVar1 == 0) {
            FUN_00829450();
            return 0xffffffd5;
          }
          iVar1 = *(int *)(iVar1 + 0x14);
          FUN_00829450();
          return (iVar1 != 0) - 1 & 0xffffd8f1;
        }
      }
      uVar3 = 0xfffffff3;
    }
  }
  FUN_00829450();
  return uVar3;
}

