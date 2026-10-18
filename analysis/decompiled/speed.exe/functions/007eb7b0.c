/* speed.exe 007eb7b0 FUN_007eb7b0; analysis pseudocode, not buildable source.
 * calls 007eb270 FUN_007eb270
 * calls 007eb5e0 FUN_007eb5e0
 * calls 007eb430 FUN_007eb430
 * calls 007ebab0 FUN_007ebab0
 * calls 007eb6e0 FUN_007eb6e0
 * calls 007eb350 FUN_007eb350
 * calls 007eb500 FUN_007eb500
 * calls 007e8ca0 FUN_007e8ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007eb7b0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 0;
  if (param_1 != 0) {
    do {
      uVar1 = FUN_007e8ca0();
      iVar3 = iVar2;
      switch(uVar1) {
      case 2:
        uVar4 = param_2 + 0x9fU & 0xffffff80;
        iVar3 = uVar4 - 0x20;
        if (iVar2 != 0) {
          if (iVar3 == 0) {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
          else {
            *(int *)(iVar2 + 4) = iVar3 - iVar2;
          }
        }
        FUN_007eb270(iVar3);
        param_2 = uVar4 + *(int *)(uVar4 - 0x14);
        break;
      case 4:
        uVar4 = param_2 + 0x2fU & 0xfffffff0;
        iVar3 = uVar4 - 0x20;
        if (iVar2 != 0) {
          if (iVar3 == 0) {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
          else {
            *(int *)(iVar2 + 4) = iVar3 - iVar2;
          }
        }
        FUN_007eb350(iVar3);
        param_2 = uVar4 + *(int *)(uVar4 - 0x14);
        break;
      case 0x10:
        uVar4 = param_2 + 0x2fU & 0xfffffff0;
        iVar3 = uVar4 - 0x20;
        if (iVar2 != 0) {
          if (iVar3 == 0) {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
          else {
            *(int *)(iVar2 + 4) = iVar3 - iVar2;
          }
        }
        FUN_007eb500(iVar3);
        param_2 = uVar4 + *(int *)(uVar4 - 0x14);
        break;
      case 0x20:
        uVar4 = param_2 + 0x1fU & 0xfffffff0;
        iVar3 = uVar4 - 0x10;
        if (iVar2 != 0) {
          if (iVar3 == 0) {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
          else {
            *(int *)(iVar2 + 4) = iVar3 - iVar2;
          }
        }
        FUN_007eb6e0(iVar3);
        param_2 = uVar4 + *(int *)(uVar4 - 4);
        break;
      case 0x80:
        uVar4 = param_2 + 0x1fU & 0xfffffff0;
        iVar3 = uVar4 - 0x10;
        if (iVar2 != 0) {
          if (iVar3 == 0) {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
          else {
            *(int *)(iVar2 + 4) = iVar3 - iVar2;
          }
        }
        FUN_007eb5e0(iVar3);
        param_2 = uVar4 + *(int *)(uVar4 - 4);
        break;
      case 0x100:
        iVar3 = (param_2 + 0x2fU & 0xfffffff0) - 0x20;
        if (iVar2 != 0) {
          if (iVar3 == 0) {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
          else {
            *(int *)(iVar2 + 4) = iVar3 - iVar2;
          }
        }
        FUN_007eb430(iVar3);
        param_2 = FUN_007ebab0();
        param_2 = iVar3 + param_2;
      }
    } while ((*(int *)(param_1 + 4) != 0) &&
            (param_1 = param_1 + *(int *)(param_1 + 4), iVar2 = iVar3, param_1 != 0));
    *(undefined4 *)(iVar3 + 4) = 0;
    return;
  }
  _DAT_00000004 = 0;
  return;
}

