/* speed.exe 00758670 FUN_00758670; analysis pseudocode, not buildable source.
 * calls 007585b0 FUN_007585b0
 */

void __fastcall FUN_00758670(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 8))();
  if (param_1[3] != 0) {
    iVar2 = param_1[1];
    piVar3 = (int *)param_1[2];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
  }
  param_1[3] = 0;
  if (param_1[4] != 0) {
    piVar3 = param_1 + 1;
    iVar2 = FUN_007585b0();
    puVar1 = *(undefined4 **)(iVar2 + 4);
    *puVar1 = piVar3;
    *(int **)(iVar2 + 4) = piVar3;
    param_1[2] = (int)puVar1;
    *piVar3 = iVar2;
  }
  return;
}

