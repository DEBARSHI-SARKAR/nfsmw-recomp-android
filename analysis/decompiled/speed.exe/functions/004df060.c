/* speed.exe 004df060 FUN_004df060; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004df060(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(*param_2 + 4))();
  if ((*puVar1 & 0xfff0) == 0) {
    *(int **)(param_1 + 0x110) = param_2;
  }
  return;
}

