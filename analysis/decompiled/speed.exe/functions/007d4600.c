/* speed.exe 007d4600 _strncnt; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _strncnt
   
   Library: Visual Studio 2003 Debug */

size_t __cdecl _strncnt(char *_String,size_t _Cnt)

{
  size_t local_c;
  char *local_8;
  
  local_c = _Cnt;
  for (local_8 = _String; (local_c != 0 && (*local_8 != '\0')); local_8 = local_8 + 1) {
    local_c = local_c - 1;
  }
  return (_Cnt - (local_c - 1)) - 1;
}

