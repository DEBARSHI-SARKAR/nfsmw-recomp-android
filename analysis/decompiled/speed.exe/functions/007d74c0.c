/* speed.exe 007d74c0 __close; analysis pseudocode, not buildable source.
 * calls 007e4670 __lock_fhandle
 * calls 007cb270 FUN_007cb270
 * calls 007d75b0 __close_lk
 * calls 007d759a FUN_007d759a
 * calls 007cb280 FUN_007cb280
 * calls 007d758d FUN_007d758d
 */

/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2003 Debug */

int __cdecl __close(int _FileHandle)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd220;
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
      __close_lk(_FileHandle);
    }
    local_8 = 0xffffffff;
    FUN_007d758d();
    iVar2 = FUN_007d759a();
    return iVar2;
  }
  ExceptionList = &pvStack_14;
  puVar1 = (undefined4 *)FUN_007cb270();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_007cb280();
  *puVar1 = 0;
  ExceptionList = pvStack_14;
  return -1;
}

