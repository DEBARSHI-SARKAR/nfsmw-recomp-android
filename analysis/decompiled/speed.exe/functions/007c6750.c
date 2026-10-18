/* speed.exe 007c6750 FUN_007c6750; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c67b8 FUN_007c67b8
 * calls 007c67ad FUN_007c67ad
 * calls 007c6810 __heap_alloc_dbg
 */

void FUN_007c6750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b81b0;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(4);
  local_8 = 0;
  __heap_alloc_dbg(param_1,param_3,param_4,param_5);
  local_8 = 0xffffffff;
  FUN_007c67ad();
  FUN_007c67b8();
  return;
}

