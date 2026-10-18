/* speed.exe 006406c0 FUN_006406c0; analysis pseudocode, not buildable source.
 * calls 00638160 FUN_00638160
 */

int __thiscall FUN_006406c0(int param_1,byte param_2)

{
  FUN_00638160();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

