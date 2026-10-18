/* speed.exe 00638510 FUN_00638510; analysis pseudocode, not buildable source.
 * calls 0062c810 FUN_0062c810
 */

int __thiscall FUN_00638510(int param_1,byte param_2)

{
  FUN_0062c810();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

