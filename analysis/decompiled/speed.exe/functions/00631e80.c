/* speed.exe 00631e80 FUN_00631e80; analysis pseudocode, not buildable source.
 * calls 00625660 FUN_00625660
 */

int __thiscall FUN_00631e80(int param_1,byte param_2)

{
  FUN_00625660();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

