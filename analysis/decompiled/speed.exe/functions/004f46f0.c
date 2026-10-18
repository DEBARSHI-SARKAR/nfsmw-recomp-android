/* speed.exe 004f46f0 FUN_004f46f0; analysis pseudocode, not buildable source.
 * calls 004f4540 FUN_004f4540
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004f46f0(undefined4 param_1,byte param_2)

{
  FUN_004f4540();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

