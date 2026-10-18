/* speed.exe 00643b00 FUN_00643b00; analysis pseudocode, not buildable source.
 * calls 00640410 FUN_00640410
 */

int __thiscall FUN_00643b00(int param_1,byte param_2)

{
  FUN_00640410();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

