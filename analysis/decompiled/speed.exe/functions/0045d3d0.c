/* speed.exe 0045d3d0 FUN_0045d3d0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0045d3d0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  if (piVar1 != param_2) {
    piVar3 = *(int **)(param_1 + 4);
    *piVar2 = param_1;
    piVar1[1] = (int)piVar3;
    *piVar3 = (int)piVar1;
    *(int **)(param_1 + 4) = piVar2;
    *param_2 = (int)param_2;
    param_2[1] = (int)param_2;
  }
  return;
}

