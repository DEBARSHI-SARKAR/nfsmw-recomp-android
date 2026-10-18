/* speed.exe 006423f0 FUN_006423f0; analysis pseudocode, not buildable source.
 * calls 0063b9e0 FUN_0063b9e0
 */

int __thiscall FUN_006423f0(int param_1,byte param_2)

{
  FUN_0063b9e0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

