/* speed.exe 007e4520 __open_osfhandle; analysis pseudocode, not buildable source.
 * calls 007e4090 __alloc_osfhnd
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:00000065 GetFileType
 * calls 007cb1d0 __dosmaperr
 * calls 007e4310 __set_osfhnd
 * calls 007cb270 FUN_007cb270
 * calls 007e4653 FUN_007e4653
 * calls 007cb280 FUN_007cb280
 * calls 007e4646 FUN_007e4646
 */

/* Library Function - Single Match
    __open_osfhandle
   
   Library: Visual Studio 2003 Debug */

int __cdecl __open_osfhandle(intptr_t _OSFileHandle,int _Flags)

{
  DWORD DVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte local_1d;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bf0c8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_1d = 0;
  if ((_Flags & 8U) != 0) {
    local_1d = 0x20;
  }
  if ((_Flags & 0x4000U) != 0) {
    local_1d = local_1d | 0x80;
  }
  if ((_Flags & 0x80U) != 0) {
    local_1d = local_1d | 0x10;
  }
  ExceptionList = &pvStack_14;
  DVar1 = GetFileType((HANDLE)_OSFileHandle);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
  }
  else {
    if (DVar1 == 2) {
      local_1d = local_1d | 0x40;
    }
    else if (DVar1 == 3) {
      local_1d = local_1d | 8;
    }
    uVar2 = __alloc_osfhnd();
    if (uVar2 != 0xffffffff) {
      local_8 = 0;
      __set_osfhnd(uVar2,_OSFileHandle);
      *(byte *)((&DAT_009c5340)[(int)uVar2 >> 5] + 4 + (uVar2 & 0x1f) * 0x24) = local_1d | 1;
      local_8 = 0xffffffff;
      FUN_007e4646();
      iVar4 = FUN_007e4653();
      return iVar4;
    }
    puVar3 = (undefined4 *)FUN_007cb270();
    *puVar3 = 0x18;
    puVar3 = (undefined4 *)FUN_007cb280();
    *puVar3 = 0;
  }
  ExceptionList = pvStack_14;
  return -1;
}

