/* speed.exe 006471b0 FUN_006471b0; analysis pseudocode, not buildable source.
 * calls 00645bc0 FUN_00645bc0
 * calls 00644350 FUN_00644350
 */

void __thiscall FUN_006471b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0xc + iVar3);
      iVar4 = *(int *)(param_1 + 0x24) + iVar3;
      if (iVar1 != 0) {
        FUN_00644350(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar1 + 0xc));
      }
      uVar2 = 0;
      if (DAT_009203a4 != 0) {
        do {
          if ((&DAT_0091e148)[uVar2] == iVar4) goto LAB_00647201;
          uVar2 = uVar2 + 1;
        } while (uVar2 < DAT_009203a4);
      }
      uVar2 = 0xffffffff;
LAB_00647201:
      FUN_00645bc0(DAT_00920414,uVar2,param_2,param_3,param_4);
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x40;
    } while (uVar5 < *(uint *)(param_1 + 0x28));
  }
  return;
}

