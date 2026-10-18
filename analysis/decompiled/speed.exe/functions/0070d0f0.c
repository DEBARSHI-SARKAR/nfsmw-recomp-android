/* speed.exe 0070d0f0 FUN_0070d0f0; analysis pseudocode, not buildable source.
 * calls 006ff060 FUN_006ff060
 */

void FUN_0070d0f0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar2 = *(uint *)(param_1 + 100) >> 2;
    iVar4 = uVar2 * -4;
    if (*(uint *)(param_1 + 0x60) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + uVar2 * 4) +
                    (*(uint *)(param_1 + 100) + iVar4) * 4);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        DAT_00992284 = DAT_00992280;
        iVar4 = *DAT_00992280;
        iVar3 = 0;
        if (0 < iVar4) {
          do {
            iVar1 = iVar3 + 1;
            iVar3 = iVar3 + 1;
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + DAT_00992284[iVar1];
          } while (iVar3 < iVar4);
        }
      }
      else if (iVar4 == 2) {
        DAT_00992294 = 1;
        FUN_006ff060();
      }
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      uVar2 = *(int *)(param_1 + 100) + 1;
      *(uint *)(param_1 + 100) = uVar2;
      if ((uint)(*(int *)(param_1 + 0x60) << 2) <= uVar2) {
        *(undefined4 *)(param_1 + 100) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x68) + -1;
      *(int *)(param_1 + 0x68) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 100) = 0;
      }
    }
  }
  return;
}

