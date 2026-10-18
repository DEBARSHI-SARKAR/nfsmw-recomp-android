/* speed.exe 0085e490 __fullpath; analysis pseudocode, not buildable source.
 * calls 007cb1d0 __dosmaperr
 * calls 007c7250 FUN_007c7250
 * calls EXTERNAL:00000014 GetFullPathNameA
 * calls 007cb270 FUN_007cb270
 * calls EXTERNAL:0000004a GetLastError
 * calls 008603c0 __getcwd
 * calls 007c66d0 _malloc
 */

/* Library Function - Single Match
    __fullpath
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __fullpath(char *_FullPath,char *_Path,size_t _SizeInBytes)

{
  undefined4 *puVar1;
  DWORD DVar2;
  char *local_10;
  LPSTR local_c;
  DWORD local_8;
  
  if ((_Path == (char *)0x0) || (*_Path == '\0')) {
    local_10 = __getcwd(_FullPath,_SizeInBytes);
  }
  else {
    if (_FullPath == (char *)0x0) {
      local_10 = _malloc(0x104);
      if (local_10 == (LPSTR)0x0) {
        puVar1 = (undefined4 *)FUN_007cb270();
        *puVar1 = 0xc;
        return (char *)0x0;
      }
      _SizeInBytes = 0x104;
    }
    else {
      local_10 = _FullPath;
    }
    local_8 = GetFullPathNameA(_Path,_SizeInBytes,local_10,&local_c);
    if (local_8 < _SizeInBytes) {
      if (local_8 == 0) {
        if (_FullPath == (char *)0x0) {
          FUN_007c7250(local_10);
        }
        DVar2 = GetLastError();
        __dosmaperr(DVar2);
        local_10 = (char *)0x0;
      }
    }
    else {
      if (_FullPath == (char *)0x0) {
        FUN_007c7250(local_10);
      }
      puVar1 = (undefined4 *)FUN_007cb270();
      *puVar1 = 0x22;
      local_10 = (char *)0x0;
    }
  }
  return local_10;
}

