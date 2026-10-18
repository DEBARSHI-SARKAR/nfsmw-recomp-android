/* speed.exe 007f3534 FUN_007f3534; analysis pseudocode, not buildable source.
 * calls 007f0fe0 FUN_007f0fe0
 */

void __fastcall FUN_007f3534(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_007f0fe0((undefined4 *)(param_1 + 4),0,0x218);
  FUN_007f0fe0(param_1 + 0x21c,0,0x18);
  return;
}

