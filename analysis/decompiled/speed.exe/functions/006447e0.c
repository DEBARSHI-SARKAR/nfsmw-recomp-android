/* speed.exe 006447e0 FUN_006447e0; analysis pseudocode, not buildable source.
 * calls 00643d50 FUN_00643d50
 */

int __thiscall FUN_006447e0(int param_1,byte param_2)

{
  FUN_00643d50();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

