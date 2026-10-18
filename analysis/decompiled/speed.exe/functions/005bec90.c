/* speed.exe 005bec90 FUN_005bec90; analysis pseudocode, not buildable source.
 * calls 005bddd0 FUN_005bddd0
 * calls 005b9d10 FUN_005b9d10
 * calls 005b5840 FUN_005b5840
 */

void __thiscall FUN_005bec90(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  
  uVar3 = *(undefined4 *)(param_3 + 0x10);
  iVar6 = *(int *)(param_3 + 0x20);
  iVar4 = *(int *)(param_2 + 0x2c);
  if (*(char *)(param_1 + 0x14) == '\0') {
    if ((iVar6 != 0) && ((*(uint *)(iVar6 + 4) & 0xff000000) == 0)) {
      cVar2 = *(char *)(iVar6 + 2);
      if (cVar2 == '\0') {
        FUN_005b5840(iVar6,uVar3,iVar4);
      }
      else if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
        FUN_005b9d10(iVar6,uVar3,iVar4);
      }
    }
    if ((*(int *)(*(int *)(param_2 + 0x2c) + 0xc) != 0) && (*(byte *)(param_3 + 0x1c) != 0)) {
      uVar5 = (uint)*(byte *)(param_3 + 0x1c);
      do {
        iVar1 = iVar4 + *(char *)(iVar6 + 7) * 4;
        cVar2 = *(char *)(iVar6 + 2);
        if (cVar2 == '\0') {
          FUN_005b5840(iVar6,uVar3,iVar1);
        }
        else if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
          FUN_005b9d10(iVar6,uVar3,iVar1);
        }
        iVar6 = iVar6 + 0x38;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if ((iVar6 == 0) || ((*(uint *)(iVar6 + 4) & 0xff000000) != 0)) {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & (DAT_008f5798 | 0xff7fffff);
    }
    else if (*(char *)(iVar6 + 3) < '\0') {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & (DAT_008f5798 | 0xff7fffff);
      FUN_005bddd0(iVar6,uVar3,iVar4);
    }
    else {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x800000;
      FUN_005bddd0(iVar6,uVar3,iVar4);
    }
    bVar7 = 0x80;
    if ((*(int *)(*(int *)(param_2 + 0x2c) + 0xc) != 0) && (*(byte *)(param_3 + 0x1c) != 0)) {
      uVar5 = (uint)*(byte *)(param_3 + 0x1c);
      do {
        bVar7 = bVar7 & *(byte *)(iVar6 + 3);
        FUN_005bddd0(iVar6,uVar3,iVar4 + *(char *)(iVar6 + 7) * 4);
        iVar6 = iVar6 + 0x38;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      if (bVar7 == 0) {
        *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x1000000;
        goto LAB_005bee07;
      }
    }
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & (DAT_008f5798 | 0xfeffffff);
  }
LAB_005bee07:
  if ((*(uint *)(param_2 + 0x1c) & 0x1c00000) != 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x2000000;
  }
  return;
}

