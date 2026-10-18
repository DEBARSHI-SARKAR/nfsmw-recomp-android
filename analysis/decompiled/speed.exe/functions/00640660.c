/* speed.exe 00640660 FUN_00640660; analysis pseudocode, not buildable source.
 * calls 00637fb0 FUN_00637fb0
 */

int __thiscall FUN_00640660(int param_1,byte param_2)

{
  FUN_00637fb0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

