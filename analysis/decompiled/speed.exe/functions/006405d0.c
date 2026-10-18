/* speed.exe 006405d0 FUN_006405d0; analysis pseudocode, not buildable source.
 * calls 00637d30 FUN_00637d30
 */

int __thiscall FUN_006405d0(int param_1,byte param_2)

{
  FUN_00637d30();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

