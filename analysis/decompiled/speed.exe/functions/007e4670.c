/* speed.exe 007e4670 __lock_fhandle; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007e471e FUN_007e471e
 * calls 007c514a __local_unwind2
 * calls 007e4729 FUN_007e4729
 * calls 007ddc30 ___crtInitCritSecAndSpinCount
 */

/* Library Function - Single Match
    __lock_fhandle
   
   Library: Visual Studio 2003 Debug */

int __cdecl __lock_fhandle(int _Filehandle)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bf0d8;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  iVar2 = (_Filehandle & 0x1fU) * 0x24 + (&DAT_009c5340)[_Filehandle >> 5];
  if (*(int *)(iVar2 + 8) != 0) {
    ExceptionList = &local_14;
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_009c5340)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
    ExceptionList = local_14;
    return 1;
  }
  ExceptionList = &local_14;
  __lock(10);
  local_8 = 0;
  if (*(int *)(iVar2 + 8) == 0) {
    iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
    if (iVar1 == 0) {
      __local_unwind2(&local_14,0xffffffff);
      ExceptionList = local_14;
      return 0;
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  local_8 = 0xffffffff;
  FUN_007e471e();
  iVar2 = FUN_007e4729();
  return iVar2;
}

