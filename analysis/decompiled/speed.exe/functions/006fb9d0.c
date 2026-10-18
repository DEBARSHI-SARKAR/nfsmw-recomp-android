/* speed.exe 006fb9d0 FUN_006fb9d0; analysis pseudocode, not buildable source.
 * calls 006fa1a0 FUN_006fa1a0
 * calls 006efd10 FUN_006efd10
 */

void __thiscall FUN_006fb9d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = FUN_006efd10(iVar1,*(undefined4 *)(iVar1 + 4),param_2);
  FUN_006fa1a0(1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

