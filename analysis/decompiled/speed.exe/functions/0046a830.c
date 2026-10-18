/* speed.exe 0046a830 FUN_0046a830; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 */

void __fastcall FUN_0046a830(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_007869c0(0);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x94) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

