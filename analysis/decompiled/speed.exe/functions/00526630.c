/* speed.exe 00526630 FUN_00526630; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

int __thiscall FUN_00526630(int param_1,byte param_2)

{
  DAT_0091cb20 = 0;
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x34));
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

