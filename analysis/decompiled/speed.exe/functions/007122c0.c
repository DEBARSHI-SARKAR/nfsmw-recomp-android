/* speed.exe 007122c0 FUN_007122c0; analysis pseudocode, not buildable source.
 * calls 00705cd0 FUN_00705cd0
 * calls 0070fa10 FUN_0070fa10
 */

void __thiscall FUN_007122c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = FUN_00705cd0(iVar1,*(undefined4 *)(iVar1 + 4),param_2);
  FUN_0070fa10(1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

