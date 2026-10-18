/* speed.exe 005029b0 FUN_005029b0; analysis pseudocode, not buildable source.
 * calls 006cfa10 FUN_006cfa10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005029b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = _DAT_00000004;
  iVar1 = _DAT_00000000;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    piVar2 = *(int **)(param_1 + 8);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    FUN_006cfa10();
    return;
  }
  *_DAT_00000004 = _DAT_00000000;
  *(int **)(iVar1 + 4) = piVar2;
  FUN_006cfa10();
  return;
}

