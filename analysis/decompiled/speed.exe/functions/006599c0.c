/* speed.exe 006599c0 FUN_006599c0; analysis pseudocode, not buildable source.
 * calls 007c7250 FUN_007c7250
 */

void __fastcall FUN_006599c0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_007c7250(*(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_007c7250(*(int *)(param_1 + 0x2c));
  }
  return;
}

