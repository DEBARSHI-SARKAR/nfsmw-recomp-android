/* speed.exe 004dcdd0 FUN_004dcdd0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004dcdd0(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(*param_2 + 4))();
  if ((*puVar1 & 0xfff0) == 0x60) {
    *(int **)(param_1 + 0x4c) = param_2;
  }
  return;
}

