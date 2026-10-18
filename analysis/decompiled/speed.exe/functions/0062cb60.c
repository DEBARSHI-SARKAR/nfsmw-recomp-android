/* speed.exe 0062cb60 FUN_0062cb60; analysis pseudocode, not buildable source.
 * calls 00622070 FUN_00622070
 */

int __thiscall FUN_0062cb60(int param_1,byte param_2)

{
  FUN_00622070();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

