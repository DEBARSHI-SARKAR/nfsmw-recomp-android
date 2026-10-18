/* speed.exe 006400f0 FUN_006400f0; analysis pseudocode, not buildable source.
 * calls 00637930 FUN_00637930
 */

int __thiscall FUN_006400f0(int param_1,byte param_2)

{
  FUN_00637930();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

