/* speed.exe 00642390 FUN_00642390; analysis pseudocode, not buildable source.
 * calls 0063b320 FUN_0063b320
 */

int __thiscall FUN_00642390(int param_1,byte param_2)

{
  FUN_0063b320();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

