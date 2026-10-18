/* speed.exe 00648560 FUN_00648560; analysis pseudocode, not buildable source.
 * calls 00647fa0 FUN_00647fa0
 */

int __thiscall FUN_00648560(int param_1,byte param_2)

{
  FUN_00647fa0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

