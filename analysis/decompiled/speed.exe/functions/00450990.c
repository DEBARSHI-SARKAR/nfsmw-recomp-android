/* speed.exe 00450990 FUN_00450990; analysis pseudocode, not buildable source.
 * calls 004505e0 FUN_004505e0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00450990(undefined4 param_1,byte param_2)

{
  FUN_004505e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

