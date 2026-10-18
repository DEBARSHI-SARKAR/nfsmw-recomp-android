/* speed.exe 005b95c0 FUN_005b95c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005b3cd0 FUN_005b3cd0
 */

undefined4 * __thiscall FUN_005b95c0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008a2c20;
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005b3cd0();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

