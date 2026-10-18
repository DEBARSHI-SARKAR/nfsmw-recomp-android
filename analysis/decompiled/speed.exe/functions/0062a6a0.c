/* speed.exe 0062a6a0 FUN_0062a6a0; analysis pseudocode, not buildable source.
 * calls 00620290 FUN_00620290
 */

int __thiscall FUN_0062a6a0(int param_1,byte param_2)

{
  FUN_00620290();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

