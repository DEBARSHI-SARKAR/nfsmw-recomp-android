/* speed.exe 007d7a80 __getstream; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007d0eb0 __mtinitlocknum
 * calls 007d0fd0 __lock
 * calls 007c93d0 __lock_file2
 * calls 007c9440 __unlock_file2
 * calls EXTERNAL:00000056 EnterCriticalSection
 * calls 007d7c8e FUN_007d7c8e
 * calls 007c6700 __malloc_dbg
 * calls 007ddc30 ___crtInitCritSecAndSpinCount
 * calls 007d7c83 FUN_007d7c83
 */

/* Library Function - Single Match
    __getstream
   
   Library: Visual Studio 2003 Debug */

FILE * __cdecl __getstream(void)

{
  int iVar1;
  undefined4 uVar2;
  FILE *pFVar3;
  undefined4 *local_24;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd260;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_24 = (undefined4 *)0x0;
  ExceptionList = &pvStack_14;
  __lock(1);
  local_8 = 0;
  local_20 = 0;
  do {
    if (DAT_009c6460 <= local_20) {
LAB_007d7c34:
      if (local_24 != (undefined4 *)0x0) {
        local_24[1] = 0;
        local_24[3] = 0;
        local_24[2] = 0;
        *local_24 = 0;
        local_24[7] = 0;
        local_24[4] = 0xffffffff;
      }
      local_8 = 0xffffffff;
      FUN_007d7c83();
      pFVar3 = (FILE *)FUN_007d7c8e();
      return pFVar3;
    }
    if (*(int *)(DAT_009c5454 + local_20 * 4) == 0) {
      uVar2 = __malloc_dbg(0x38,2,"stream.c",0x5d);
      *(undefined4 *)(DAT_009c5454 + local_20 * 4) = uVar2;
      if (*(int *)(DAT_009c5454 + local_20 * 4) != 0) {
        iVar1 = ___crtInitCritSecAndSpinCount(*(int *)(DAT_009c5454 + local_20 * 4) + 0x20,4000);
        if (iVar1 == 0) {
          __free_dbg(*(undefined4 *)(DAT_009c5454 + local_20 * 4),2);
          *(undefined4 *)(DAT_009c5454 + local_20 * 4) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_009c5454 + local_20 * 4) + 0x20));
          local_24 = *(undefined4 **)(DAT_009c5454 + local_20 * 4);
        }
      }
      goto LAB_007d7c34;
    }
    if ((*(uint *)(*(int *)(DAT_009c5454 + local_20 * 4) + 0xc) & 0x83) == 0) {
      if (((2 < local_20) && (local_20 < 0x14)) &&
         (iVar1 = __mtinitlocknum(local_20 + 0x10), iVar1 == 0)) goto LAB_007d7c34;
      __lock_file2(local_20,*(void **)(DAT_009c5454 + local_20 * 4));
      if ((*(uint *)(*(int *)(DAT_009c5454 + local_20 * 4) + 0xc) & 0x83) == 0) {
        local_24 = *(undefined4 **)(DAT_009c5454 + local_20 * 4);
        goto LAB_007d7c34;
      }
      __unlock_file2(local_20,*(void **)(DAT_009c5454 + local_20 * 4));
    }
    local_20 = local_20 + 1;
  } while( true );
}

