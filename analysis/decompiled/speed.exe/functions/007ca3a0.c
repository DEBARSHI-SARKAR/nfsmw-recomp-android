/* speed.exe 007ca3a0 doexit; analysis pseudocode, not buildable source.
 * calls 007ca520 __lockexit
 * calls 007ca4a1 FUN_007ca4a1
 * calls EXTERNAL:00000058 TerminateProcess
 * calls 007c7d80 __CrtSetDbgFlag
 * calls 007ca540 __initterm
 * calls 007ca495 FUN_007ca495
 * calls EXTERNAL:00000003 GetCurrentProcess
 * calls 007c8820 __CrtDumpMemoryLeaks
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2003 Debug */

void __cdecl doexit(UINT param_1,int param_2,undefined1 param_3)

{
  HANDLE hProcess;
  uint uVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8c30;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lockexit();
  local_8 = 0;
  if (DAT_009baa60 == 1) {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  _DAT_009baa5c = 1;
  DAT_009baa58 = param_3;
  if (param_2 == 0) {
    if (DAT_009c544c != (int *)0x0) {
      while (DAT_009c5448 = DAT_009c5448 + -1, DAT_009c544c <= DAT_009c5448) {
        if (*DAT_009c5448 != 0) {
          (*(code *)*DAT_009c5448)();
        }
      }
    }
    __initterm(&DAT_008eb184,&DAT_008eb18c);
  }
  __initterm(&DAT_008eb190,&DAT_008eb198);
  if ((DAT_009baa64 == 0) && (uVar1 = __CrtSetDbgFlag(0xffffffff), (uVar1 & 0x20) != 0)) {
    DAT_009baa64 = 1;
    __CrtDumpMemoryLeaks();
  }
  local_8 = 0xffffffff;
  FUN_007ca495();
  FUN_007ca4a1();
  return;
}

