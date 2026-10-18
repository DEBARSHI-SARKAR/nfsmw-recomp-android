/* speed.exe 008463f0 FUN_008463f0; analysis pseudocode, not buildable source.
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 007c64e0 _strncpy
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008463f0(char *param_1,size_t param_2,size_t param_3)

{
  char *_Source;
  char *unaff_EBX;
  char *unaff_EDI;
  char local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  _strncpy(local_104,param_1,0xfe);
  _Source = (char *)FUN_007c97c0(local_104,0x2f);
  if (_Source == (char *)0x0) {
    _strncpy(unaff_EBX,local_104,param_2);
    *unaff_EDI = '\0';
    return;
  }
  *_Source = '\0';
  _strncpy(unaff_EBX,local_104,param_2);
  _strncpy(unaff_EDI,_Source,param_3);
  return;
}

