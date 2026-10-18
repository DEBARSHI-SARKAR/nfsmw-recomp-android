/* speed.exe 004daca0 FUN_004daca0; analysis pseudocode, not buildable source.
 * calls 004b0e30 FUN_004b0e30
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004daca0(undefined4 param_1,byte param_2)

{
  FUN_004b0e30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

