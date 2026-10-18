/* speed.exe 00510900 FUN_00510900; analysis pseudocode, not buildable source.
 * calls 0056ecc0 FUN_0056ecc0
 * calls 00593f20 FUN_00593f20
 * calls 0056f100 FUN_0056f100
 * calls 0056dbe0 FUN_0056dbe0
 */

byte FUN_00510900(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
    iVar2 = FUN_0056dbe0(0xb);
    uVar3 = *(undefined4 *)(iVar2 + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8);
  }
  iVar2 = *(int *)(DAT_0091cf90 + 0x10);
  iVar4 = FUN_0056ecc0(uVar3);
  iVar5 = FUN_0056f100(*(undefined1 *)(iVar4 + 0x10));
  if (iVar5 != 0) {
    iVar5 = 0;
    do {
      bVar1 = FUN_00593f20(iVar2 + 0x414,iVar4,iVar5);
      bVar6 = bVar6 | bVar1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 7);
  }
  return bVar6;
}

