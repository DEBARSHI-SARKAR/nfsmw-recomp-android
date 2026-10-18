/* speed.exe 00700750 FUN_00700750; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00700750(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x28))();
    iVar2 = (**(code **)(*param_2 + 0x28))();
    if (iVar1 == iVar2) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}

