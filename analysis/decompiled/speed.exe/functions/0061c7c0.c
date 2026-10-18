/* speed.exe 0061c7c0 FUN_0061c7c0; analysis pseudocode, not buildable source.
 * calls 0060ca40 FUN_0060ca40
 * calls 00616d40 FUN_00616d40
 */

void __thiscall FUN_0061c7c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = FUN_0060ca40(iVar1,*(undefined4 *)(iVar1 + 4),param_2);
  FUN_00616d40(1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

