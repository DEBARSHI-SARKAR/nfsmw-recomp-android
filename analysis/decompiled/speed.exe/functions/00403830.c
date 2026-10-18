/* speed.exe 00403830 FUN_00403830; analysis pseudocode, not buildable source.
 * calls 004037f0 FUN_004037f0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00403830(undefined4 param_1,byte param_2)

{
  FUN_004037f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

