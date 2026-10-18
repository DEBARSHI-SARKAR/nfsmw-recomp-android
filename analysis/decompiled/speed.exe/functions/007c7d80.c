/* speed.exe 007c7d80 __CrtSetDbgFlag; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c7e13 FUN_007c7e13
 * calls 007c7e08 FUN_007c7e08
 */

/* Library Function - Single Match
    __CrtSetDbgFlag
   
   Library: Visual Studio 2003 Debug */

void __CrtSetDbgFlag(uint param_1)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8750;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(4);
  if (param_1 != 0xffffffff) {
    if ((param_1 & 4) == 0) {
      DAT_009baa14 = (int)param_1 >> 0x10 & 0xffff;
    }
    else {
      DAT_009baa14 = 1;
    }
    DAT_009baa04 = 0;
    DAT_00906300 = param_1;
  }
  local_8 = 0xffffffff;
  FUN_007c7e08();
  FUN_007c7e13();
  return;
}

