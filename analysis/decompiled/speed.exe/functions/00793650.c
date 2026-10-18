/* speed.exe 00793650 FUN_00793650; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00790750 FUN_00790750
 */

undefined4 __thiscall FUN_00793650(undefined4 param_1,byte param_2)

{
  FUN_00790750();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

