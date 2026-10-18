/* speed.exe 0066b3b0 FUN_0066b3b0; analysis pseudocode, not buildable source.
 * calls 006eec20 FUN_006eec20
 * calls 006e9f60 FUN_006e9f60
 * calls 006e9f80 FUN_006e9f80
 */

void __fastcall FUN_0066b3b0(int param_1)

{
  uint *puVar1;
  
  (**(code **)(*(int *)(param_1 + -0xb0) + 100))();
  (**(code **)(*(int *)(param_1 + -0xb0) + 0x7c))();
  FUN_006eec20();
  FUN_006e9f80();
  FUN_006e9f60();
  if (*(int **)(param_1 + -0x14) != (int *)0x0) {
    puVar1 = (uint *)(**(int **)(param_1 + -0x14) + 0x10);
    *puVar1 = *puVar1 & 0xfffffeff;
  }
  return;
}

