/* speed.exe 007e3f80 __commit; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004a GetLastError
 * calls 007e4670 __lock_fhandle
 * calls 007cb270 FUN_007cb270
 * calls 007e406f FUN_007e406f
 * calls 007e44b0 __get_osfhandle
 * calls EXTERNAL:00000091 FlushFileBuffers
 * calls 007cb280 FUN_007cb280
 * calls 007e407c FUN_007e407c
 */

/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2003 Debug */

int __cdecl __commit(int _FileHandle)

{
  undefined4 *puVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD *pDVar3;
  int iVar4;
  DWORD local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bf098;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if ((DAT_009c5320 <= (uint)_FileHandle) ||
     ((*(byte *)((&DAT_009c5340)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) == 0)) {
    ExceptionList = &pvStack_14;
    puVar1 = (undefined4 *)FUN_007cb270();
    *puVar1 = 9;
    ExceptionList = pvStack_14;
    return -1;
  }
  ExceptionList = &pvStack_14;
  __lock_fhandle(_FileHandle);
  local_8 = 0;
  if ((*(byte *)((&DAT_009c5340)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 == 0) {
      local_20 = GetLastError();
    }
    else {
      local_20 = 0;
    }
    if (local_20 == 0) goto LAB_007e4061;
    pDVar3 = (DWORD *)FUN_007cb280();
    *pDVar3 = local_20;
  }
  puVar1 = (undefined4 *)FUN_007cb270();
  *puVar1 = 9;
LAB_007e4061:
  local_8 = 0xffffffff;
  FUN_007e406f();
  iVar4 = FUN_007e407c();
  return iVar4;
}

