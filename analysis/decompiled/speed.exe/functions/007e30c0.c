/* speed.exe 007e30c0 _GetLcidFromCountry; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000008b EnumSystemLocalesA
 * calls 007d0cd0 _strlen
 */

/* Library Function - Single Match
    _GetLcidFromCountry
   
   Library: Visual Studio 2003 Debug */

void _GetLcidFromCountry(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_009baf38);
  DAT_009baf34 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(_CountryEnumProc_4,1);
  if ((DAT_009baf24 & 4) == 0) {
    DAT_009baf24 = 0;
  }
  return;
}

