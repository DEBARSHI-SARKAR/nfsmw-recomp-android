/* speed.exe 0085e570 __filelength; analysis pseudocode, not buildable source.
 * calls 0085e698 FUN_0085e698
 * calls 007cb280 FUN_007cb280
 * calls 007e4670 __lock_fhandle
 * calls 007cb270 FUN_007cb270
 * calls 007e3b90 __lseek_lk
 * calls 0085e68b FUN_0085e68b
 */

/* Library Function - Single Match
    __filelength
   
   Library: Visual Studio 2003 Debug */

long __cdecl __filelength(int _FileHandle)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008c7b68;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if (((uint)_FileHandle < DAT_009c5320) &&
     ((*(byte *)((&DAT_009c5340)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    ExceptionList = &pvStack_14;
    __lock_fhandle(_FileHandle);
    local_8 = 0;
    if ((*(byte *)((&DAT_009c5340)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) == 0)
    {
      puVar1 = (undefined4 *)FUN_007cb270();
      *puVar1 = 9;
      puVar1 = (undefined4 *)FUN_007cb280();
      *puVar1 = 0;
    }
    else {
      iVar2 = __lseek_lk(_FileHandle,0,1);
      if ((iVar2 != -1) && (iVar3 = __lseek_lk(_FileHandle,0,2), iVar2 != iVar3)) {
        __lseek_lk(_FileHandle,iVar2,0);
      }
    }
    local_8 = 0xffffffff;
    FUN_0085e68b();
    lVar4 = FUN_0085e698();
    return lVar4;
  }
  ExceptionList = &pvStack_14;
  puVar1 = (undefined4 *)FUN_007cb270();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_007cb280();
  *puVar1 = 0;
  ExceptionList = pvStack_14;
  return -1;
}

