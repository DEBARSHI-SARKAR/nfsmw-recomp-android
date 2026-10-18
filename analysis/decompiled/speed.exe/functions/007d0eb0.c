/* speed.exe 007d0eb0 __mtinitlocknum; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c7290 __free_dbg
 * calls 007c514a __local_unwind2
 * calls 007d0fb7 FUN_007d0fb7
 * calls 007cb270 FUN_007cb270
 * calls 007c6700 __malloc_dbg
 * calls 007d0fac FUN_007d0fac
 * calls 007ddc30 ___crtInitCritSecAndSpinCount
 */

/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2003 Debug */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bcc10;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  if (*(int *)(&DAT_00906990 + _LockNum * 8) == 0) {
    ExceptionList = &local_14;
    iVar1 = __malloc_dbg(0x18,2,"mlock.c",0xfb);
    if (iVar1 != 0) {
      __lock(10);
      local_8 = 0;
      if (*(int *)(&DAT_00906990 + _LockNum * 8) == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(iVar1,4000);
        if (iVar3 == 0) {
          __free_dbg(iVar1,2);
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0xc;
          __local_unwind2(&local_14,0xffffffff);
          ExceptionList = local_14;
          return 0;
        }
        *(int *)(&DAT_00906990 + _LockNum * 8) = iVar1;
      }
      else {
        __free_dbg(iVar1,2);
      }
      local_8 = 0xffffffff;
      FUN_007d0fac();
      iVar1 = FUN_007d0fb7();
      return iVar1;
    }
    puVar2 = (undefined4 *)FUN_007cb270();
    *puVar2 = 0xc;
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  ExceptionList = local_14;
  return iVar1;
}

