/* speed.exe 00565a10 FUN_00565a10; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005659d0 FUN_005659d0
 */

undefined4 __thiscall FUN_00565a10(undefined4 param_1,byte param_2)

{
  FUN_005659d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

