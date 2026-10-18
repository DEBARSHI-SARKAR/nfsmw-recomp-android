/* speed.exe 004f2c60 FUN_004f2c60; analysis pseudocode, not buildable source.
 * calls 004eb8e0 FUN_004eb8e0
 * calls 004d9090 FUN_004d9090
 */

void __fastcall FUN_004f2c60(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = 0;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar4 = 0;
    iVar2 = (**(code **)(*piVar1 + 0xc))(0);
    while (iVar2 != -1) {
      uVar3 = (**(code **)(*piVar1 + 0xc))(iVar4);
      uVar3 = FUN_004eb8e0(uVar3);
      (**(code **)(*piVar1 + 0x10))(uVar3);
      iVar4 = iVar4 + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))(iVar4);
    }
  }
  for (piVar1 = *(int **)(param_1 + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar4 = 0;
    iVar2 = (**(code **)(*piVar1 + 0xc))(0);
    while (iVar2 != -1) {
      uVar3 = (**(code **)(*piVar1 + 0xc))(iVar4);
      uVar3 = FUN_004eb8e0(uVar3);
      (**(code **)(*piVar1 + 0x10))(uVar3);
      iVar4 = iVar4 + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))(iVar4);
    }
  }
  FUN_004d9090();
  return;
}

