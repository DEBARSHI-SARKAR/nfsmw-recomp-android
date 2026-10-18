/* speed.exe 00643e00 FUN_00643e00; analysis pseudocode, not buildable source.
 * calls 00641a30 FUN_00641a30
 */

int __thiscall FUN_00643e00(int param_1,byte param_2)

{
  FUN_00641a30();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

