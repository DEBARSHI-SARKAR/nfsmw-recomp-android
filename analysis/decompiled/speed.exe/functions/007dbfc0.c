/* speed.exe 007dbfc0 ___tzset; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007dc0c0 __tzset_lk
 * calls 007dc026 FUN_007dc026
 * calls 007dc031 FUN_007dc031
 */

/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2003 Debug */

void ___tzset(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd7a0;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if (DAT_009bae6c == 0) {
    ExceptionList = &pvStack_14;
    __lock(6);
    local_8 = 0;
    if (DAT_009bae6c == 0) {
      __tzset_lk();
      DAT_009bae6c = DAT_009bae6c + 1;
    }
    local_8 = 0xffffffff;
    FUN_007dc026();
    FUN_007dc031();
    return;
  }
  return;
}

