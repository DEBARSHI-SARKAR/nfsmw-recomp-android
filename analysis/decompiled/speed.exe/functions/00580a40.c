/* speed.exe 00580a40 FUN_00580a40; analysis pseudocode, not buildable source.
 */

void FUN_00580a40(int param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1 < 0) || (1 < param_1)) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(DAT_0091cf90 + 0x10 + param_1 * 4) + 0x414;
  }
  uVar6 = iVar7 + 0x28;
  iVar8 = 2;
  do {
    if (iVar8 + -2 < 200) {
      iVar4 = uVar6 - 0x28;
    }
    else {
      iVar4 = 0;
    }
    if (((*(byte *)(iVar4 + 0x11) < 0x1a) &&
        (iVar3 = (uint)*(byte *)(iVar4 + 0x11) * 0x38, iVar4 = iVar3 + 0x8728 + iVar7,
        *(char *)(iVar3 + 0x8728 + iVar7) != -1)) && (iVar4 != 0)) {
      if (*(char *)(iVar4 + 4) == '\0') {
        cVar5 = *(char *)(iVar4 + 6) + '\x01';
        *(char *)(iVar4 + 6) = cVar5;
        if ('\x02' < cVar5) {
          *(char *)(iVar4 + 3) = *(char *)(iVar4 + 3) + -1;
          *(undefined1 *)(iVar4 + 6) = 0;
        }
        if (*(char *)(iVar4 + 3) < '\0') {
          *(undefined1 *)(iVar4 + 3) = 0;
        }
      }
      else {
        if (*(char *)(iVar4 + 5) != '\0') {
          *(char *)(iVar4 + 5) = *(char *)(iVar4 + 5) + -1;
        }
        if ((*(char *)(iVar4 + 5) == '\0') && (*(char *)(iVar4 + 4) != '\x04')) {
          *(undefined1 *)(iVar4 + 4) = 4;
        }
      }
    }
    if (iVar8 + -1 < 200) {
      iVar4 = uVar6 - 0x14;
    }
    else {
      iVar4 = 0;
    }
    if (((*(byte *)(iVar4 + 0x11) < 0x1a) &&
        (iVar3 = (uint)*(byte *)(iVar4 + 0x11) * 0x38, iVar4 = iVar3 + 0x8728 + iVar7,
        *(char *)(iVar3 + 0x8728 + iVar7) != -1)) && (iVar4 != 0)) {
      if (*(char *)(iVar4 + 4) == '\0') {
        cVar5 = *(char *)(iVar4 + 6) + '\x01';
        *(char *)(iVar4 + 6) = cVar5;
        if ('\x02' < cVar5) {
          *(char *)(iVar4 + 3) = *(char *)(iVar4 + 3) + -1;
          *(undefined1 *)(iVar4 + 6) = 0;
        }
        if (*(char *)(iVar4 + 3) < '\0') {
          *(undefined1 *)(iVar4 + 3) = 0;
        }
      }
      else {
        if (*(char *)(iVar4 + 5) != '\0') {
          *(char *)(iVar4 + 5) = *(char *)(iVar4 + 5) + -1;
        }
        if ((*(char *)(iVar4 + 5) == '\0') && (*(char *)(iVar4 + 4) != '\x04')) {
          *(undefined1 *)(iVar4 + 4) = 4;
        }
      }
    }
    bVar2 = *(byte *)(((199 < iVar8) - 1 & uVar6) + 0x11);
    if (((bVar2 < 0x1a) &&
        (iVar3 = (uint)bVar2 * 0x38, iVar4 = iVar3 + 0x8728 + iVar7,
        *(char *)(iVar3 + 0x8728 + iVar7) != -1)) && (iVar4 != 0)) {
      if (*(char *)(iVar4 + 4) == '\0') {
        cVar5 = *(char *)(iVar4 + 6) + '\x01';
        *(char *)(iVar4 + 6) = cVar5;
        if ('\x02' < cVar5) {
          *(char *)(iVar4 + 3) = *(char *)(iVar4 + 3) + -1;
          *(undefined1 *)(iVar4 + 6) = 0;
        }
        if (*(char *)(iVar4 + 3) < '\0') {
          *(undefined1 *)(iVar4 + 3) = 0;
        }
      }
      else {
        if (*(char *)(iVar4 + 5) != '\0') {
          *(char *)(iVar4 + 5) = *(char *)(iVar4 + 5) + -1;
        }
        if ((*(char *)(iVar4 + 5) == '\0') && (*(char *)(iVar4 + 4) != '\x04')) {
          *(undefined1 *)(iVar4 + 4) = 4;
        }
      }
    }
    if (iVar8 + 1 < 200) {
      iVar4 = uVar6 + 0x14;
    }
    else {
      iVar4 = 0;
    }
    if (((*(byte *)(iVar4 + 0x11) < 0x1a) &&
        (iVar3 = (uint)*(byte *)(iVar4 + 0x11) * 0x38, iVar4 = iVar3 + 0x8728 + iVar7,
        *(char *)(iVar3 + 0x8728 + iVar7) != -1)) && (iVar4 != 0)) {
      if (*(char *)(iVar4 + 4) == '\0') {
        cVar5 = *(char *)(iVar4 + 6) + '\x01';
        *(char *)(iVar4 + 6) = cVar5;
        if ('\x02' < cVar5) {
          *(char *)(iVar4 + 3) = *(char *)(iVar4 + 3) + -1;
          *(undefined1 *)(iVar4 + 6) = 0;
        }
        if (*(char *)(iVar4 + 3) < '\0') {
          *(undefined1 *)(iVar4 + 3) = 0;
        }
      }
      else {
        if (*(char *)(iVar4 + 5) != '\0') {
          *(char *)(iVar4 + 5) = *(char *)(iVar4 + 5) + -1;
        }
        if ((*(char *)(iVar4 + 5) == '\0') && (*(char *)(iVar4 + 4) != '\x04')) {
          *(undefined1 *)(iVar4 + 4) = 4;
        }
      }
    }
    if (iVar8 + 2 < 200) {
      iVar4 = uVar6 + 0x28;
    }
    else {
      iVar4 = 0;
    }
    if (((*(byte *)(iVar4 + 0x11) < 0x1a) &&
        (pcVar1 = (char *)((uint)*(byte *)(iVar4 + 0x11) * 0x38 + 0x8728 + iVar7), *pcVar1 != -1))
       && (pcVar1 != (char *)0x0)) {
      if (pcVar1[4] == '\0') {
        cVar5 = pcVar1[6];
        pcVar1[6] = cVar5 + '\x01';
        if ('\x02' < (char)(cVar5 + '\x01')) {
          pcVar1[3] = pcVar1[3] + -1;
          pcVar1[6] = '\0';
        }
        if (pcVar1[3] < '\0') {
          pcVar1[3] = '\0';
        }
      }
      else {
        if (pcVar1[5] != '\0') {
          pcVar1[5] = pcVar1[5] + -1;
        }
        if ((pcVar1[5] == '\0') && (pcVar1[4] != '\x04')) {
          pcVar1[4] = '\x04';
        }
      }
    }
    iVar4 = iVar8 + 3;
    uVar6 = uVar6 + 100;
    iVar8 = iVar8 + 5;
  } while (iVar4 < 200);
  return;
}

