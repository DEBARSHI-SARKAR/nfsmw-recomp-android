/* speed.exe 00709870 FUN_00709870; analysis pseudocode, not buildable source.
 */

void FUN_00709870(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_2;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (param_3 <= iVar3) break;
    if (*(uint *)(param_1 + iVar3 * 4) < *(uint *)(param_1 + -4 + iVar3 * 4)) {
      iVar3 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar1 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar1 = param_3 + -1;
  }
  while (param_2 < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    uVar2 = *(uint *)(param_1 + iVar3 * 4);
    if (param_4 <= uVar2) break;
    *(uint *)(param_1 + iVar1 * 4) = uVar2;
    iVar1 = iVar3;
  }
  *(uint *)(param_1 + iVar1 * 4) = param_4;
  return;
}

