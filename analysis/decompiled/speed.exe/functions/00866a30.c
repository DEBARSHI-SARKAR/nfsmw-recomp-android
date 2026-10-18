/* speed.exe 00866a30 FUN_00866a30; analysis pseudocode, not buildable source.
 */

void FUN_00866a30(undefined4 param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_4) {
    do {
      puVar1 = param_3 + 1;
      uVar2 = *param_3;
      param_3 = param_3 + 2;
      *(uint *)(param_2 + iVar3 * 4) = *(int *)(param_2 + iVar3 * 4) + (uint)CONCAT11(uVar2,*puVar1)
      ;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  return;
}

