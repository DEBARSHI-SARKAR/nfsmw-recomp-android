/* speed.exe 004dde80 FUN_004dde80; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004dde80(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(*param_2 + 4))();
  if ((*puVar1 & 0xfff0) == 0) {
    *(int **)(param_1 + 0x2c) = param_2;
  }
  return;
}

