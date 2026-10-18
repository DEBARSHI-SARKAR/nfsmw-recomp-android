/* speed.exe 006cb680 FUN_006cb680; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000004 GetLongPathNameA
 * calls EXTERNAL:000000da RegQueryValueExA
 * calls 007c6380 _atoi
 * calls EXTERNAL:000000d7 RegOpenKeyExA
 * calls EXTERNAL:000000d9 RegSetValueExA
 * calls EXTERNAL:000000d8 RegCloseKey
 * calls 007e6630 __stricmp
 * calls EXTERNAL:0000004a GetLastError
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006cb680(void)

{
  undefined **ppuVar1;
  BYTE BVar2;
  LSTATUS LVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  BYTE *pBVar8;
  HKEY local_128;
  DWORD local_124 [3];
  BYTE local_118 [4];
  DWORD local_114;
  BYTE local_110 [268];
  
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,
                        "Software\\Electronic Arts\\EA Games\\Need for Speed Most Wanted\\ergc",0,
                        0x20019,&local_128);
  if (LVar3 == 0) {
    local_114 = 1;
    local_124[2] = 0x15;
    LVar3 = RegQueryValueExA(local_128,(LPCSTR)0x0,(LPDWORD)0x0,&local_114,&DAT_00982974,
                             local_124 + 2);
    if (LVar3 == 0) {
      DAT_00982988 = 0;
    }
    else {
      DAT_00982974 = 0;
    }
  }
  RegCloseKey(local_128);
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,"Software\\EA Games\\Need for Speed Most Wanted",0,0x2001f,
                        &local_128);
  if (LVar3 != 0) {
    RegOpenKeyExA((HKEY)0x80000002,"Software\\EA Games\\Need for Speed Most Wanted",0,0x20019,
                  &local_128);
  }
  pBVar8 = local_110;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    pBVar8[0] = '\0';
    pBVar8[1] = '\0';
    pBVar8[2] = '\0';
    pBVar8[3] = '\0';
    pBVar8 = pBVar8 + 4;
  }
  local_124[1] = 1;
  local_124[0] = 0x104;
  LVar3 = RegQueryValueExA(local_128,"Install Dir",(LPDWORD)0x0,local_124 + 1,local_110,local_124);
  if ((LVar3 == 0) &&
     (DVar4 = GetLongPathNameA((LPCSTR)local_110,(LPSTR)local_110,0x104), DVar4 != 0)) {
    iVar6 = 0;
    do {
      BVar2 = local_110[iVar6];
      (&DAT_0093dd0c)[iVar6] = BVar2;
      iVar6 = iVar6 + 1;
    } while (BVar2 != '\0');
  }
  pBVar8 = local_110;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    pBVar8[0] = '\0';
    pBVar8[1] = '\0';
    pBVar8[2] = '\0';
    pBVar8[3] = '\0';
    pBVar8 = pBVar8 + 4;
  }
  iVar6 = 0;
  local_124[0] = 0x104;
  LVar3 = RegQueryValueExA(local_128,"CD Drive",(LPDWORD)0x0,local_124 + 1,local_110,local_124);
  if (LVar3 == 0) {
    DVar4 = GetLongPathNameA((LPCSTR)local_110,(LPSTR)local_110,0x104);
    GetLastError();
    if (DVar4 != 0) {
      iVar5 = 0;
      do {
        BVar2 = local_110[iVar5];
        (&DAT_0093dc08)[iVar5] = BVar2;
        iVar5 = iVar5 + 1;
      } while (BVar2 != '\0');
    }
  }
  local_124[0] = 0x104;
  LVar3 = RegQueryValueExA(local_128,"FirstTime",(LPDWORD)0x0,local_124 + 1,local_110,local_124);
  DAT_00901820 = (uint)(LVar3 != 0);
  local_118[0] = '\x01';
  local_118[1] = '\0';
  local_118[2] = '\0';
  local_118[3] = '\0';
  RegSetValueExA(local_128,"FirstTime",1,4,local_118,4);
  local_124[0] = 0x104;
  LVar3 = RegQueryValueExA(local_128,"CacheSize",(LPDWORD)0x0,local_124 + 1,local_110,local_124);
  if (LVar3 == 0) {
    _DAT_0093de10 = _atoi((char *)local_110);
    _DAT_0093de14 = _DAT_0093de10 >> 0x1f;
  }
  local_124[0] = 0x104;
  LVar3 = RegQueryValueExA(local_128,"SwapSize",(LPDWORD)0x0,local_124 + 1,local_110,local_124);
  if (LVar3 == 0) {
    _DAT_0093de18 = _atoi((char *)local_110);
    _DAT_0093de1c = _DAT_0093de18 >> 0x1f;
  }
  local_124[0] = 0x104;
  LVar3 = RegQueryValueExA(local_128,"Language",(LPDWORD)0x0,local_124 + 1,local_110,local_124);
  if (LVar3 == 0) {
    if (PTR_s_English_US_008fb578 != (undefined *)0x0) {
      ppuVar7 = &PTR_s_English_US_008fb578;
      do {
        iVar5 = __stricmp((char *)local_110,*ppuVar7);
        if (iVar5 == 0) {
          DAT_008fb574 = (&DAT_008fb57c)[iVar6 * 3];
          _DAT_00982d20 = (&PTR_s_English_US_008fb578)[iVar6 * 3];
          DAT_00982d24 = (&DAT_008fb580)[iVar6 * 3];
          break;
        }
        ppuVar1 = ppuVar7 + 3;
        ppuVar7 = ppuVar7 + 3;
        iVar6 = iVar6 + 1;
      } while (*ppuVar1 != (undefined *)0x0);
    }
  }
  else {
    DAT_008fb574 = 0;
  }
  local_124[0] = 0x104;
  LVar3 = RegQueryValueExA(local_128,"StreamingInstall",(LPDWORD)0x0,local_124 + 1,local_110,
                           local_124);
  if (LVar3 != 0) {
    DAT_00982c30 = 1;
    RegCloseKey(local_128);
    return 1;
  }
  iVar6 = __stricmp((char *)local_110,"off");
  DAT_00982c30 = iVar6 != 0;
  RegCloseKey(local_128);
  return 1;
}

