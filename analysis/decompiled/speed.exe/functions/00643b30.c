/* speed.exe 00643b30 FUN_00643b30; analysis pseudocode, not buildable source.
 * calls 006404c0 FUN_006404c0
 */

int __thiscall FUN_00643b30(int param_1,byte param_2)

{
  FUN_006404c0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

