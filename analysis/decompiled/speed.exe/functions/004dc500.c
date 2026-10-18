/* speed.exe 004dc500 FUN_004dc500; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004dc500(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(**(code **)(*param_2 + 4))();
  uVar2 = *piVar1 >> 4 & 0xfff;
  if (uVar2 == 4) {
    *(int **)(param_1 + 0x38) = param_2;
  }
  else if (uVar2 == 7) {
    *(int **)(param_1 + 0x34) = param_2;
    return;
  }
  return;
}

