/* speed.exe 0065f830 FUN_0065f830; analysis pseudocode, not buildable source.
 * calls 0065f640 FUN_0065f640
 * calls 0065e760 FUN_0065e760
 */

void FUN_0065f830(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + 0xc))) {
    FUN_0065e760(param_2,param_3,0,0);
  }
  FUN_0065f640(param_1);
  return;
}

