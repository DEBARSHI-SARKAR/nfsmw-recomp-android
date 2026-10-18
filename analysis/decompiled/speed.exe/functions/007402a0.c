/* speed.exe 007402a0 FUN_007402a0; analysis pseudocode, not buildable source.
 * calls 00733b00 FUN_00733b00
 */

int __fastcall FUN_007402a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 0;
  FUN_00733b00();
  return param_1;
}

