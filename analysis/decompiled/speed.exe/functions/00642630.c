/* speed.exe 00642630 FUN_00642630; analysis pseudocode, not buildable source.
 * calls 0063c150 FUN_0063c150
 */

int __thiscall FUN_00642630(int param_1,byte param_2)

{
  FUN_0063c150();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

