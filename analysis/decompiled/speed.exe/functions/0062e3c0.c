/* speed.exe 0062e3c0 FUN_0062e3c0; analysis pseudocode, not buildable source.
 * calls 00622fd0 FUN_00622fd0
 */

int __thiscall FUN_0062e3c0(int param_1,byte param_2)

{
  FUN_00622fd0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

