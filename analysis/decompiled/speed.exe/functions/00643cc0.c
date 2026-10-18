/* speed.exe 00643cc0 FUN_00643cc0; analysis pseudocode, not buildable source.
 * calls 00640870 FUN_00640870
 */

int __thiscall FUN_00643cc0(int param_1,byte param_2)

{
  FUN_00640870();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

