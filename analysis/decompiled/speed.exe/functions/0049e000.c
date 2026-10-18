/* speed.exe 0049e000 FUN_0049e000; analysis pseudocode, not buildable source.
 * calls 0049def0 FUN_0049def0
 */

undefined4 __thiscall FUN_0049e000(int param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0xc);
  bVar3 = *(byte *)(iVar1 + 8) & 1;
  uVar4 = (uint)*(byte *)(iVar1 + 8);
  iVar5 = iVar1 + 10 + uVar4 * 2;
  if (bVar3 == 0) {
    iVar5 = iVar1 + 0xc + uVar4 * 2;
  }
  uVar7 = (uint)*(byte *)(iVar1 + 9);
  iVar8 = *(int *)(param_1 + 0x10);
  if (param_2 < *(float *)(iVar8 * uVar7 + iVar5)) {
    iVar8 = iVar8 + -1;
    if (-1 < iVar8) {
      iVar5 = uVar7 * iVar8;
      do {
        iVar2 = iVar1 + 10 + uVar4 * 2;
        if (bVar3 == 0) {
          iVar2 = iVar1 + 0xc + uVar4 * 2;
        }
        if ((float)(iVar5 + iVar2) <= param_2) {
          FUN_0049def0(iVar5 + iVar2 + 4,param_3);
          *(int *)(param_1 + 0x10) = iVar8;
          return 1;
        }
        iVar8 = iVar8 + -1;
        iVar5 = iVar5 - uVar7;
      } while (-1 < iVar8);
    }
    if (bVar3 == 0) {
      iVar5 = iVar1 + 0xc + uVar4 * 2;
    }
    else {
      iVar5 = iVar1 + 10 + uVar4 * 2;
    }
    FUN_0049def0(iVar5 + 4,param_3);
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 1;
  }
  if (iVar8 < (int)(uint)*(ushort *)(iVar1 + 6)) {
    uVar6 = (uint)*(byte *)(iVar1 + 9);
    iVar5 = uVar6 * iVar8;
    do {
      iVar2 = iVar1 + 10 + uVar4 * 2;
      if (bVar3 == 0) {
        iVar2 = iVar1 + 0xc + uVar4 * 2;
      }
      if (param_2 < *(float *)(uVar6 + iVar5 + iVar2)) {
        FUN_0049def0(iVar5 + iVar2 + 4,param_3);
        *(int *)(param_1 + 0x10) = iVar8;
        return 1;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + uVar6;
    } while (iVar8 < (int)(uint)*(ushort *)(iVar1 + 6));
  }
  if (bVar3 == 0) {
    iVar5 = iVar1 + 0xc + uVar4 * 2;
  }
  else {
    iVar5 = iVar1 + 10 + uVar4 * 2;
  }
  FUN_0049def0((*(ushort *)(iVar1 + 6) - 1) * uVar7 + 4 + iVar5,param_3);
  *(uint *)(param_1 + 0x10) = *(ushort *)(iVar1 + 6) - 1;
  return 1;
}

