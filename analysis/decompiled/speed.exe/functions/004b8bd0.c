/* speed.exe 004b8bd0 FUN_004b8bd0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004ae7e0 FUN_004ae7e0
 */

undefined4 __thiscall FUN_004b8bd0(undefined4 param_1,byte param_2)

{
  FUN_004ae7e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

