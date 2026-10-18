/* speed.exe 004da7a0 FUN_004da7a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004da7a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) || ((iVar1 == 0xc || (iVar1 == 5)))) {
    *(int *)(param_1 + 0x18) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(int *)(param_1 + 0x14) = param_2;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x40))();
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x18) + 0xd0;
  return;
}

