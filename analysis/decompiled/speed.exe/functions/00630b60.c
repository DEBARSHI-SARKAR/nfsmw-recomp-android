/* speed.exe 00630b60 FUN_00630b60; analysis pseudocode, not buildable source.
 * calls 00624d30 FUN_00624d30
 */

int __thiscall FUN_00630b60(int param_1,byte param_2)

{
  FUN_00624d30();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

