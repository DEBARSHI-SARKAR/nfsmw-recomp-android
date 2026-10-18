/* speed.exe 007e3b90 __lseek_lk; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004a GetLastError
 * calls 007cb1d0 __dosmaperr
 * calls 007cb270 FUN_007cb270
 * calls EXTERNAL:0000008f SetFilePointer
 * calls 007e44b0 __get_osfhandle
 */

/* Library Function - Single Match
    __lseek_lk
   
   Library: Visual Studio 2003 Debug */

DWORD __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  undefined4 *puVar1;
  DWORD DVar2;
  ulong local_10;
  
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar1 = (undefined4 *)FUN_007cb270();
    *puVar1 = 9;
    DVar2 = 0xffffffff;
  }
  else {
    DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar2 == 0xffffffff) {
      local_10 = GetLastError();
    }
    else {
      local_10 = 0;
    }
    if (local_10 == 0) {
      *(byte *)((&DAT_009c5340)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
           *(byte *)((&DAT_009c5340)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
    }
    else {
      __dosmaperr(local_10);
      DVar2 = 0xffffffff;
    }
  }
  return DVar2;
}

