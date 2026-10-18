/* speed.exe 00641e90 FUN_00641e90; analysis pseudocode, not buildable source.
 * calls 0063af20 FUN_0063af20
 */

int __thiscall FUN_00641e90(int param_1,byte param_2)

{
  FUN_0063af20();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

