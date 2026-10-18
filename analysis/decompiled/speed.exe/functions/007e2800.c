/* speed.exe 007e2800 ___get_qualified_locale; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000088 IsValidLocale
 * calls EXTERNAL:00000089 IsValidCodePage
 * calls EXTERNAL:0000008a GetLocaleInfoA
 * calls 007e2a30 _TranslateName
 * calls 007e3210 _ProcessCodePage
 * calls 007df150 __itoa
 * calls 007e30c0 _GetLcidFromCountry
 * calls 007e2ac0 _GetLcidFromLangCountry
 * calls 007e2f00 _GetLcidFromLanguage
 * calls 007e31e0 _GetLcidFromDefault
 * calls 007d0bd0 FUN_007d0bd0
 */

/* Library Function - Single Match
    ___get_qualified_locale
   
   Library: Visual Studio 2003 Debug */

BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  BOOL BVar1;
  uint _Value;
  int iVar2;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_009baf44 == (code *)0x0) {
    if (DAT_009baa20 == 2) {
      local_c = GetLocaleInfoA_exref;
    }
    else {
      local_c = crtGetLocaleInfoA;
    }
    DAT_009baf44 = local_c;
  }
  if (_LpInStr == (LPLC_STRINGS)0x0) {
    _GetLcidFromDefault();
  }
  else {
    DAT_009baf40 = _LpInStr;
    DAT_009baf38 = _LpInStr->szLanguage + 0x20;
    if ((DAT_009baf38 != (wchar_t *)0x0) && ((char)*DAT_009baf38 != '\0')) {
      _TranslateName(&PTR_s_america_008be6d0,0x16,&DAT_009baf38);
    }
    DAT_009baf24 = 0;
    if ((DAT_009baf40 == (LPLC_STRINGS)0x0) || ((char)DAT_009baf40->szLanguage[0] == '\0')) {
      if ((DAT_009baf38 == (wchar_t *)0x0) || ((char)*DAT_009baf38 == '\0')) {
        _GetLcidFromDefault();
      }
      else {
        _GetLcidFromCountry();
      }
    }
    else {
      if ((DAT_009baf38 == (wchar_t *)0x0) || ((char)*DAT_009baf38 == '\0')) {
        _GetLcidFromLanguage();
      }
      else {
        _GetLcidFromLangCountry();
      }
      if ((DAT_009baf24 == 0) &&
         (iVar2 = _TranslateName(&PTR_s_american_008be880,0x40,&DAT_009baf40), iVar2 != 0)) {
        if ((DAT_009baf38 == (wchar_t *)0x0) || ((char)*DAT_009baf38 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
    }
  }
  if (DAT_009baf24 == 0) {
    BVar1 = 0;
  }
  else {
    _Value = _ProcessCodePage(_LpInStr->szCountry);
    if ((_Value == 0) || (BVar1 = IsValidCodePage(_Value & 0xffff), BVar1 == 0)) {
      BVar1 = 0;
    }
    else {
      BVar1 = IsValidLocale(DAT_009baf28,1);
      if (BVar1 == 0) {
        BVar1 = 0;
      }
      else {
        if (_LpCodePage != (UINT *)0x0) {
          *(undefined2 *)_LpCodePage = (undefined2)DAT_009baf28;
          *(undefined2 *)((int)_LpCodePage + 2) = (undefined2)DAT_009baf2c;
          local_8 = (undefined2)_Value;
          *(undefined2 *)(_LpCodePage + 1) = local_8;
        }
        if (_LpOutStr != (LPLC_STRINGS)0x0) {
          if ((short)*_LpCodePage == 0x814) {
            FUN_007d0bd0(_LpOutStr,"Norwegian-Nynorsk");
          }
          else {
            iVar2 = (*DAT_009baf44)(DAT_009baf28,0x1001,_LpOutStr,0x40);
            if (iVar2 == 0) {
              return 0;
            }
          }
          iVar2 = (*DAT_009baf44)(DAT_009baf2c,0x1002,_LpOutStr->szLanguage + 0x20,0x40);
          if (iVar2 == 0) {
            return 0;
          }
          __itoa(_Value,(char *)_LpOutStr->szCountry,10);
        }
        BVar1 = 1;
      }
    }
  }
  return BVar1;
}

