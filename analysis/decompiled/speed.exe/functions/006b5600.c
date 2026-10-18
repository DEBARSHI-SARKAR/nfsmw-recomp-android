/* speed.exe 006b5600 FUN_006b5600; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006b5570 FUN_006b5570
 */

undefined4 __thiscall FUN_006b5600(undefined4 param_1,byte param_2)

{
  FUN_006b5570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

