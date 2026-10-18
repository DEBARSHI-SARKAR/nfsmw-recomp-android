/* speed.exe 00643d20 FUN_00643d20; analysis pseudocode, not buildable source.
 * calls 00640b70 FUN_00640b70
 */

int __thiscall FUN_00643d20(int param_1,byte param_2)

{
  FUN_00640b70();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

