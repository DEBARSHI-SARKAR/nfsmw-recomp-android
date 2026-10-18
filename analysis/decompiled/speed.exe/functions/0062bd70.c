/* speed.exe 0062bd70 FUN_0062bd70; analysis pseudocode, not buildable source.
 * calls 00621720 FUN_00621720
 */

int __thiscall FUN_0062bd70(int param_1,byte param_2)

{
  FUN_00621720();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

