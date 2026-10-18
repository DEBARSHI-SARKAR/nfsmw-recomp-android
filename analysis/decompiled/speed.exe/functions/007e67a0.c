/* speed.exe 007e67a0 __chsize; analysis pseudocode, not buildable source.
 * calls 007e6866 FUN_007e6866
 * calls 007e4670 __lock_fhandle
 * calls 007cb270 FUN_007cb270
 * calls 007e6890 __chsize_lk
 * calls 007e6873 FUN_007e6873
 */

/* Library Function - Single Match
    __chsize
   
   Library: Visual Studio 2003 Debug */

int __cdecl __chsize(int _FileHandle,long _Size)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bf150;
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
    }
    else {
      __chsize_lk(_FileHandle,_Size);
    }
    local_8 = 0xffffffff;
    FUN_007e6866();
    iVar2 = FUN_007e6873();
    return iVar2;
  }
  ExceptionList = &pvStack_14;
  puVar1 = (undefined4 *)FUN_007cb270();
  *puVar1 = 9;
  ExceptionList = pvStack_14;
  return -1;
}

