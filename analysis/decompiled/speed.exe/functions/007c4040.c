/* speed.exe 007c4040 entry; analysis pseudocode, not buildable source.
 * calls 007cc3a0 __setargv
 * calls 007cca20 __ioinit
 * calls 007ca2c0 __cinit
 * calls 007cc220 __setenvp
 * calls 007ca320 _exit
 * calls 007c94b0 __chkstk
 * calls 007c4240 __amsg_exit
 * calls EXTERNAL:00000051 GetCommandLineA
 * calls EXTERNAL:00000020 GetVersionExA
 * calls 007cd4b0 __heap_init
 * calls 007cce50 __RTC_Initialize
 * calls 00666590 FUN_00666590
 * calls 007ca360 __cexit
 * calls 007c42a0 check_managed_app
 * calls 007ccf60 __mtinit
 * calls 007c4270 fast_error_exit
 * calls 007cc800 ___crtGetEnvironmentStringsA
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int entry(void)

{
  int iVar1;
  int iVar2;
  _OSVERSIONINFOA local_d4;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b80a0;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  builtin_memcpy(local_d4.szCSDVersion + 0x7c,"p@|",4);
  local_d4.dwOSVersionInfoSize = 0x94;
  ExceptionList = &local_14;
  GetVersionExA(&local_d4);
  DAT_009baa20 = local_d4.dwPlatformId;
  DAT_009baa2c = local_d4.dwMajorVersion;
  _DAT_009baa30 = local_d4.dwMinorVersion;
  DAT_009baa24 = local_d4.dwBuildNumber & 0x7fff;
  if (local_d4.dwPlatformId != 2) {
    DAT_009baa24 = DAT_009baa24 | 0x8000;
  }
  _DAT_009baa28 = local_d4.dwMajorVersion * 0x100 + local_d4.dwMinorVersion;
  iVar1 = check_managed_app();
  iVar2 = __heap_init();
  if (iVar2 == 0) {
    fast_error_exit(0x1c);
  }
  iVar2 = __mtinit();
  if (iVar2 == 0) {
    fast_error_exit(0x10);
  }
  __RTC_Initialize();
  local_8 = 0;
  iVar2 = __ioinit();
  if (iVar2 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_009c6468 = GetCommandLineA();
  DAT_009ba9e4 = ___crtGetEnvironmentStringsA();
  iVar2 = __setargv();
  if (iVar2 < 0) {
    __amsg_exit(8);
  }
  iVar2 = __setenvp();
  if (iVar2 < 0) {
    __amsg_exit(9);
  }
  iVar2 = __cinit(1);
  if (iVar2 != 0) {
    __amsg_exit(iVar2);
  }
  DAT_009baa44 = DAT_009baa40;
  iVar2 = FUN_00666590(DAT_009baa34,DAT_009baa38,DAT_009baa40);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _exit(iVar2);
  }
  __cexit();
  ExceptionList = local_14;
  return iVar2;
}

