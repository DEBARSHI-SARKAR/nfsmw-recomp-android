/* speed.exe 00479790 FUN_00479790; analysis pseudocode, not buildable source.
 * calls 00470a10 FUN_00470a10
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00479790(undefined4 param_1,byte param_2)

{
  FUN_00470a10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

