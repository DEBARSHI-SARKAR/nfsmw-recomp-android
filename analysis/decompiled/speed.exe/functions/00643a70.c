/* speed.exe 00643a70 FUN_00643a70; analysis pseudocode, not buildable source.
 * calls 00640120 FUN_00640120
 */

int __thiscall FUN_00643a70(int param_1,byte param_2)

{
  FUN_00640120();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

