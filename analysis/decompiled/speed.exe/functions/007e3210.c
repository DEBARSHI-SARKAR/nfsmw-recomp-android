/* speed.exe 007e3210 _ProcessCodePage; analysis pseudocode, not buildable source.
 * calls 007c6270 _atol
 * calls 007d6cb0 __security_check_cookie
 * calls 007d1120 _strcmp
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2003 Debug */

long _ProcessCodePage(char *param_1)

{
  int iVar1;
  long lVar2;
  char local_10 [8];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,(char *)&PTR_LAB_008beeb4), iVar1 == 0)) {
    iVar1 = (*DAT_009baf44)(DAT_009baf2c,0x1004,local_10,8);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = local_10;
  }
  else {
    iVar1 = _strcmp(param_1,(char *)&PTR_LAB_008beeb0);
    if (iVar1 == 0) {
      iVar1 = (*DAT_009baf44)(DAT_009baf2c,0xb,local_10,8);
      if (iVar1 == 0) {
        return 0;
      }
      param_1 = local_10;
    }
  }
  lVar2 = _atol(param_1);
  return lVar2;
}

