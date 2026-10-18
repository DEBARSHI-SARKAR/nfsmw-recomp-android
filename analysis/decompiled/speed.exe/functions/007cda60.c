/* speed.exe 007cda60 __forcdecpt; analysis pseudocode, not buildable source.
 * calls 007ca7e0 _isdigit
 * calls 007c5f80 _tolower
 */

/* Library Function - Single Match
    __forcdecpt
   
   Library: Visual Studio 2003 Debug */

void __cdecl __forcdecpt(char *_Buf)

{
  char cVar1;
  int iVar2;
  char local_5;
  
  iVar2 = _tolower((int)*_Buf);
  if (iVar2 != 0x65) {
    do {
      _Buf = _Buf + 1;
      iVar2 = _isdigit((int)*_Buf);
    } while (iVar2 != 0);
  }
  local_5 = *_Buf;
  *_Buf = DAT_0090725c;
  do {
    _Buf = _Buf + 1;
    cVar1 = *_Buf;
    *_Buf = local_5;
    local_5 = cVar1;
  } while (*_Buf != '\0');
  return;
}

