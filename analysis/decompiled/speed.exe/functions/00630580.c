/* speed.exe 00630580 FUN_00630580; analysis pseudocode, not buildable source.
 * calls 00624930 FUN_00624930
 */

int __thiscall FUN_00630580(int param_1,byte param_2)

{
  FUN_00624930();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

