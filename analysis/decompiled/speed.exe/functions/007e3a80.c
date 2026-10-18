/* speed.exe 007e3a80 __lseek; analysis pseudocode, not buildable source.
 * calls 007e3b90 __lseek_lk
 * calls 007e4670 __lock_fhandle
 * calls 007cb270 FUN_007cb270
 * calls 007e3b70 FUN_007e3b70
 * calls 007e3b63 FUN_007e3b63
 * calls 007cb280 FUN_007cb280
 */

/* Library Function - Single Match
    __lseek
   
   Library: Visual Studio 2003 Debug */

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  undefined4 *puVar1;
  long lVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008beed8;
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
      __lseek_lk(_FileHandle,_Offset,_Origin);
    }
    local_8 = 0xffffffff;
    FUN_007e3b63();
    lVar2 = FUN_007e3b70();
    return lVar2;
  }
  ExceptionList = &pvStack_14;
  puVar1 = (undefined4 *)FUN_007cb270();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_007cb280();
  *puVar1 = 0;
  ExceptionList = pvStack_14;
  return -1;
}

