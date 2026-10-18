/* speed.exe 006ef9d0 FUN_006ef9d0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_006ef9d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2 != param_3) {
    iVar3 = param_3 - param_2 >> 3;
    uVar2 = param_2 - *(int *)(param_1 + 4) >> 3;
    uVar7 = 0;
    if (*(int *)(param_1 + 0xc) - iVar3 != uVar2) {
      iVar6 = uVar2 * 8;
      do {
        iVar1 = *(int *)(param_1 + 4);
        puVar5 = (undefined4 *)(iVar6 + iVar1);
        if (puVar5 != (undefined4 *)0x0) {
          iVar4 = iVar3 + uVar7 + uVar2;
          *puVar5 = *(undefined4 *)(iVar1 + iVar4 * 8);
          puVar5[1] = *(undefined4 *)(iVar1 + 4 + iVar4 * 8);
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 8;
      } while (uVar7 < (*(int *)(param_1 + 0xc) - iVar3) - uVar2);
    }
    uVar7 = *(int *)(param_1 + 0xc) - iVar3;
    *(uint *)(param_1 + 0xc) = uVar7;
    if (uVar2 < uVar7) {
      return *(int *)(param_1 + 4) + uVar2 * 8;
    }
    param_2 = *(int *)(param_1 + 4) + uVar7 * 8;
  }
  return param_2;
}

