/* speed.exe 004dea30 FUN_004dea30; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004dea30(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(*param_2 + 4))();
  if ((*puVar1 & 0xfff0) == 0x60) {
    *(int **)(param_1 + 0x28) = param_2;
  }
  return;
}

