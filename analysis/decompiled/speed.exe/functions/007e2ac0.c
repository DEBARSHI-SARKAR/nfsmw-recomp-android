/* speed.exe 007e2ac0 _GetLcidFromLangCountry; analysis pseudocode, not buildable source.
 * calls 007e35c0 _GetPrimaryLen
 * calls EXTERNAL:0000008b EnumSystemLocalesA
 * calls 007d0cd0 _strlen
 */

/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2003 Debug */

void _GetLcidFromLangCountry(void)

{
  size_t sVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  
  sVar1 = _strlen(DAT_009baf40);
  DAT_009baf30 = (uint)(sVar1 == 3);
  uVar2 = extraout_var;
  sVar1 = _strlen(DAT_009baf38);
  DAT_009baf34 = (uint)(sVar1 == 3);
  DAT_009baf28 = 0;
  if (DAT_009baf30 == 0) {
    DAT_009baf3c = _GetPrimaryLen(DAT_009baf40,uVar2);
  }
  else {
    DAT_009baf3c = 2;
  }
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  if ((((DAT_009baf24 & 0x100) == 0) || ((DAT_009baf24 & 0x200) == 0)) || ((DAT_009baf24 & 7) == 0))
  {
    DAT_009baf24 = 0;
  }
  return;
}

