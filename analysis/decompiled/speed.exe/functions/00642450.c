/* speed.exe 00642450 FUN_00642450; analysis pseudocode, not buildable source.
 * calls 0063baf0 FUN_0063baf0
 */

int __thiscall FUN_00642450(int param_1,byte param_2)

{
  FUN_0063baf0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

