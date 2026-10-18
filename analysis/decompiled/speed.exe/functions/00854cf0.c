/* speed.exe 00854cf0 FUN_00854cf0; analysis pseudocode, not buildable source.
 * calls 00854510 FUN_00854510
 * calls 007c9470 _strncmp
 * calls 007c64e0 _strncpy
 * calls 00854920 FUN_00854920
 */

undefined4 FUN_00854cf0(void)

{
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int unaff_ESI;
  byte *pbVar8;
  
  pcVar3 = *(char **)(unaff_ESI + 0x628);
  pcVar1 = pcVar3 + *(int *)(unaff_ESI + 0x634) + -3;
  pcVar4 = pcVar3;
  if (pcVar3 != pcVar1) {
    while ((((*pcVar4 != '\r' || (pcVar4[1] != '\n')) || (pcVar4[2] != '\r')) || (pcVar4[3] != '\n')
           )) {
      pcVar4 = pcVar4 + 1;
      if (pcVar4 == pcVar1) {
        return 0xffffffff;
      }
    }
    if (pcVar4 != pcVar1) {
      *(char **)(unaff_ESI + 0x620) = pcVar4 + (4 - (int)pcVar3);
      pcVar4[3] = '\0';
      pcVar4[2] = '\0';
      iVar5 = _strncmp(*(char **)(unaff_ESI + 0x628),"HTTP",4);
      if (iVar5 != 0) {
        *(undefined4 *)(unaff_ESI + 0x60c) = 7;
        return 0xfffffffe;
      }
      pbVar6 = (byte *)(unaff_ESI + 4);
      pbVar8 = pbVar6;
      for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
        pbVar8[0] = 0;
        pbVar8[1] = 0;
        pbVar8[2] = 0;
        pbVar8[3] = 0;
        pbVar8 = pbVar8 + 4;
      }
      _strncpy((char *)pbVar6,*(char **)(unaff_ESI + 0x628),0x3ff);
      *(int *)(unaff_ESI + 0x630) = *(int *)(unaff_ESI + 0x620);
      *(int *)(unaff_ESI + 0x638) = *(int *)(unaff_ESI + 0x634) - *(int *)(unaff_ESI + 0x620);
      bVar2 = *pbVar6;
      while( true ) {
        if (bVar2 == 0) goto LAB_00854de2;
        if ((char)bVar2 < '!') break;
        bVar2 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
      }
      bVar2 = *pbVar6;
      while ((bVar2 != 0 && ((char)bVar2 < '!'))) {
        pbVar8 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        bVar2 = *pbVar8;
      }
LAB_00854de2:
      *(undefined4 *)(unaff_ESI + 0x614) = 0;
      bVar2 = *pbVar6;
      while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
        pbVar6 = pbVar6 + 1;
        *(uint *)(unaff_ESI + 0x614) = (bVar2 & 0xf) + *(int *)(unaff_ESI + 0x614) * 10;
        bVar2 = *pbVar6;
      }
      *(undefined4 *)(unaff_ESI + 0x624) = 0xffffffff;
      iVar5 = FUN_00854920();
      if (iVar5 != 0) {
        pbVar6 = (byte *)(iVar5 + 1);
        bVar2 = *(byte *)(iVar5 + 1);
        while (('\x1f' < (char)bVar2 && (((char)bVar2 < '0' || ('9' < (char)bVar2))))) {
          pbVar8 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar2 = *pbVar8;
        }
        *(undefined4 *)(unaff_ESI + 0x624) = 0;
        bVar2 = *pbVar6;
        while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
          pbVar6 = pbVar6 + 1;
          *(uint *)(unaff_ESI + 0x624) = (bVar2 & 0xf) + *(int *)(unaff_ESI + 0x624) * 10;
          bVar2 = *pbVar6;
        }
      }
      *(undefined4 *)(unaff_ESI + 0x618) = 0;
      iVar5 = FUN_00854920();
      if (iVar5 != 0) {
        uVar7 = FUN_00854510();
        *(undefined4 *)(unaff_ESI + 0x618) = uVar7;
      }
      iVar5 = FUN_00854920();
      if (iVar5 != 0) {
        *(undefined4 *)(unaff_ESI + 0x650) = 1;
      }
      iVar5 = FUN_00854920();
      *(uint *)(unaff_ESI + 0x61c) = (uint)(iVar5 != 0);
      return 0;
    }
  }
  return 0xffffffff;
}

