/* speed.exe 0063ad00 FUN_0063ad00; analysis pseudocode, not buildable source.
 * calls 0062fa50 FUN_0062fa50
 */

int __thiscall FUN_0063ad00(int param_1,byte param_2)

{
  FUN_0062fa50();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

