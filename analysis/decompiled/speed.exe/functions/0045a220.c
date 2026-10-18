/* speed.exe 0045a220 FUN_0045a220; analysis pseudocode, not buildable source.
 * calls 00454cc0 FUN_00454cc0
 * calls 00459f80 FUN_00459f80
 */

void __thiscall FUN_0045a220(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x1c) < 2) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      FUN_00459f80(iVar2,*(int *)(DAT_0090dcbc + 4) + 0x38);
    }
    else {
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) - 1;
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 8);
    if (param_2 != 0) {
      uVar4 = FUN_00454cc0(param_2);
      if (uVar4 < *(uint *)(iVar2 + 0x20)) {
        uVar4 = *(int *)(iVar2 + 0x1c) + uVar4 * 0xc;
        uVar3 = *(uint *)(uVar4 + 4);
        if (uVar3 != uVar4) {
          *(uint *)(param_1 + 0x10) = (uVar3 == uVar4) - 1 & uVar3;
          goto LAB_0045a2a8;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
LAB_0045a2a8:
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x1c);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

