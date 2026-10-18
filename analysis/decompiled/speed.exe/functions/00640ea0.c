/* speed.exe 00640ea0 FUN_00640ea0; analysis pseudocode, not buildable source.
 * calls 0063a940 FUN_0063a940
 */

int __thiscall FUN_00640ea0(int param_1,byte param_2)

{
  FUN_0063a940();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

