/* speed.exe 0063b090 FUN_0063b090; analysis pseudocode, not buildable source.
 * calls 00631100 FUN_00631100
 */

int __thiscall FUN_0063b090(int param_1,byte param_2)

{
  FUN_00631100();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

