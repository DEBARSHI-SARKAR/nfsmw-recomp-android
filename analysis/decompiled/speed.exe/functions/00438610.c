/* speed.exe 00438610 FUN_00438610; analysis pseudocode, not buildable source.
 * calls 004342e0 FUN_004342e0
 * calls 0041c510 FUN_0041c510
 */

void __thiscall FUN_00438610(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = FUN_0041c510(iVar1,*(undefined4 *)(iVar1 + 4),param_2);
  FUN_004342e0(1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

