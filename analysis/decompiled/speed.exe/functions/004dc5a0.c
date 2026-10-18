/* speed.exe 004dc5a0 FUN_004dc5a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004dc5a0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  switch(*piVar1 >> 4 & 0xfff) {
  case 2:
    *(int **)(param_1 + 0x48) = param_2;
    break;
  case 4:
    *(int **)(param_1 + 0x38) = param_2;
    return;
  case 5:
    *(int **)(param_1 + 0x40) = param_2;
    return;
  case 6:
    *(int **)(param_1 + 0x44) = param_2;
    return;
  case 7:
    *(int **)(param_1 + 0x34) = param_2;
    return;
  }
  return;
}

