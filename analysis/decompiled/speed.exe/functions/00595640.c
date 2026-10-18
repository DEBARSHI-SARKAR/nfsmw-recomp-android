/* speed.exe 00595640 FUN_00595640; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00595660 FUN_00595660
 */

undefined4 __thiscall FUN_00595640(undefined4 param_1,byte param_2)

{
  FUN_00595660();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

