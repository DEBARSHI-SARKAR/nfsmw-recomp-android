/* speed.exe 006c2620 FUN_006c2620; analysis pseudocode, not buildable source.
 * calls 006cba30 FUN_006cba30
 * calls 007c6100 _sprintf
 * calls EXTERNAL:00000022 GetDriveTypeA
 * calls EXTERNAL:00000021 GetLogicalDrives
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006cb9d0 FUN_006cb9d0
 * calls 006c25a0 FUN_006c25a0
 * calls 00652ad0 _malloc
 */

char FUN_006c2620(void)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  char *_Dest;
  UINT UVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  
  cVar5 = 'A';
  uVar7 = 1;
  DVar3 = GetLogicalDrives();
  iVar6 = 0;
  bVar1 = false;
  _Dest = _malloc(0x400);
  DAT_008f945c = 0;
  if (_Dest != (char *)0x0) {
    do {
      if ((DVar3 & uVar7) != 0) {
        _sprintf(_Dest,"%c:\\",(int)cVar5);
        UVar4 = GetDriveTypeA(_Dest);
        if ((((UVar4 == 5) || (DAT_008a9260 != 0)) && (UVar4 != 4)) &&
           (cVar2 = FUN_006c25a0(cVar5), cVar2 != '\0')) {
          bVar1 = true;
          break;
        }
      }
      cVar5 = cVar5 + '\x01';
      uVar7 = uVar7 << 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x20);
    thunk_FUN_007c7250(_Dest);
    if (bVar1) {
      DAT_008f945c = cVar5;
      FUN_006cba30(cVar5);
      FUN_006cb9d0();
      return cVar5;
    }
  }
  DAT_008f945c = 0;
  return '\0';
}

