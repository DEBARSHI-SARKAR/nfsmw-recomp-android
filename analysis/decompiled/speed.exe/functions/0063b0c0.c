/* speed.exe 0063b0c0 FUN_0063b0c0; analysis pseudocode, not buildable source.
 * calls 00631200 FUN_00631200
 */

int __thiscall FUN_0063b0c0(int param_1,byte param_2)

{
  FUN_00631200();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

