/* speed.exe 005d5180 FUN_005d5180; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d3a40 FUN_005d3a40
 */

void FUN_005d5180(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_2 + -4);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(param_2 + -4) = *param_1;
  *piVar1 = *piVar1 + 1;
  FUN_005d3a40(param_1,0,(param_2 + -4) - (int)param_1 >> 2);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    thunk_FUN_007c7250();
  }
  return;
}

