/* speed.exe 00532050 FUN_00532050; analysis pseudocode, not buildable source.
 * calls 00532070 FUN_00532070
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00532050(undefined4 param_1,byte param_2)

{
  FUN_00532070();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

