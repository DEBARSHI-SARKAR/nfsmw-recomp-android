/* speed.exe 007d4b80 __heap_alloc_base; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007d4be5 FUN_007d4be5
 * calls 007d4bf0 FUN_007d4bf0
 * calls 007d5880 ___sbh_alloc_block
 */

/* Library Function - Single Match
    __heap_alloc_base
   
   Library: Visual Studio 2003 Debug */

void __heap_alloc_base(uint param_1)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd198;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if ((DAT_009c531c == 3) && (param_1 <= DAT_009c52f0)) {
    ExceptionList = &pvStack_14;
    __lock(4);
    local_8 = 0;
    ___sbh_alloc_block(param_1);
    local_8 = 0xffffffff;
    FUN_007d4be5();
    FUN_007d4bf0();
    return;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  if (DAT_009c531c != 1) {
    param_1 = param_1 + 0xf & 0xfffffff0;
  }
  ExceptionList = &pvStack_14;
  HeapAlloc(DAT_009c5318,0,param_1);
  ExceptionList = pvStack_14;
  return;
}

