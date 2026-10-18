/* speed.exe 0062d4f0 FUN_0062d4f0; analysis pseudocode, not buildable source.
 * calls 00622600 FUN_00622600
 */

int __thiscall FUN_0062d4f0(int param_1,byte param_2)

{
  FUN_00622600();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

