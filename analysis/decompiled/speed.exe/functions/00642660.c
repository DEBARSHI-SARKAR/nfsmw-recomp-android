/* speed.exe 00642660 FUN_00642660; analysis pseudocode, not buildable source.
 * calls 0063c210 FUN_0063c210
 */

int __thiscall FUN_00642660(int param_1,byte param_2)

{
  FUN_0063c210();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

