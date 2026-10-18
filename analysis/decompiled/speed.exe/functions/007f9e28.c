/* speed.exe 007f9e28 FUN_007f9e28; analysis pseudocode, not buildable source.
 * calls 007e94f0 FUN_007e94f0
 */

void __fastcall FUN_007f9e28(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_007e94f0(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 7;
  *(undefined4 *)(param_1 + 0xc) = 7;
  return;
}

