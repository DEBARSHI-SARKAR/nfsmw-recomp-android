/* speed.exe 007e3cf0 ___security_error_handler; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007de140 ___crtMessageBoxA
 * calls 007d6cb0 __security_check_cookie
 * calls 007ca340 __exit
 * calls 007c94b0 __chkstk
 * calls EXTERNAL:0000005d GetModuleFileNameA
 * calls 007d2670 __CrtDbgReport
 * calls 007d0cd0 _strlen
 * calls 007d0be0 FUN_007d0be0
 * calls 007d0bd0 FUN_007d0bd0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___security_error_handler
   
   Library: Visual Studio 2003 Debug */

void ___security_error_handler(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  size_t sVar4;
  char *local_140;
  CHAR local_13c [260];
  undefined1 local_38;
  undefined4 local_30;
  CHAR *local_2c;
  LPCSTR local_28;
  char *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bf088;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  local_30 = DAT_00906980;
  local_1c = &stack0xfffffeac;
  if (DAT_009baf48 == (code *)0x0) {
    if (param_1 == 1) {
      local_140 = "Buffer overrun detected!";
      local_24 = 
      "A buffer overrun has been detected which has corrupted the program\'s\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n"
      ;
      local_20 = 0xb9;
    }
    else {
      local_140 = "Unknown security failure detected!";
      local_24 = 
      "A security error of unknown cause has been detected which has\ncorrupted the program\'s internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n"
      ;
      local_20 = 0xd4;
    }
    ExceptionList = &local_14;
    iVar2 = __CrtDbgReport(1,0,0,0,&DAT_008941f8,local_24);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38 = 0;
    DVar3 = GetModuleFileNameA((HMODULE)0x0,local_13c,0x104);
    if (DVar3 == 0) {
      FUN_007d0bd0(local_13c,"<program name unknown>");
    }
    local_2c = local_13c;
    sVar4 = _strlen(local_13c);
    if (0x3c < sVar4 + 0xb) {
      sVar4 = _strlen(local_13c);
      local_2c = local_2c + (sVar4 - 0x31);
      _strncpy(local_2c,"...",3);
    }
    _strlen(local_2c);
    local_28 = &stack0xfffffeac;
    local_1c = &stack0xfffffeac;
    FUN_007d0bd0(&stack0xfffffeac,local_140);
    FUN_007d0be0(local_28,&DAT_008b9150);
    FUN_007d0be0(local_28,"Program: ");
    FUN_007d0be0(local_28,local_2c);
    FUN_007d0be0(local_28,&DAT_008b9150);
    FUN_007d0be0(local_28,local_24);
    ___crtMessageBoxA(local_28,"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    local_8 = 0;
    ExceptionList = &local_14;
    local_1c = &stack0xfffffeac;
    (*DAT_009baf48)(param_1,param_2);
    local_8 = 0xffffffff;
  }
  __exit(3);
  ExceptionList = local_14;
  return;
}

