/* speed.exe 00580990 FUN_00580990; analysis pseudocode, not buildable source.
 * calls 005f5120 FUN_005f5120
 */

void FUN_00580990(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_1 < 0) || (1 < param_1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(DAT_0091cf90 + 0x10 + param_1 * 4) + 0x414;
  }
  iVar5 = 0;
  uVar6 = uVar4;
  do {
    bVar2 = *(byte *)(((199 < iVar5) - 1 & uVar6) + 0x11);
    if ((((bVar2 < 0x1a) &&
         (iVar3 = (uint)bVar2 * 0x38, iVar1 = iVar3 + 0x8728 + uVar4,
         *(char *)(iVar3 + 0x8728 + uVar4) != -1)) && (iVar1 != 0)) &&
       (*(char *)(iVar1 + 4) != '\0')) {
      if (*(char *)(iVar1 + 5) != '\0') {
        *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + -1;
      }
      if ((*(char *)(iVar1 + 5) == '\0') && (*(char *)(iVar1 + 4) != '\x04')) {
        *(undefined1 *)(iVar1 + 4) = 4;
        FUN_005f5120(0x78);
      }
    }
    iVar5 = iVar5 + 1;
    uVar6 = uVar6 + 0x14;
  } while (iVar5 < 200);
  return;
}

