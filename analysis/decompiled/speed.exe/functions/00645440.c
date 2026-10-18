/* speed.exe 00645440 FUN_00645440; analysis pseudocode, not buildable source.
 * calls 00645bc0 FUN_00645bc0
 */

void __thiscall FUN_00645440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = 0;
    do {
      uVar1 = 0;
      if (DAT_009203a4 != 0) {
        do {
          if ((&DAT_0091e148)[uVar1] == *(int *)(param_1 + 0x24) + iVar2) goto LAB_00645477;
          uVar1 = uVar1 + 1;
        } while (uVar1 < DAT_009203a4);
      }
      uVar1 = 0xffffffff;
LAB_00645477:
      FUN_00645bc0(DAT_0092040c,uVar1,param_2,param_3,param_4);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (uVar3 < *(uint *)(param_1 + 0x28));
  }
  return;
}

