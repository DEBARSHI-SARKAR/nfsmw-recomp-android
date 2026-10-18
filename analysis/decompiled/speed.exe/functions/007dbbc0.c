/* speed.exe 007dbbc0 __write; analysis pseudocode, not buildable source.
 * calls 007e4670 __lock_fhandle
 * calls 007cb270 FUN_007cb270
 * calls 007dbca3 FUN_007dbca3
 * calls 007dbcb0 FUN_007dbcb0
 * calls 007dbcd0 __write_lk
 * calls 007cb280 FUN_007cb280
 */

/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2003 Debug */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd750;
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
      __write_lk(_FileHandle,_Buf,_MaxCharCount);
    }
    local_8 = 0xffffffff;
    FUN_007dbca3();
    iVar2 = FUN_007dbcb0();
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

