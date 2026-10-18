/* speed.exe 0083fbb0 FUN_0083fbb0; analysis pseudocode, not buildable source.
 */

byte FUN_0083fbb0(uint *param_1,int *param_2,int *param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  
  bVar2 = *param_4;
  while (('\0' < (char)bVar2 && ((char)bVar2 < '!'))) {
    pbVar1 = param_4 + 1;
    param_4 = param_4 + 1;
    bVar2 = *pbVar1;
  }
  uVar4 = 0;
  do {
    while( true ) {
      bVar2 = *param_4;
      if (('/' < (char)bVar2) && ((char)bVar2 < ':')) break;
      if (bVar2 != 0x2e) {
        bVar5 = uVar4 != 0;
        *param_1 = uVar4;
        bVar2 = *param_4;
        while ((bVar2 != 0x3a && (bVar2 != 0))) {
          pbVar1 = param_4 + 1;
          param_4 = param_4 + 1;
          bVar2 = *pbVar1;
        }
        iVar3 = 0;
        if (*param_4 == 0x3a) {
          param_4 = param_4 + 1;
          bVar2 = *param_4;
          while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
            param_4 = param_4 + 1;
            iVar3 = (bVar2 & 0xf) + iVar3 * 10;
            bVar2 = *param_4;
          }
          bVar5 = bVar5 | 2;
        }
        *param_2 = iVar3;
        if (param_3 != (int *)0x0) {
          iVar3 = 0;
          if (*param_4 == 0x3a) {
            param_4 = param_4 + 1;
            bVar2 = *param_4;
            while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
              param_4 = param_4 + 1;
              iVar3 = (bVar2 & 0xf) + iVar3 * 10;
              bVar2 = *param_4;
            }
            bVar5 = bVar5 | 4;
          }
          *param_3 = iVar3;
        }
        return bVar5;
      }
LAB_0083fbe2:
      uVar4 = uVar4 << 8;
      param_4 = param_4 + 1;
    }
    if (bVar2 == 0x2e) goto LAB_0083fbe2;
    uVar4 = uVar4 + (uVar4 & 0xff) * 9 + (bVar2 & 0xf);
    param_4 = param_4 + 1;
  } while( true );
}

