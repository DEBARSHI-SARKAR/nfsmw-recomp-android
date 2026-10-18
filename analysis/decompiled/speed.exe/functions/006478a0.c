/* speed.exe 006478a0 FUN_006478a0; analysis pseudocode, not buildable source.
 * calls 00647020 FUN_00647020
 */

int __thiscall FUN_006478a0(int param_1,byte param_2)

{
  FUN_00647020();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

