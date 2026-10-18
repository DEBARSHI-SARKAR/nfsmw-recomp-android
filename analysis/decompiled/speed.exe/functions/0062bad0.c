/* speed.exe 0062bad0 FUN_0062bad0; analysis pseudocode, not buildable source.
 * calls 00621490 FUN_00621490
 */

int __thiscall FUN_0062bad0(int param_1,byte param_2)

{
  FUN_00621490();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

