/* speed.exe 007cced0 __RTC_Terminate; analysis pseudocode, not buildable source.
 */

/* Library Function - Multiple Matches With Different Base Names
    __RTC_Initialize
    __RTC_Terminate
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __RTC_Terminate(void)

{
  undefined4 *puVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008b8d18;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (puVar1 = &DAT_008c8740; puVar1 < &DAT_008c8740; puVar1 = puVar1 + 1) {
    local_8 = 0;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  ExceptionList = local_14;
  return;
}

