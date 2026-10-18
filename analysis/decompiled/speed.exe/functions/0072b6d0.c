/* speed.exe 0072b6d0 FUN_0072b6d0; analysis pseudocode, not buildable source.
 * calls 007265e0 FUN_007265e0
 */

void FUN_0072b6d0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  while( true ) {
    iVar1 = iVar2 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (*(int *)(param_1 + iVar1 * 4) < *(int *)(param_1 + -4 + iVar1 * 4)) {
      iVar1 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    iVar2 = iVar1;
  }
  if (iVar1 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  FUN_007265e0(param_1,iVar2,param_2,param_4);
  return;
}

