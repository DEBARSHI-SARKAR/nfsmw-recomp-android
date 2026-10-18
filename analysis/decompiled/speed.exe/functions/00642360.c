/* speed.exe 00642360 FUN_00642360; analysis pseudocode, not buildable source.
 * calls 0063b120 FUN_0063b120
 */

int __thiscall FUN_00642360(int param_1,byte param_2)

{
  FUN_0063b120();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

