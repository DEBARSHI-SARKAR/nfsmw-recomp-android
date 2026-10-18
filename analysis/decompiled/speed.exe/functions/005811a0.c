/* speed.exe 005811a0 FUN_005811a0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_005811a0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar2 = 0;
  pbVar5 = (byte *)(param_1 + 0x39);
  iVar4 = 0x28;
  do {
    if (*(int *)(pbVar5 + -0x39) != -1) {
      bVar1 = pbVar5[-0x28];
      if (bVar1 != 0xff) {
        if ((0x19 < bVar1) ||
           (iVar3 = (uint)bVar1 * 0x38 + 0x8728 + param_1,
           *(char *)((uint)bVar1 * 0x38 + 0x8728 + param_1) == -1)) {
          iVar3 = 0;
        }
        if (*(char *)(iVar3 + 4) == '\0') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    if (*(int *)(pbVar5 + -0x25) != -1) {
      bVar1 = pbVar5[-0x14];
      if (bVar1 != 0xff) {
        if ((0x19 < bVar1) ||
           (iVar3 = (uint)bVar1 * 0x38 + 0x8728 + param_1,
           *(char *)((uint)bVar1 * 0x38 + 0x8728 + param_1) == -1)) {
          iVar3 = 0;
        }
        if (*(char *)(iVar3 + 4) == '\0') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    if (*(int *)(pbVar5 + -0x11) != -1) {
      bVar1 = *pbVar5;
      if (bVar1 != 0xff) {
        if ((0x19 < bVar1) ||
           (iVar3 = (uint)bVar1 * 0x38 + 0x8728 + param_1,
           *(char *)((uint)bVar1 * 0x38 + 0x8728 + param_1) == -1)) {
          iVar3 = 0;
        }
        if (*(char *)(iVar3 + 4) == '\0') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    if (*(int *)(pbVar5 + 3) != -1) {
      bVar1 = pbVar5[0x14];
      if (bVar1 != 0xff) {
        if ((0x19 < bVar1) ||
           (iVar3 = (uint)bVar1 * 0x38 + 0x8728 + param_1,
           *(char *)((uint)bVar1 * 0x38 + 0x8728 + param_1) == -1)) {
          iVar3 = 0;
        }
        if (*(char *)(iVar3 + 4) == '\0') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    if (*(int *)(pbVar5 + 0x17) != -1) {
      bVar1 = pbVar5[0x28];
      if (bVar1 != 0xff) {
        if ((0x19 < bVar1) ||
           (iVar3 = (uint)bVar1 * 0x38 + 0x8728 + param_1,
           *(char *)((uint)bVar1 * 0x38 + 0x8728 + param_1) == -1)) {
          iVar3 = 0;
        }
        if (*(char *)(iVar3 + 4) == '\0') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    pbVar5 = pbVar5 + 100;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return iVar2;
}

