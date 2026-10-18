/* speed.exe 007dd8c0 setSBUpLow; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:00000079 GetCPInfo
 * calls 007e2560 ___crtGetStringTypeA
 * calls 007d4090 ___crtLCMapStringA
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _setSBUpLow
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBUpLow(void)

{
  BOOL BVar1;
  UINT in_stack_fffffad4;
  byte local_526 [14];
  uint local_518;
  undefined1 local_514 [260];
  byte *local_410;
  undefined1 local_40c [256];
  undefined1 local_30c [256];
  ushort local_20c [258];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  BVar1 = GetCPInfo((UINT)DAT_009c51c4,(LPCPINFO)&stack0xfffffad4);
  if (BVar1 == 1) {
    for (local_518 = 0; local_518 < 0x100; local_518 = local_518 + 1) {
      local_514[local_518] = (undefined1)local_518;
    }
    local_514[0] = 0x20;
    for (local_410 = local_526; *local_410 != 0; local_410 = local_410 + 2) {
      for (local_518 = (uint)*local_410; local_518 <= local_410[1]; local_518 = local_518 + 1) {
        local_514[local_518] = 0x20;
      }
    }
    ___crtGetStringTypeA
              ((_locale_t)0x1,(DWORD)local_514,(LPCSTR)0x100,(int)local_20c,DAT_009c51c4,
               (int)DAT_009c50a0,0);
    ___crtLCMapStringA(DAT_009c50a0,(LPCWSTR)0x100,(DWORD)local_514,(LPCSTR)0x100,(int)local_30c,
                       (LPSTR)0x100,(int)DAT_009c51c4,0,in_stack_fffffad4);
    ___crtLCMapStringA(DAT_009c50a0,(LPCWSTR)0x200,(DWORD)local_514,(LPCSTR)0x100,(int)local_40c,
                       (LPSTR)0x100,(int)DAT_009c51c4,0,in_stack_fffffad4);
    for (local_518 = 0; local_518 < 0x100; local_518 = local_518 + 1) {
      if ((local_20c[local_518] & 1) == 0) {
        if ((local_20c[local_518] & 2) == 0) {
          (&DAT_009c51e0)[local_518] = 0;
        }
        else {
          (&DAT_009c50c1)[local_518] = (&DAT_009c50c1)[local_518] | 0x20;
          (&DAT_009c51e0)[local_518] = local_40c[local_518];
        }
      }
      else {
        (&DAT_009c50c1)[local_518] = (&DAT_009c50c1)[local_518] | 0x10;
        (&DAT_009c51e0)[local_518] = local_30c[local_518];
      }
    }
  }
  else {
    for (local_518 = 0; local_518 < 0x100; local_518 = local_518 + 1) {
      if ((local_518 < 0x41) || (0x5a < local_518)) {
        if ((local_518 < 0x61) || (0x7a < local_518)) {
          (&DAT_009c51e0)[local_518] = 0;
        }
        else {
          (&DAT_009c50c1)[local_518] = (&DAT_009c50c1)[local_518] | 0x20;
          (&DAT_009c51e0)[local_518] = (char)local_518 + -0x20;
        }
      }
      else {
        (&DAT_009c50c1)[local_518] = (&DAT_009c50c1)[local_518] | 0x10;
        (&DAT_009c51e0)[local_518] = (char)local_518 + ' ';
      }
    }
  }
  return;
}

