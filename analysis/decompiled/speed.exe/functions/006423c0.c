/* speed.exe 006423c0 FUN_006423c0; analysis pseudocode, not buildable source.
 * calls 0063b790 FUN_0063b790
 */

int __thiscall FUN_006423c0(int param_1,byte param_2)

{
  FUN_0063b790();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

