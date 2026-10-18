/* speed.exe 00640de0 FUN_00640de0; analysis pseudocode, not buildable source.
 * calls 0063a600 FUN_0063a600
 */

int __thiscall FUN_00640de0(int param_1,byte param_2)

{
  FUN_0063a600();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

