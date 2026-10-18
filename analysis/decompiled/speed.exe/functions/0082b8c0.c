/* speed.exe 0082b8c0 FUN_0082b8c0; analysis pseudocode, not buildable source.
 * calls 008294a0 FUN_008294a0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0082d020 FUN_0082d020
 */

undefined4 * __thiscall FUN_0082b8c0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008c5e08;
  FUN_008294a0(param_1[0x3f]);
  FUN_0082d020();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

