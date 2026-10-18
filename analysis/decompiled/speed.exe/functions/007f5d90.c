/* speed.exe 007f5d90 FUN_007f5d90; analysis pseudocode, not buildable source.
 * calls 007f70b5 FUN_007f70b5
 */

void __thiscall FUN_007f5d90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x88) = param_2;
  FUN_007f70b5(param_2);
  return;
}

