/* speed.exe 00590260 FUN_00590260; analysis pseudocode, not buildable source.
 * calls 00581f70 FUN_00581f70
 */

void FUN_00590260(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 < 0) || (1 < param_1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(DAT_0091cf90 + 0x10 + param_1 * 4) + 0x414;
  }
  iVar4 = 0;
  uVar5 = uVar3;
  do {
    bVar1 = *(byte *)(((199 < iVar4) - 1 & uVar5) + 0x11);
    if (((bVar1 < 0x1a) && (iVar2 = (uint)bVar1 * 0x38, *(char *)(iVar2 + 0x8728 + uVar3) != -1)) &&
       (iVar2 + 0x8728 + uVar3 != 0)) {
      FUN_00581f70();
    }
    iVar4 = iVar4 + 1;
    uVar5 = uVar5 + 0x14;
  } while (iVar4 < 200);
  return;
}

