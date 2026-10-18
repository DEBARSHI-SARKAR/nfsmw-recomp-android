/* speed.exe 0063afd0 FUN_0063afd0; analysis pseudocode, not buildable source.
 * calls 006308e0 FUN_006308e0
 */

int __thiscall FUN_0063afd0(int param_1,byte param_2)

{
  FUN_006308e0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

