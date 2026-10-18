/* speed.exe 00640d50 FUN_00640d50; analysis pseudocode, not buildable source.
 * calls 00638f00 FUN_00638f00
 */

int __thiscall FUN_00640d50(int param_1,byte param_2)

{
  FUN_00638f00();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

