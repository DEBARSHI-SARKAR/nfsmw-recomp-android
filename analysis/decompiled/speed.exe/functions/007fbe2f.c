/* speed.exe 007fbe2f FUN_007fbe2f; analysis pseudocode, not buildable source.
 */

uint FUN_007fbe2f(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x1a0);
  iVar5 = *(int *)(param_1 + 0x914) + *(int *)(param_1 + 0x93c) + *(int *)(param_1 + 0x944);
  iVar3 = *(int *)(param_1 + 0x91c + uVar2 * 4) + iVar5;
  iVar4 = *(int *)(param_1 + 0x918) + *(int *)(param_1 + 0x944);
  if (*(int *)(param_1 + 0x934) == 0) {
    *(int *)(param_1 + 0x934) = iVar4 >> 1;
  }
  if (*(int *)(param_1 + 0x930) == 0) {
    *(int *)(param_1 + 0x930) = iVar4 >> 1;
  }
  if (*(int *)(param_1 + 0x92c) == 0) {
    *(int *)(param_1 + 0x92c) = iVar4 >> 2;
  }
  if (*(int *)(param_1 + 0x93c) == 0) {
    *(int *)(param_1 + 0x93c) = iVar4 >> 3;
  }
  if (*(int *)(param_1 + 0x1a8) == 0) {
    return uVar2;
  }
  uVar1 = (uint)(*(int *)(param_1 + 0x1a8) * 31000) / 100;
  if ((int)uVar1 < iVar3) {
    *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0x914);
    if (uVar1 <= (uint)(*(int *)(param_1 + 0x934) + iVar5)) {
      if ((uint)(*(int *)(param_1 + 0x930) + iVar5) < uVar1) {
        return 5;
      }
      if ((uint)(*(int *)(param_1 + 0x92c) + iVar5) < uVar1) {
        return 4;
      }
      uVar2 = *(int *)(param_1 + 0x93c) + iVar5;
      goto LAB_007fbf92;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1a8);
    if ((iVar3 < (int)((uint)(iVar5 * 30000) / 100)) && ((int)((uint)(iVar5 * 28000) / 100) < iVar3)
       ) {
      return uVar2;
    }
    uVar1 = (uint)(iVar5 * 28000) / 100;
    if (uVar1 <= (uint)(*(int *)(param_1 + 0x934) + iVar4)) {
      if ((uint)(*(int *)(param_1 + 0x930) + iVar4) < uVar1) {
        return 5;
      }
      if ((uint)(*(int *)(param_1 + 0x92c) + iVar4) < uVar1) {
        return 4;
      }
      uVar2 = *(int *)(param_1 + 0x93c) + iVar4;
LAB_007fbf92:
      return -(uint)(uVar2 < uVar1) & 8;
    }
  }
  return 6;
}

