/* speed.exe 00641810 FUN_00641810; analysis pseudocode, not buildable source.
 * calls 0063ae80 FUN_0063ae80
 */

int __thiscall FUN_00641810(int param_1,byte param_2)

{
  FUN_0063ae80();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

