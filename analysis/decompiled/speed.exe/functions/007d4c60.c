/* speed.exe 007d4c60 FUN_007d4c60; analysis pseudocode, not buildable source.
 * calls 007d5200 ___sbh_find_block
 * calls 007d0fd0 __lock
 * calls 007d60a0 ___sbh_resize_block
 * calls 007d4d01 FUN_007d4d01
 * calls 007d4d0c FUN_007d4d0c
 */

LPVOID FUN_007d4c60(LPVOID param_1,uint param_2)

{
  LPVOID pvVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd1a8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if (param_2 < 0xffffffe1) {
    if (DAT_009c531c == 3) {
      ExceptionList = &pvStack_14;
      __lock(4);
      local_8 = 0;
      iVar2 = ___sbh_find_block(param_1);
      if ((iVar2 != 0) && (param_2 <= DAT_009c52f0)) {
        ___sbh_resize_block(iVar2,param_1,param_2);
      }
      local_8 = 0xffffffff;
      FUN_007d4d01();
      pvVar1 = (LPVOID)FUN_007d4d0c();
      return pvVar1;
    }
    if (param_2 == 0) {
      param_2 = 1;
    }
    ExceptionList = &pvStack_14;
    pvVar1 = HeapReAlloc(DAT_009c5318,0x10,param_1,param_2);
  }
  else {
    pvVar1 = (LPVOID)0x0;
  }
  ExceptionList = pvStack_14;
  return pvVar1;
}

