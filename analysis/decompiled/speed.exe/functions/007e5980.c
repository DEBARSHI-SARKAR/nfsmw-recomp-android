/* speed.exe 007e5980 __lseeki64_lk; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004a GetLastError
 * calls 007cb1d0 __dosmaperr
 * calls 007cb270 FUN_007cb270
 * calls EXTERNAL:0000008f SetFilePointer
 * calls 007e44b0 __get_osfhandle
 */

/* Library Function - Single Match
    __lseeki64_lk
   
   Library: Visual Studio 2003 Debug */

undefined8 __lseeki64_lk(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  HANDLE hFile;
  undefined4 *puVar1;
  DWORD DVar2;
  DWORD DVar3;
  LONG local_8;
  
  local_8 = param_3;
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar1 = (undefined4 *)FUN_007cb270();
    *puVar1 = 9;
    DVar2 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar2 = SetFilePointer(hFile,param_2,&local_8,param_4);
    if (DVar2 == 0xffffffff) {
      DVar3 = GetLastError();
      if (DVar3 != 0) {
        __dosmaperr(DVar3);
        DVar2 = 0xffffffff;
        local_8 = -1;
        goto LAB_007e5a3d;
      }
    }
    *(byte *)((&DAT_009c5340)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_009c5340)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  }
LAB_007e5a3d:
  return CONCAT44(local_8,DVar2);
}

