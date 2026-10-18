/* speed.exe 004dcb80 FUN_004dcb80; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004dcb80(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  uVar2 = *piVar1 >> 4 & 0xfff;
  if (uVar2 == 2) {
    *(int **)(param_1 + 0x40) = param_2;
  }
  else if (uVar2 == 7) {
    *(int **)(param_1 + 0x3c) = param_2;
    return;
  }
  return;
}

