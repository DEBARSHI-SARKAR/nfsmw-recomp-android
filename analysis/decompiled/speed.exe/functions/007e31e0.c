/* speed.exe 007e31e0 _GetLcidFromDefault; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000008c GetUserDefaultLCID
 */

/* Library Function - Single Match
    _GetLcidFromDefault
   
   Library: Visual Studio 2003 Debug */

void _GetLcidFromDefault(void)

{
  DAT_009baf24 = DAT_009baf24 | 0x104;
  DAT_009baf2c = GetUserDefaultLCID();
  DAT_009baf28 = DAT_009baf2c;
  return;
}

