/* speed.exe 005e7ed0 FUN_005e7ed0; analysis pseudocode, not buildable source.
 * calls 005e2490 FUN_005e2490
 */

void FUN_005e7ed0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  while( true ) {
    iVar1 = iVar2 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (*(uint *)(param_1 + iVar1 * 4) < *(uint *)(param_1 + -4 + iVar1 * 4)) {
      iVar1 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    iVar2 = iVar1;
  }
  if (iVar1 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  FUN_005e2490(param_1,iVar2,param_2,param_4);
  return;
}

