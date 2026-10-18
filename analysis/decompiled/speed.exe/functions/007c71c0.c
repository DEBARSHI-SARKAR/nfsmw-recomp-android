/* speed.exe 007c71c0 __expand_dbg; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c6c80 realloc_help
 * calls 007c7223 FUN_007c7223
 * calls 007c722e FUN_007c722e
 */

/* Library Function - Multiple Matches With Different Base Names
    __expand_dbg
    __realloc_dbg
   
   Library: Visual Studio 2003 Debug */

void __expand_dbg(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8458;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(4);
  local_8 = 0;
  realloc_help(param_1,param_2,param_3,param_4,param_5,0);
  local_8 = 0xffffffff;
  FUN_007c7223();
  FUN_007c722e();
  return;
}

