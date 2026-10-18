/* speed.exe 0075a650 FUN_0075a650; analysis pseudocode, not buildable source.
 * calls 0073d7c0 FUN_0073d7c0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 007585b0 FUN_007585b0
 */

void __fastcall FUN_0075a650(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_008b4c60;
  (*(code *)PTR_FUN_008b4c68)();
  if (param_1[3] != 0) {
    iVar3 = param_1[1];
    piVar1 = (int *)param_1[2];
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
  }
  param_1[3] = 0;
  if (param_1[4] != 0) {
    piVar1 = param_1 + 1;
    iVar3 = FUN_007585b0();
    piVar2 = *(int **)(iVar3 + 4);
    *piVar2 = (int)piVar1;
    *(int **)(iVar3 + 4) = piVar1;
    param_1[2] = piVar2;
    *piVar1 = iVar3;
  }
  FUN_007585b0();
  iVar3 = FUN_0045d3a0(param_1 + 1);
  if (iVar3 != 0) {
    FUN_007585b0();
    iVar3 = param_1[1];
    piVar1 = (int *)param_1[2];
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
  }
  return;
}

