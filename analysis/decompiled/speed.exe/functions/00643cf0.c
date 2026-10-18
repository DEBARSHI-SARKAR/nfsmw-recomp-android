/* speed.exe 00643cf0 FUN_00643cf0; analysis pseudocode, not buildable source.
 * calls 006409a0 FUN_006409a0
 */

int __thiscall FUN_00643cf0(int param_1,byte param_2)

{
  FUN_006409a0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

