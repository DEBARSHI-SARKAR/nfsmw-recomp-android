/* speed.exe 004aefa0 FUN_004aefa0; analysis pseudocode, not buildable source.
 * calls 004e1e50 FUN_004e1e50
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004aefa0(undefined4 param_1,byte param_2)

{
  FUN_004e1e50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

