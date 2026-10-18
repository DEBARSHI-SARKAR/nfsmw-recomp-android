/* speed.exe 00723bf0 FUN_00723bf0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00723bf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  iVar2 = DAT_009a3a68;
  iVar1 = DAT_009a3a64;
  iVar3 = 0;
  uVar5 = 0;
  do {
    (&DAT_009a3740)[uVar5] = (short)iVar3;
    if (iVar3 < iVar2) {
      pbVar4 = (byte *)(iVar1 + iVar3 * 6);
      do {
        if (*pbVar4 != uVar5) break;
        iVar3 = iVar3 + 1;
        pbVar4 = pbVar4 + 6;
      } while (iVar3 < iVar2);
    }
    uVar5 = uVar5 + 1;
    if (0xff < (int)uVar5) {
      _DAT_009a3940 = (short)iVar3;
      return;
    }
  } while( true );
}

