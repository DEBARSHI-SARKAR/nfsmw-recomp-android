/* speed.exe 0062e6b0 FUN_0062e6b0; analysis pseudocode, not buildable source.
 * calls 006232c0 FUN_006232c0
 */

int __thiscall FUN_0062e6b0(int param_1,byte param_2)

{
  FUN_006232c0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

