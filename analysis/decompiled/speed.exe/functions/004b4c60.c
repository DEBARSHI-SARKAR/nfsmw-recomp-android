/* speed.exe 004b4c60 FUN_004b4c60; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004b4c60(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  uVar2 = *piVar1 >> 4 & 0xfff;
  if (uVar2 == 2) {
    *(int **)(param_1 + 0x2c) = param_2;
  }
  else {
    if (uVar2 == 3) {
      *(int **)(param_1 + 0x30) = param_2;
      return;
    }
    if (uVar2 == 4) {
      *(int **)(param_1 + 0x28) = param_2;
      return;
    }
  }
  return;
}

