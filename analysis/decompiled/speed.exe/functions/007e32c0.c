/* speed.exe 007e32c0 _TestDefaultCountry; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2003 Debug */

undefined4 _TestDefaultCountry(short param_1)

{
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (9 < local_8) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_008be6bc + local_8 * 2)) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

