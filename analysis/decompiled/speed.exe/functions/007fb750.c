/* speed.exe 007fb750 FUN_007fb750; analysis pseudocode, not buildable source.
 */

int FUN_007fb750(void)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  puVar5 = &DAT_00909fd0;
  DAT_00909fcc = ((int)DAT_009c0a30 >> 0x18) * DAT_009c0230;
  uVar8 = DAT_009c0a30 << 8;
  iVar6 = DAT_009bfe28 + -8;
  if (iVar6 < 0x10) {
    uVar1 = *DAT_009c1840;
    DAT_009c1840 = DAT_009c1840 + 1;
    uVar8 = uVar8 | (uint)uVar1 << (0x10U - (char)iVar6 & 0x1f);
    iVar6 = DAT_009bfe28 + 8;
  }
  iVar2 = 7;
  do {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5 = puVar5 + 9;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 1;
  do {
    uVar4 = *(uint *)(&DAT_009c0a38 + (uVar8 >> 0x17) * 4);
    bVar3 = (byte)uVar4;
    iVar7 = iVar6;
    if ('\t' < (char)bVar3) {
      if (bVar3 < 0x20) {
        if (bVar3 < 0x10) {
          uVar8 = uVar8 << 9;
          iVar7 = iVar6 + -9;
          if (iVar7 < 0x10) {
            uVar1 = *DAT_009c1840;
            DAT_009c1840 = DAT_009c1840 + 1;
            uVar8 = uVar8 | (uint)uVar1 << (0x10U - (char)iVar7 & 0x1f);
            iVar7 = iVar6 + 7;
          }
          uVar4 = *(uint *)(&DAT_009c0530 + (uVar8 >> 0x18) * 4);
        }
        else {
          uVar8 = uVar8 << 6;
          iVar7 = iVar6 + -6;
          if (iVar7 < 0x10) {
            uVar1 = *DAT_009c1840;
            DAT_009c1840 = DAT_009c1840 + 1;
            uVar8 = uVar8 | (uint)uVar1 << (0x10U - (char)iVar7 & 0x1f);
            iVar7 = iVar6 + 10;
          }
          uVar4 = *(uint *)(&DAT_009c1240 + (uVar8 >> 0x18) * 4);
        }
      }
      else {
        if (0x2f < bVar3) {
          DAT_009c0a30 = uVar8 << 2;
          DAT_009bfe28 = iVar6 + -2;
          if (DAT_009bfe28 < 0x10) {
            uVar1 = *DAT_009c1840;
            DAT_009c1840 = DAT_009c1840 + 1;
            DAT_009c0a30 = DAT_009c0a30 | (uint)uVar1 << (0x10U - (char)DAT_009bfe28 & 0x1f);
            DAT_009bfe28 = iVar6 + 0xe;
          }
          return iVar2;
        }
        uVar8 = uVar8 << 6;
        iVar7 = iVar6 + -6;
        if (iVar7 < 0x10) {
          uVar1 = *DAT_009c1840;
          DAT_009c1840 = DAT_009c1840 + 1;
          uVar8 = uVar8 | (uint)uVar1 << (0x10U - (char)iVar7 & 0x1f);
          iVar7 = iVar6 + 10;
        }
        uVar4 = uVar8 & 0xffff0000 | 0x10;
      }
    }
    iVar6 = iVar7 - (uVar4 & 0xff);
    iVar7 = iVar2 + (uVar4 >> 0x10 & 0x3f);
    uVar8 = uVar8 << ((byte)uVar4 & 0x1f);
    if (iVar6 < 0x10) {
      uVar1 = *DAT_009c1840;
      DAT_009c1840 = DAT_009c1840 + 1;
      uVar8 = uVar8 | (uint)uVar1 << (0x10U - (char)iVar6 & 0x1f);
      iVar6 = iVar6 + 0x10;
    }
    iVar2 = iVar7 + 1;
    *(int *)((int)&DAT_00909fcc + *(int *)(&DAT_0090a1d0 + iVar7 * 4)) =
         ((int)uVar4 >> 0x16) * *(int *)((int)&DAT_009c0230 + *(int *)(&DAT_0090a1d0 + iVar7 * 4));
  } while( true );
}

