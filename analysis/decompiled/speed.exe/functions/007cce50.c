/* speed.exe 007cce50 __RTC_Initialize; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2003 Debug */

void __RTC_Initialize(void)

{
  undefined4 *puVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008b8d08;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (puVar1 = &DAT_008c8738; puVar1 < &DAT_008c8738; puVar1 = puVar1 + 1) {
    local_8 = 0;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  ExceptionList = local_14;
  return;
}

