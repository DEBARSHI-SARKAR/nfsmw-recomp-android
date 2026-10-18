/* speed.exe 004b3760 FUN_004b3760; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004b3760(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(*param_2 + 4))();
  if ((*puVar1 & 0xfff0) == 0x40) {
    *(int **)(param_1 + 0x28) = param_2;
  }
  return;
}

