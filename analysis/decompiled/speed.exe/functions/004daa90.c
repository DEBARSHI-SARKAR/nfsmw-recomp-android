/* speed.exe 004daa90 FUN_004daa90; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004daa90(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  uVar2 = *piVar1 >> 4 & 0xfff;
  if (uVar2 == 1) {
    *(int **)(param_1 + 0x28) = param_2;
  }
  else {
    if (uVar2 == 0xb) {
      *(int **)(param_1 + 0x30) = param_2;
      return;
    }
    if (uVar2 == 0xc) {
      *(int **)(param_1 + 0x2c) = param_2;
      return;
    }
  }
  return;
}

