/* speed.exe 007ce000 __cftog; analysis pseudocode, not buildable source.
 * calls 007deaa0 __fptostr
 * calls 007cdec0 __cftof2
 * calls 007d6cb0 __security_check_cookie
 * calls 007deba0 __fltout2
 * calls 007cdcd0 __cftoe2
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __cftog
   
   Library: Visual Studio 2003 Debug */

void __cftog(double *param_1,int param_2,size_t param_3,undefined4 param_4)

{
  bool bVar1;
  char *pcVar2;
  uint3 in_stack_ffffffbc;
  STRFLT _PtFlt;
  _strflt local_3c;
  _strflt *local_2c;
  int local_28;
  char local_24 [24];
  undefined4 local_c;
  char *local_8;
  
  local_c = DAT_00906980;
  _PtFlt = (STRFLT)(uint)in_stack_ffffffbc;
  local_2c = &local_3c;
  __fltout2((_CRT_DOUBLE)*param_1,&local_3c,local_24,(size_t)_PtFlt);
  local_28 = local_2c->decpt + -1;
  local_8 = (char *)((uint)(local_2c->sign == 0x2d) + param_2);
  __fptostr(local_8,param_3,(int)local_2c,_PtFlt);
  bVar1 = local_28 < local_2c->decpt + -1;
  local_28 = local_2c->decpt + -1;
  if ((local_28 < -4) || ((int)param_3 <= local_28)) {
    __cftoe2(param_2,param_3,param_4,local_2c,1);
  }
  else {
    pcVar2 = local_8;
    if (bVar1) {
      do {
        local_8 = pcVar2;
        pcVar2 = local_8 + 1;
      } while (*local_8 != '\0');
      local_8[-1] = '\0';
      local_8 = local_8 + 1;
    }
    __cftof2(param_2,param_3,local_2c,1);
  }
  return;
}

