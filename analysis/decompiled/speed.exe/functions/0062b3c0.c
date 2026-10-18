/* speed.exe 0062b3c0 FUN_0062b3c0; analysis pseudocode, not buildable source.
 * calls 00621090 FUN_00621090
 */

int __thiscall FUN_0062b3c0(int param_1,byte param_2)

{
  FUN_00621090();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

