/* speed.exe 00640d20 FUN_00640d20; analysis pseudocode, not buildable source.
 * calls 00638da0 FUN_00638da0
 */

int __thiscall FUN_00640d20(int param_1,byte param_2)

{
  FUN_00638da0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

