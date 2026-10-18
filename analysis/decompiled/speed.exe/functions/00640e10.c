/* speed.exe 00640e10 FUN_00640e10; analysis pseudocode, not buildable source.
 * calls 0063a720 FUN_0063a720
 */

int __thiscall FUN_00640e10(int param_1,byte param_2)

{
  FUN_0063a720();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

