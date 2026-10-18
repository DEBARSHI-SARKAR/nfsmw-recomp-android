/* speed.exe 004b3e60 FUN_004b3e60; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004b3e60(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  switch(*piVar1 >> 4 & 0xfff) {
  case 0:
    *(int **)(param_1 + 0x30) = param_2;
    return;
  case 2:
    *(int **)(param_1 + 0x28) = param_2;
    return;
  case 3:
    *(int **)(param_1 + 0x2c) = param_2;
    return;
  case 7:
    *(int **)(param_1 + 0x34) = param_2;
  }
  return;
}

