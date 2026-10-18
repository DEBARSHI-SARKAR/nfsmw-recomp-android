/* speed.exe 00532860 FUN_00532860; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00532880 FUN_00532880
 */

undefined4 __thiscall FUN_00532860(undefined4 param_1,byte param_2)

{
  FUN_00532880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

