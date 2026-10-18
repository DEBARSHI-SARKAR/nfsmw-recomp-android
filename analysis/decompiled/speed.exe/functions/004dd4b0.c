/* speed.exe 004dd4b0 FUN_004dd4b0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004dd4b0(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  uVar2 = *piVar1 >> 4 & 0xfff;
  if (uVar2 == 0) {
    *(int **)(param_1 + 0x3c) = param_2;
  }
  else if (uVar2 == 1) {
    *(int **)(param_1 + 0x40) = param_2;
    return;
  }
  return;
}

