/* speed.exe 0062b680 FUN_0062b680; analysis pseudocode, not buildable source.
 * calls 00621340 FUN_00621340
 */

int __thiscall FUN_0062b680(int param_1,byte param_2)

{
  FUN_00621340();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

