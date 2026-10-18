/* speed.exe 0066b630 FUN_0066b630; analysis pseudocode, not buildable source.
 * calls 006eec20 FUN_006eec20
 * calls 006e9f80 FUN_006e9f80
 */

void __fastcall FUN_0066b630(int *param_1)

{
  uint *puVar1;
  
  FUN_006eec20();
  FUN_006e9f80();
  (**(code **)(*param_1 + 0x7c))();
  if ((int *)param_1[0x27] != (int *)0x0) {
    puVar1 = (uint *)(*(int *)param_1[0x27] + 0x10);
    *puVar1 = *puVar1 & 0xfffffeff;
  }
  return;
}

