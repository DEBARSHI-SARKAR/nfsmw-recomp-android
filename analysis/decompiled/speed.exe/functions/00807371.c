/* speed.exe 00807371 FUN_00807371; analysis pseudocode, not buildable source.
 * calls 00806f24 FUN_00806f24
 */

void FUN_00807371(int param_1,short *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint local_10;
  
  sVar1 = 0;
  sVar2 = 0;
  if (param_3 == 2) {
    if (*(int *)(param_1 + 0x44) < 2) {
      sVar1 = *(short *)(param_1 + 0x3c);
      sVar2 = *(short *)(param_1 + 0x3e);
    }
  }
  else if (*(int *)(param_1 + 0x50) < 2) {
    sVar1 = *(short *)(param_1 + 0x48);
    sVar2 = *(short *)(param_1 + 0x4a);
  }
  local_10 = 0;
  do {
    iVar5 = param_1 + 0x150;
    iVar3 = FUN_00806f24(iVar5,*(undefined1 *)(param_1 + 0x70a + local_10));
    if (iVar3 == 0) {
      iVar3 = local_10 * 7 + param_1;
      iVar4 = FUN_00806f24(iVar5,*(undefined1 *)(iVar3 + 0x70c));
      if (iVar4 == 0) {
        iVar4 = FUN_00806f24(iVar5,*(undefined1 *)(iVar3 + 0x70d));
        if (iVar4 == 0) {
          iVar5 = FUN_00806f24(iVar5,*(undefined1 *)((local_10 + 0x102) * 7 + param_1));
        }
        else {
          iVar5 = FUN_00806f24(iVar5,*(undefined1 *)(iVar3 + 0x70f));
          iVar5 = iVar5 + 2;
        }
      }
      else {
        iVar4 = FUN_00806f24(iVar5,*(undefined1 *)(iVar3 + 0x710));
        if (iVar4 == 0) {
          iVar5 = FUN_00806f24(iVar5,*(undefined1 *)(iVar3 + 0x711));
          iVar5 = iVar5 + 4;
        }
        else {
          iVar5 = FUN_00806f24(iVar5,*(undefined1 *)(iVar3 + 0x712));
          iVar5 = iVar5 + 6;
        }
      }
    }
    else {
      iVar4 = FUN_00806f24(iVar5,*(undefined1 *)(param_1 + 0x720 + local_10 * 8));
      iVar3 = param_1 + local_10 * 8;
      iVar6 = FUN_00806f24(iVar5,*(undefined1 *)(iVar3 + 0x721));
      iVar5 = FUN_00806f24(iVar5,*(undefined1 *)(iVar3 + 0x722));
      iVar7 = FUN_00806f24(param_1 + 0x150,*(undefined1 *)(iVar3 + 0x727));
      iVar8 = FUN_00806f24(param_1 + 0x150,*(undefined1 *)(iVar3 + 0x726));
      iVar9 = FUN_00806f24(param_1 + 0x150,*(undefined1 *)(iVar3 + 0x725));
      iVar10 = FUN_00806f24(param_1 + 0x150,*(undefined1 *)(iVar3 + 0x724));
      uVar11 = iVar4 + iVar6 * 2 + iVar5 * 4 + iVar7 * 0x80 + iVar8 * 0x40 + iVar9 * 0x20 +
               iVar10 * 0x10;
      if ((uVar11 & 0xf0) == 0) {
        iVar5 = uVar11 + 8;
      }
      else {
        iVar5 = FUN_00806f24(param_1 + 0x150,*(undefined1 *)(iVar3 + 0x723));
        iVar5 = uVar11 + iVar5 * 8;
      }
    }
    if ((iVar5 != 0) &&
       (iVar3 = FUN_00806f24(param_1 + 0x150,*(undefined1 *)(local_10 + 0x708 + param_1)),
       iVar3 != 0)) {
      iVar5 = -iVar5;
    }
    if (local_10 == 0) {
      *param_2 = sVar1 + (short)iVar5;
    }
    else {
      param_2[1] = (short)iVar5 + sVar2;
    }
    local_10 = local_10 + 1;
  } while (local_10 < 2);
  return;
}

