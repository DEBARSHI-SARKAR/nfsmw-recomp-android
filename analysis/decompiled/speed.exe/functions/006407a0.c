/* speed.exe 006407a0 FUN_006407a0; analysis pseudocode, not buildable source.
 * calls 00638320 FUN_00638320
 */

int __thiscall FUN_006407a0(int param_1,byte param_2)

{
  FUN_00638320();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

