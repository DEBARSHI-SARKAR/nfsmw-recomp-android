/* speed.exe 0067b4f0 FUN_0067b4f0; analysis pseudocode, not buildable source.
 * calls 006eea10 FUN_006eea10
 * calls 00676540 FUN_00676540
 */

void __fastcall FUN_0067b4f0(int param_1)

{
  *(undefined1 *)(param_1 + 0x1c) = 1;
  FUN_00676540(param_1 + -0x2c);
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_006eea10(*(int *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}

