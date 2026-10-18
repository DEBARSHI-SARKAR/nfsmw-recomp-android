/* speed.exe 0062ff50 FUN_0062ff50; analysis pseudocode, not buildable source.
 * calls 00624300 FUN_00624300
 */

int __thiscall FUN_0062ff50(int param_1,byte param_2)

{
  FUN_00624300();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

