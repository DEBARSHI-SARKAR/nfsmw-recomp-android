/* speed.exe 007e9e40 FUN_007e9e40; analysis pseudocode, not buildable source.
 * calls 007e9d50 FUN_007e9d50
 * calls 007e9bf0 FUN_007e9bf0
 */

uint FUN_007e9e40(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    uVar3 = FUN_007e9bf0(param_1);
  }
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 4) != 0) {
    if ((uVar3 != 0) && (*(int *)(param_1 + 0x60) == 0)) {
      uVar3 = uVar3 + 0xf & 0xfffffff0;
    }
    iVar2 = FUN_007e9d50(param_1);
    uVar3 = uVar3 + iVar2;
  }
  if ((uVar1 & 0x100) != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar3 + 0xf & 0xfffffff0;
    }
    uVar3 = uVar4 + 0x20;
  }
  if ((uVar1 & 0x10) != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar3 + 0xf & 0xfffffff0;
    }
    uVar3 = uVar4 + 0x20 + *(int *)(param_1 + 0x80) * *(int *)(param_1 + 0x7c) * 4;
  }
  if ((char)uVar1 < '\0') {
    iVar2 = 0;
    if (uVar3 != 0) {
      iVar2 = (uVar3 - 1 & 0xfffffff0) + 0x10;
    }
    uVar3 = iVar2 + 0x10 + *(int *)(param_1 + 0x84);
  }
  if ((uVar1 & 0x20) != 0) {
    iVar2 = 0;
    if (uVar3 != 0) {
      iVar2 = (uVar3 - 1 & 0xfffffff0) + 0x10;
    }
    return iVar2 + 0x11 + *(int *)(param_1 + 0x90);
  }
  return uVar3;
}

