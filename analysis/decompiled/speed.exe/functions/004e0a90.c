/* speed.exe 004e0a90 FUN_004e0a90; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004e0a90(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  if ((*piVar1 >> 4 & 0xfffU) == 2) {
    *(int **)(param_1 + 0x540) = param_2;
  }
  return;
}

