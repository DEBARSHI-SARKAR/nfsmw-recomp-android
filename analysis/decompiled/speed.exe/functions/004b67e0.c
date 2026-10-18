/* speed.exe 004b67e0 FUN_004b67e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004b67e0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  if ((*piVar1 >> 4 & 0xfffU) == 1) {
    *(int **)(param_1 + 0x2c) = param_2;
  }
  return;
}

