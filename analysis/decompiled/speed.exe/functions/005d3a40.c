/* speed.exe 005d3a40 FUN_005d3a40; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d1d00 FUN_005d1d00
 */

void FUN_005d3a40(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  while( true ) {
    iVar1 = iVar2 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (0xff8U - *(int *)(*(int *)(param_1 + iVar1 * 4) + 4) <
        0xff8U - *(int *)(*(int *)(param_1 + -4 + iVar1 * 4) + 4)) {
      iVar1 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    iVar2 = iVar1;
  }
  if (iVar1 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  *param_4 = *param_4 + 1;
  FUN_005d1d00(param_1,iVar2,param_2);
  iVar2 = *param_4;
  *param_4 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    thunk_FUN_007c7250();
  }
  return;
}

