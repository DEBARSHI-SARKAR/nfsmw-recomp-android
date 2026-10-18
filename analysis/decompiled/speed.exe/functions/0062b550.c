/* speed.exe 0062b550 FUN_0062b550; analysis pseudocode, not buildable source.
 * calls 00621290 FUN_00621290
 */

int __thiscall FUN_0062b550(int param_1,byte param_2)

{
  FUN_00621290();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

