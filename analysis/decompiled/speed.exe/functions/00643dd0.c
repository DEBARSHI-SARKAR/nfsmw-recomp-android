/* speed.exe 00643dd0 FUN_00643dd0; analysis pseudocode, not buildable source.
 * calls 00641840 FUN_00641840
 */

int __thiscall FUN_00643dd0(int param_1,byte param_2)

{
  FUN_00641840();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

