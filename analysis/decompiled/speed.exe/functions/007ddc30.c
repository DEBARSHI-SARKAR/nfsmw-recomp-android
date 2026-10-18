/* speed.exe 007ddc30 ___crtInitCritSecAndSpinCount; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000b GetModuleHandleA
 * calls 007ddd30 ___crtInitCritSecNoSpinCount@8
 * calls EXTERNAL:0000000d GetProcAddress
 */

/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2003 Debug */

int ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd870;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_009bae88 == (code *)0x0) {
    if (DAT_009baa20 == 1) {
      DAT_009bae88 = ___crtInitCritSecNoSpinCount_8;
      ExceptionList = &local_14;
    }
    else {
      ExceptionList = &local_14;
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule == (HMODULE)0x0) {
        DAT_009bae88 = ___crtInitCritSecNoSpinCount_8;
      }
      else {
        DAT_009bae88 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
        if (DAT_009bae88 == (FARPROC)0x0) {
          DAT_009bae88 = ___crtInitCritSecNoSpinCount_8;
        }
      }
    }
  }
  local_8 = 0;
  iVar1 = (*DAT_009bae88)(param_1,param_2);
  ExceptionList = local_14;
  return iVar1;
}

