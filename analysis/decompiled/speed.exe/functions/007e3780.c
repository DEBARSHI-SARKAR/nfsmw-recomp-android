/* speed.exe 007e3780 ___ansicp; analysis pseudocode, not buildable source.
 * calls 007c6270 _atol
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:0000008a GetLocaleInfoA
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2003 Debug */

long ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_14 [6];
  undefined1 local_e;
  undefined4 local_c;
  long local_8;
  
  local_c = DAT_00906980;
  local_e = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_14,6);
  if (iVar1 == 0) {
    local_8 = -1;
  }
  else {
    local_8 = _atol(local_14);
  }
  return local_8;
}

