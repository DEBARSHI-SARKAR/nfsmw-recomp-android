/* speed.exe 007ded90 __87except; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007da280 __raise_exc
 * calls 007da730 __handle_exc
 * calls 007dac10 __ctrlfp
 * calls 007e4df0 __matherr
 * calls 007daaf0 __set_errno
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __87except
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __87except(int param_1,_exception *param_2,ushort *param_3)

{
  int iVar1;
  int local_a4;
  undefined1 local_a0 [48];
  double local_70;
  uint local_60;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  uint local_18;
  undefined4 local_14;
  
  local_14 = DAT_00906980;
  local_18 = (uint)*param_3;
  local_1c = &local_18;
  local_20 = param_2->type + -1;
  switch(local_20) {
  case 0:
  case 4:
    local_24 = 8;
    break;
  case 1:
    local_24 = 4;
    break;
  case 2:
    local_24 = 0x11;
    break;
  case 3:
    local_24 = 0x12;
    break;
  case 6:
    param_2->type = 1;
  default:
    local_24 = 0;
    break;
  case 7:
    local_24 = 0x10;
  }
  if ((local_24 != 0) && (iVar1 = __handle_exc(local_24,&param_2->retval,local_18), iVar1 == 0)) {
    local_28 = param_1;
    if ((param_1 == 0x10) || ((param_1 == 0x16 || (param_1 == 0x1d)))) {
      local_60 = local_60 & 0xffffffe1 | 3;
      local_70 = param_2->arg2;
    }
    else {
      local_60 = local_60 & 0xfffffffe;
    }
    __raise_exc(local_a0,local_1c,local_24,param_1,&param_2->arg1,&param_2->retval);
  }
  __ctrlfp(*local_1c,0xffff);
  local_a4 = 0;
  if ((param_2->type != 8) && (DAT_00907390 == 0)) {
    local_a4 = __matherr(param_2);
  }
  if (local_a4 == 0) {
    __set_errno(param_2->type);
  }
  return;
}

