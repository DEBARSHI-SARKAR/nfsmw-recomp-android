/* speed.exe 00637cd0 FUN_00637cd0; analysis pseudocode, not buildable source.
 * calls 0062ac30 FUN_0062ac30
 */

int __thiscall FUN_00637cd0(int param_1,byte param_2)

{
  FUN_0062ac30();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

