/* speed.exe 0063a5d0 FUN_0063a5d0; analysis pseudocode, not buildable source.
 * calls 0062f220 FUN_0062f220
 */

int __thiscall FUN_0063a5d0(int param_1,byte param_2)

{
  FUN_0062f220();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

