/* speed.exe 004e0ef0 FUN_004e0ef0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004e0ef0(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(*param_2 + 4))();
  if ((*puVar1 & 0xfff0) == 0xf0) {
    *(int **)(param_1 + 0x30) = param_2;
  }
  return;
}

