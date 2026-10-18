/* speed.exe 006ea600 FUN_006ea600; analysis pseudocode, not buildable source.
 * calls 006ea5a0 FUN_006ea5a0
 */

void __fastcall FUN_006ea600(int param_1)

{
  if (*(int *)(param_1 + 0x2f4) == 5) {
    FUN_006ea5a0();
    *(undefined4 *)(param_1 + 0x2f4) = 1;
  }
  return;
}

