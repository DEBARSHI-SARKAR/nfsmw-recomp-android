/* speed.exe 007f642b FUN_007f642b; analysis pseudocode, not buildable source.
 * calls 007f6337 FUN_007f6337
 */

void __fastcall FUN_007f642b(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((int)param_1 + 0x111) = 0;
  FUN_007f6337();
  return;
}

