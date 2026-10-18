/* speed.exe 007deaa0 __fptostr; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 007d0cd0 _strlen
 */

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2003 Debug */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *local_c;
  char *local_8;
  
  local_c = *(char **)(_Digits + 0xc);
  *_Buf = '0';
  pcVar2 = _Buf;
  for (; local_8 = pcVar2 + 1, 0 < (int)_SizeInBytes; _SizeInBytes = _SizeInBytes - 1) {
    if (*local_c == '\0') {
      cVar1 = '0';
    }
    else {
      cVar1 = *local_c;
      local_c = local_c + 1;
    }
    *local_8 = cVar1;
    pcVar2 = local_8;
  }
  *local_8 = '\0';
  if ((-1 < (int)_SizeInBytes) && (local_8 = pcVar2, '4' < *local_c)) {
    for (; *local_8 == '9'; local_8 = local_8 + -1) {
      *local_8 = '0';
    }
    *local_8 = *local_8 + '\x01';
  }
  if (*_Buf == '1') {
    *(int *)(_Digits + 4) = *(int *)(_Digits + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Buf + 1);
    _Digits = (int)FID_conflict__memcpy(_Buf,_Buf + 1,sVar3 + 1);
  }
  return _Digits;
}

