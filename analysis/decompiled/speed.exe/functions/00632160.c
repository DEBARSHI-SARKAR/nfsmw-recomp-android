/* speed.exe 00632160 FUN_00632160; analysis pseudocode, not buildable source.
 * calls 00625880 FUN_00625880
 */

int __thiscall FUN_00632160(int param_1,byte param_2)

{
  FUN_00625880();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

