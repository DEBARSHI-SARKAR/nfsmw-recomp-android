/* speed.exe 007c59c0 FUN_007c59c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007c5a20 FUN_007c5a20
 */

undefined4 __thiscall FUN_007c59c0(undefined4 param_1,uint param_2)

{
  FUN_007c5a20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

