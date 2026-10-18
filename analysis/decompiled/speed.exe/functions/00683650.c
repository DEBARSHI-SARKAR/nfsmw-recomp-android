/* speed.exe 00683650 FUN_00683650; analysis pseudocode, not buildable source.
 * calls 00681bd0 FUN_00681bd0
 * calls 00675720 FUN_00675720
 */

void __thiscall FUN_00683650(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = FUN_00675720(iVar1,*(undefined4 *)(iVar1 + 4),param_2);
  FUN_00681bd0(1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

