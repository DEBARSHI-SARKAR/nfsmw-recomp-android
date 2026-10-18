/* speed.exe 004b5260 FUN_004b5260; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004b5260(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  if ((*piVar1 >> 4 & 0xfffU) == 2) {
    *(int **)(param_1 + 0xd0) = param_2;
  }
  return;
}

