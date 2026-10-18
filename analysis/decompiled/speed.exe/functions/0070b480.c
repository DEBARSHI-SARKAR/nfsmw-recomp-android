/* speed.exe 0070b480 FUN_0070b480; analysis pseudocode, not buildable source.
 * calls 0070af00 FUN_0070af00
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0070b480(undefined4 param_1,byte param_2)

{
  FUN_0070af00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

