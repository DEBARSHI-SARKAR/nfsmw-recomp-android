/* speed.exe 007d1050 FUN_007d1050; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007d10d6 FUN_007d10d6
 * calls 007d52c0 ___sbh_free_block
 * calls 007d10cb FUN_007d10cb
 * calls 007d5200 ___sbh_find_block
 */

void FUN_007d1050(LPVOID param_1)

{
  int iVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bcc20;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if (param_1 != (LPVOID)0x0) {
    if (DAT_009c531c == 3) {
      ExceptionList = &pvStack_14;
      __lock(4);
      local_8 = 0;
      iVar1 = ___sbh_find_block(param_1);
      if (iVar1 != 0) {
        ___sbh_free_block(iVar1,param_1);
      }
      local_8 = 0xffffffff;
      FUN_007d10cb();
      FUN_007d10d6();
      return;
    }
    ExceptionList = &pvStack_14;
    HeapFree(DAT_009c5318,0,param_1);
  }
  ExceptionList = pvStack_14;
  return;
}

