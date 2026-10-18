/* speed.exe 00643f50 FUN_00643f50; analysis pseudocode, not buildable source.
 * calls 00641ec0 FUN_00641ec0
 */

int __thiscall FUN_00643f50(int param_1,byte param_2)

{
  FUN_00641ec0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

