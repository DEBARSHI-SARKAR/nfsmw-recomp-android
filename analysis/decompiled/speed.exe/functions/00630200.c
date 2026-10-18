/* speed.exe 00630200 FUN_00630200; analysis pseudocode, not buildable source.
 * calls 00624620 FUN_00624620
 */

int __thiscall FUN_00630200(int param_1,byte param_2)

{
  FUN_00624620();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

