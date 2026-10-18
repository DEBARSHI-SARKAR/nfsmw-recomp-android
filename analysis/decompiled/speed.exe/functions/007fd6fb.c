/* speed.exe 007fd6fb FUN_007fd6fb; analysis pseudocode, not buildable source.
 */

void FUN_007fd6fb(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 8;
  param_2 = param_2 - (int)param_1;
  do {
    *(undefined4 *)(param_2 + (int)param_1) = *param_1;
    *(undefined4 *)(param_2 + 4 + (int)param_1) = param_1[1];
    param_1 = (undefined4 *)((int)param_1 + param_3);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

