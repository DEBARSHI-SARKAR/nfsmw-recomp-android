/* speed.exe 0085e220 __getdrive; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000045 GetCurrentDirectoryA
 * calls 007c7290 __free_dbg
 * calls 007d6cb0 __security_check_cookie
 * calls 007c94b0 __chkstk
 * calls 00860240 _toupper
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0085e38a) */
/* Library Function - Single Match
    __getdrive
   
   Library: Visual Studio 2003 Debug */

int __cdecl __getdrive(void)

{
  undefined1 *puVar1;
  byte *local_138;
  DWORD local_130;
  byte local_12c [264];
  undefined4 local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008c7b48;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  local_24 = DAT_00906980;
  local_1c = &stack0xfffffeb8;
  ExceptionList = &local_14;
  local_130 = GetCurrentDirectoryA(0x105,(LPSTR)local_12c);
  local_138 = local_12c;
  puVar1 = local_1c;
  if (0x104 < (int)local_130) {
    local_1c = &stack0xfffffeb8;
    local_8 = 0xffffffff;
    local_138 = &stack0xfffffeb8;
    puVar1 = &stack0xfffffeb8;
    if (local_130 != 0) {
      local_130 = GetCurrentDirectoryA(local_130 + 1,&stack0xfffffeb8);
      local_138 = &stack0xfffffeb8;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  local_20 = 0;
  if ((local_130 != 0) && (local_138[1] == 0x3a)) {
    local_20 = _toupper((uint)*local_138);
    local_20 = local_20 + -0x40;
  }
  ExceptionList = local_14;
  return local_20;
}

