/* speed.exe 007726a0 FUN_007726a0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_007726a0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != param_3) {
    iVar5 = param_3 - param_2 >> 2;
    uVar2 = param_2 - *(int *)(param_1 + 4) >> 2;
    uVar1 = 0;
    if (*(int *)(param_1 + 0xc) - iVar5 != uVar2) {
      iVar4 = uVar2 * 4;
      do {
        puVar3 = (undefined4 *)(iVar4 + *(int *)(param_1 + 4));
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + (uVar1 + iVar5 + uVar2) * 4);
        }
        uVar1 = uVar1 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar1 < (*(int *)(param_1 + 0xc) - iVar5) - uVar2);
    }
    uVar1 = *(int *)(param_1 + 0xc) - iVar5;
    *(uint *)(param_1 + 0xc) = uVar1;
    if (uVar2 < uVar1) {
      return *(int *)(param_1 + 4) + uVar2 * 4;
    }
    param_2 = *(int *)(param_1 + 4) + uVar1 * 4;
  }
  return param_2;
}

