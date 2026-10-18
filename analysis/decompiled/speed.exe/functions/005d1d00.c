/* speed.exe 005d1d00 FUN_005d1d00; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void FUN_005d1d00(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  while ((param_3 < param_2 &&
         (iVar1 = (param_2 + -1) / 2,
         0xff8U - *(int *)(*(int *)(param_1 + iVar1 * 4) + 4) < 0xff8U - param_4[1]))) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    param_2 = iVar1;
  }
  *(int **)(param_1 + param_2 * 4) = param_4;
  *param_4 = *param_4 + -1;
  if (*param_4 == 0) {
    thunk_FUN_007c7250(param_4);
  }
  return;
}

