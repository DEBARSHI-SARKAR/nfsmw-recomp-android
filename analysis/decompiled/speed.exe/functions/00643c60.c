/* speed.exe 00643c60 FUN_00643c60; analysis pseudocode, not buildable source.
 * calls 00640550 FUN_00640550
 */

int __thiscall FUN_00643c60(int param_1,byte param_2)

{
  FUN_00640550();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

