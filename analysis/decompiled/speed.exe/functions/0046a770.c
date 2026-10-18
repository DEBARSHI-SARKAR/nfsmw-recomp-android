/* speed.exe 0046a770 FUN_0046a770; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 */

void __fastcall FUN_0046a770(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_007869c0(0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x94) = 0;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

