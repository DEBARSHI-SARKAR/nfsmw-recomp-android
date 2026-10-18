/* speed.exe 007643d0 FUN_007643d0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00652b00 thunk_FUN_007c7250
 */

int __thiscall FUN_007643d0(int param_1,byte param_2)

{
  FUN_004655f0(*(undefined4 *)(param_1 + 0x20));
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

