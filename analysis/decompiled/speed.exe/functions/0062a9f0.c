/* speed.exe 0062a9f0 FUN_0062a9f0; analysis pseudocode, not buildable source.
 * calls 00620930 FUN_00620930
 */

int __thiscall FUN_0062a9f0(int param_1,byte param_2)

{
  FUN_00620930();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

