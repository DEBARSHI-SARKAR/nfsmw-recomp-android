/* speed.exe 00643f80 FUN_00643f80; analysis pseudocode, not buildable source.
 * calls 006424e0 FUN_006424e0
 */

int __thiscall FUN_00643f80(int param_1,byte param_2)

{
  FUN_006424e0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

