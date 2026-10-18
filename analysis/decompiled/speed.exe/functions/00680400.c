/* speed.exe 00680400 FUN_00680400; analysis pseudocode, not buildable source.
 * calls 0067f500 FUN_0067f500
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00680400(undefined4 param_1,byte param_2)

{
  FUN_0067f500();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

