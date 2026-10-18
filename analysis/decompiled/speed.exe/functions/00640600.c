/* speed.exe 00640600 FUN_00640600; analysis pseudocode, not buildable source.
 * calls 00637e70 FUN_00637e70
 */

int __thiscall FUN_00640600(int param_1,byte param_2)

{
  FUN_00637e70();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

