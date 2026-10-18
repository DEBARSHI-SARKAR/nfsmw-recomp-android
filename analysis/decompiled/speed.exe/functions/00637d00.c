/* speed.exe 00637d00 FUN_00637d00; analysis pseudocode, not buildable source.
 * calls 0062b180 FUN_0062b180
 */

int __thiscall FUN_00637d00(int param_1,byte param_2)

{
  FUN_0062b180();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

