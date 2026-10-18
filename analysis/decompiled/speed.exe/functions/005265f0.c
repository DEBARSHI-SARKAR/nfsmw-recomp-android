/* speed.exe 005265f0 FUN_005265f0; analysis pseudocode, not buildable source.
 * calls 007ec268 FUN_007ec268
 * calls 005264e0 FUN_005264e0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 * __thiscall FUN_005265f0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_LAB_0089cce0;
  if (*(char *)(param_1 + 9) != '\0') {
    FUN_005264e0(0);
    FUN_007ec268(param_1 + 5);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

