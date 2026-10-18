/* speed.exe 00640ab0 FUN_00640ab0; analysis pseudocode, not buildable source.
 * calls 00638ad0 FUN_00638ad0
 */

int __thiscall FUN_00640ab0(int param_1,byte param_2)

{
  FUN_00638ad0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

