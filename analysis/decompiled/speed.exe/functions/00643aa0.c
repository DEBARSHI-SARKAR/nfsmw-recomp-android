/* speed.exe 00643aa0 FUN_00643aa0; analysis pseudocode, not buildable source.
 * calls 00640250 FUN_00640250
 */

int __thiscall FUN_00643aa0(int param_1,byte param_2)

{
  FUN_00640250();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

