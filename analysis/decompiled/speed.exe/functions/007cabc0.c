/* speed.exe 007cabc0 _strtod; analysis pseudocode, not buildable source.
 * calls 007ca8b0 _isspace
 * calls 007cb270 FUN_007cb270
 * calls 007d0cd0 _strlen
 * calls 007dad40 __fltin2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _strtod
   
   Library: Visual Studio 2003 Debug */

double __cdecl _strtod(char *_Str,char **_EndPtr)

{
  int iVar1;
  _locale_t _Locale;
  undefined4 *puVar2;
  _flt local_34;
  FLT local_18;
  double local_14;
  byte *local_c;
  uint local_8;
  
  local_c = (byte *)_Str;
  while (iVar1 = _isspace((uint)*local_c), iVar1 != 0) {
    local_c = local_c + 1;
  }
  _Locale = (_locale_t)_strlen((char *)local_c);
  local_18 = __fltin2(&local_34,(char *)local_c,_Locale);
  if (_EndPtr != (char **)0x0) {
    *_EndPtr = (char *)(local_c + local_18->nbytes);
  }
  local_8 = local_18->flags;
  if ((local_8 & 0x240) == 0) {
    if ((local_8 & 0x81) == 0) {
      if ((local_8 & 0x100) == 0) {
        local_14 = local_18->dval;
      }
      else {
        local_14 = _DAT_008942e0;
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0x22;
      }
    }
    else {
      if (*local_c == 0x2d) {
        local_14 = -_DAT_00906fe8;
      }
      else {
        local_14 = _DAT_00906fe8;
      }
      puVar2 = (undefined4 *)FUN_007cb270();
      *puVar2 = 0x22;
    }
  }
  else {
    local_14 = _DAT_008942e0;
    if (_EndPtr != (char **)0x0) {
      *_EndPtr = _Str;
    }
  }
  return local_14;
}

