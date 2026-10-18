/* speed.exe 004e0c40 FUN_004e0c40; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004e0c40(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(*param_2 + 4))();
  if ((*puVar1 & 0xfff0) == 0) {
    *(int **)(param_1 + 0x40) = param_2;
  }
  return;
}

