/* speed.exe 007daa50 __umatherr; analysis pseudocode, not buildable source.
 * calls 007dac10 __ctrlfp
 * calls 007e4df0 __matherr
 * calls 007daaf0 __set_errno
 * calls 007dab30 __get_fname
 */

/* Library Function - Single Match
    __umatherr
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

float10 __umatherr(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  double dVar1;
  int iVar2;
  _exception local_24;
  
  local_24.name = (char *)__get_fname(param_2);
  if (local_24.name == (char *)0x0) {
    __ctrlfp(param_9,0xffff);
    __set_errno(param_1);
    dVar1 = (double)CONCAT44(param_8,param_7);
  }
  else {
    local_24.type = param_1;
    local_24.arg1._0_4_ = param_3;
    local_24.arg1._4_4_ = param_4;
    local_24.arg2._0_4_ = param_5;
    local_24.arg2._4_4_ = param_6;
    local_24.retval._0_4_ = param_7;
    local_24.retval._4_4_ = param_8;
    __ctrlfp(param_9,0xffff);
    iVar2 = __matherr(&local_24);
    if (iVar2 == 0) {
      __set_errno(param_1);
    }
    dVar1 = (double)CONCAT44(local_24.retval._4_4_,local_24.retval._0_4_);
  }
  return (float10)dVar1;
}

