/* speed.exe 006424b0 FUN_006424b0; analysis pseudocode, not buildable source.
 * calls 0063be40 FUN_0063be40
 */

int __thiscall FUN_006424b0(int param_1,byte param_2)

{
  FUN_0063be40();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

