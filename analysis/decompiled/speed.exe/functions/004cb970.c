/* speed.exe 004cb970 FUN_004cb970; analysis pseudocode, not buildable source.
 * calls 004caec0 FUN_004caec0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004cb970(undefined4 param_1,byte param_2)

{
  FUN_004caec0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

