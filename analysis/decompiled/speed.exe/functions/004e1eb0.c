/* speed.exe 004e1eb0 FUN_004e1eb0; analysis pseudocode, not buildable source.
 */

void FUN_004e1eb0(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(DAT_00911fa8 + 0x84) + 0x28);
  uVar4 = DAT_0091429c >> 0x10 & 0xf;
  uVar2 = DAT_0091429c >> 8 & 0xf;
  if ((((*(int *)(iVar5 + 4 + uVar4 * 4) != 0) &&
       (iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + uVar4 * 4), iVar5 != 0)) &&
      (*(int *)(iVar5 + 0x44) != 0)) &&
     ((int)(uVar2 + 1) <= *(int *)(*(int *)(iVar5 + 0x5c) + 0x58))) {
    puVar1 = *(uint **)(*(int *)(*(int *)(*(int *)(iVar5 + 0x5c) + 0x10) + uVar2 * 8) + 0xc);
    uVar2 = *puVar1 & 0xf;
    iVar5 = 0;
    if (uVar2 != 0) {
      while (puVar3 = puVar1 + 1,
            (*(byte *)((int)puVar1 + 6) & 0xf) != ((int)DAT_009142a0 >> 0x10 & 0xfU)) {
        iVar5 = iVar5 + 1;
        puVar1 = puVar3;
        if ((int)uVar2 <= iVar5) {
          return;
        }
      }
      *puVar3 = *puVar3 & 0xffff0000 | DAT_009142a0 & 0xffff;
    }
  }
  return;
}

