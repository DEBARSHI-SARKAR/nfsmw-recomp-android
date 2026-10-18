/* speed.exe 007c7e30 __CrtDoForAllClientObjects; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c7ebb FUN_007c7ebb
 * calls 007c7ec6 FUN_007c7ec6
 */

/* Library Function - Single Match
    __CrtDoForAllClientObjects
   
   Library: Visual Studio 2003 Debug */

void __CrtDoForAllClientObjects(code *param_1,undefined4 param_2)

{
  undefined4 *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8760;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if ((DAT_00906300 & 1) == 0) {
    ExceptionList = &pvStack_14;
    FUN_007c7ec6();
    return;
  }
  ExceptionList = &pvStack_14;
  __lock(4);
  local_8 = 0;
  for (local_20 = DAT_009baa0c; local_20 != (undefined4 *)0x0; local_20 = (undefined4 *)*local_20) {
    if ((local_20[5] & 0xffff) == 4) {
      (*param_1)(local_20 + 8,param_2);
    }
  }
  local_8 = 0xffffffff;
  FUN_007c7ebb();
  FUN_007c7ec6();
  return;
}

