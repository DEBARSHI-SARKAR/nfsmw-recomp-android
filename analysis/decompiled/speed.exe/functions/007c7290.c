/* speed.exe 007c7290 __free_dbg; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c7300 __free_dbg_lk
 * calls 007c72e2 FUN_007c72e2
 * calls 007c72ed FUN_007c72ed
 */

/* Library Function - Single Match
    __free_dbg
   
   Library: Visual Studio 2003 Debug */

void __free_dbg(undefined4 param_1,undefined4 param_2)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8468;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(4);
  local_8 = 0;
  __free_dbg_lk(param_1,param_2);
  local_8 = 0xffffffff;
  FUN_007c72e2();
  FUN_007c72ed();
  return;
}

