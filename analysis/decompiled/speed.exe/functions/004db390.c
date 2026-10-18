/* speed.exe 004db390 FUN_004db390; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004db390(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  uVar2 = *piVar1 >> 4 & 0xfff;
  if (uVar2 == 0xd) {
    *(int **)(param_1 + 0x118) = param_2;
  }
  else if (uVar2 == 0xe) {
    *(int **)(param_1 + 0x11c) = param_2;
    return;
  }
  return;
}

