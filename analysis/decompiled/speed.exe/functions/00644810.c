/* speed.exe 00644810 FUN_00644810; analysis pseudocode, not buildable source.
 * calls 00643e60 FUN_00643e60
 */

int __thiscall FUN_00644810(int param_1,byte param_2)

{
  FUN_00643e60();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

