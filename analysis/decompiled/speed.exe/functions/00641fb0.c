/* speed.exe 00641fb0 FUN_00641fb0; analysis pseudocode, not buildable source.
 * calls 0063b000 FUN_0063b000
 */

int __thiscall FUN_00641fb0(int param_1,byte param_2)

{
  FUN_0063b000();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

