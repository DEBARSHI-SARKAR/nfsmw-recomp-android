/* speed.exe 00630430 FUN_00630430; analysis pseudocode, not buildable source.
 * calls 00624830 FUN_00624830
 */

int __thiscall FUN_00630430(int param_1,byte param_2)

{
  FUN_00624830();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

