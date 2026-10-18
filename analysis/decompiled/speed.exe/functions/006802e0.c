/* speed.exe 006802e0 FUN_006802e0; analysis pseudocode, not buildable source.
 * calls 0067eb10 FUN_0067eb10
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006802e0(undefined4 param_1,byte param_2)

{
  FUN_0067eb10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

