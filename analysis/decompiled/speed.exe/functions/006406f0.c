/* speed.exe 006406f0 FUN_006406f0; analysis pseudocode, not buildable source.
 * calls 00638200 FUN_00638200
 */

int __thiscall FUN_006406f0(int param_1,byte param_2)

{
  FUN_00638200();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

