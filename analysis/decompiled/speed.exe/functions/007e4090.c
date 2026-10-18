/* speed.exe 007e4090 __alloc_osfhnd; analysis pseudocode, not buildable source.
 * calls 007d0eb0 __mtinitlocknum
 * calls 007d0fd0 __lock
 */

/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __alloc_osfhnd(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puStack_28;
  int local_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bf0b0;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_24 = -1;
  ExceptionList = &pvStack_14;
  iVar2 = __mtinitlocknum(0xb);
  if (iVar2 == 0) {
    ExceptionList = pvStack_14;
    return -1;
  }
  __lock(0xb);
  puVar1 = DAT_009c5340;
  local_8 = 0;
  if (DAT_009c5340 == (undefined4 *)0x0) {
    puStack_28 = (undefined4 *)__malloc_dbg(0x480,2,"osfinfo.c",0x85);
    if (puStack_28 != (undefined4 *)0x0) {
      DAT_009c5320 = DAT_009c5320 + 0x20;
      DAT_009c5340 = puStack_28;
      for (; puStack_28 < DAT_009c5340 + 0x120; puStack_28 = puStack_28 + 9) {
        *(undefined1 *)(puStack_28 + 1) = 0;
        *puStack_28 = 0xffffffff;
        *(undefined1 *)((int)puStack_28 + 5) = 10;
        puStack_28[2] = 0;
      }
      __lock_fhandle(0);
    }
  }
  else {
    if (DAT_009c5340 < DAT_009c5340 + 0x120) {
      if ((*(byte *)(DAT_009c5340 + 1) & 1) != 0) {
        iVar2 = FUN_007e411d();
        return iVar2;
      }
      if (DAT_009c5340[2] == 0) {
        __lock(10);
        local_8 = 1;
        if (puVar1[2] == 0) {
          iVar2 = ___crtInitCritSecAndSpinCount(puVar1 + 3,4000);
          if (iVar2 == 0) {
            __local_unwind2(&pvStack_14,0xffffffff);
            ExceptionList = pvStack_14;
            return -1;
          }
          puVar1[2] = puVar1[2] + 1;
        }
        local_8 = 0;
        FUN_007e41c3();
        iVar2 = FUN_007e41ce();
        return iVar2;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_009c5340 + 3));
      if ((*(byte *)(puVar1 + 1) & 1) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
        iVar2 = FUN_007e411d();
        return iVar2;
      }
      *puVar1 = 0xffffffff;
      local_24 = ((int)puVar1 - (int)DAT_009c5340) / 0x24;
    }
    if (local_24 == -1) {
      iVar2 = FUN_007e40ea();
      return iVar2;
    }
  }
  local_8 = 0xffffffff;
  FUN_007e42ef();
  iVar2 = FUN_007e42fa();
  return iVar2;
}

