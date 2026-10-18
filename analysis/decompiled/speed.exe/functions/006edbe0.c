/* speed.exe 006edbe0 FUN_006edbe0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006edb70 FUN_006edb70
 */

undefined4 __thiscall FUN_006edbe0(undefined4 param_1,byte param_2)

{
  FUN_006edb70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

