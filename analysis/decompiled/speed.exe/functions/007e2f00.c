/* speed.exe 007e2f00 _GetLcidFromLanguage; analysis pseudocode, not buildable source.
 * calls 007e35c0 _GetPrimaryLen
 * calls EXTERNAL:0000008b EnumSystemLocalesA
 * calls 007d0cd0 _strlen
 */

/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2003 Debug */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  undefined4 extraout_var;
  
  sVar1 = _strlen(DAT_009baf40);
  DAT_009baf30 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_009baf3c = 2;
  }
  else {
    DAT_009baf3c = _GetPrimaryLen(DAT_009baf40,extraout_var);
  }
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((DAT_009baf24 & 4) == 0) {
    DAT_009baf24 = 0;
  }
  return;
}

