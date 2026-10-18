/* speed.exe 007e74d0 __setmode; analysis pseudocode, not buildable source.
 * calls 007e7596 FUN_007e7596
 * calls 007e75a3 FUN_007e75a3
 * calls 007e4670 __lock_fhandle
 * calls 007cb270 FUN_007cb270
 * calls 007e75c0 __setmode_lk
 */

/* Library Function - Single Match
    __setmode
   
   Library: Visual Studio 2003 Debug */

int __cdecl __setmode(int _FileHandle,int _Mode)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bf1b0;
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
      __setmode_lk(_FileHandle,_Mode);
    }
    local_8 = 0xffffffff;
    FUN_007e7596();
    iVar2 = FUN_007e75a3();
    return iVar2;
  }
  ExceptionList = &pvStack_14;
  puVar1 = (undefined4 *)FUN_007cb270();
  *puVar1 = 9;
  ExceptionList = pvStack_14;
  return -1;
}

