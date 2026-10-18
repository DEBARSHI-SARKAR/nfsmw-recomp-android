/* speed.exe 007d7330 flsall; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 */

/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Debug */

void __cdecl flsall(int param_1)

{
  int local_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd208;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(1);
  local_8 = 0;
  local_24 = 0;
  while( true ) {
    if (DAT_009c6460 <= local_24) {
      local_8 = 0xffffffff;
      FUN_007d7495();
      FUN_007d74a0();
      return;
    }
    if ((*(int *)(DAT_009c5454 + local_24 * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_009c5454 + local_24 * 4) + 0xc) & 0x83) != 0)) break;
    local_24 = local_24 + 1;
  }
  __lock_file2(local_24,*(void **)(DAT_009c5454 + local_24 * 4));
  local_8 = 1;
  if ((*(uint *)(*(int *)(DAT_009c5454 + local_24 * 4) + 0xc) & 0x83) != 0) {
    if (param_1 == 1) {
      __fflush_lk(*(undefined4 *)(DAT_009c5454 + local_24 * 4));
    }
    else if ((param_1 == 0) && ((*(uint *)(*(int *)(DAT_009c5454 + local_24 * 4) + 0xc) & 2) != 0))
    {
      __fflush_lk(*(undefined4 *)(DAT_009c5454 + local_24 * 4));
    }
  }
  local_8 = 0;
  FUN_007d7468();
  FUN_007d7482();
  return;
}

