/* speed.exe 007c9e60 __nextafter; analysis pseudocode, not buildable source.
 * calls 007da000 __handle_qnan2
 * calls 007d9d20 __set_exp
 * calls 007dac10 __ctrlfp
 * calls 007d9e70 __decomp
 * calls 007da170 __except2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __nextafter
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

double __cdecl __nextafter(double _X,double _Y)

{
  int iVar1;
  float10 fVar2;
  int local_28;
  double local_24;
  int local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  local_8 = __ctrlfp();
  if (((_X._6_2_ & 0x7ff0) == 0x7ff0) || ((_Y._6_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((_X._6_2_ & 0x7ff8) == 0x7ff0) &&
        ((((ulonglong)_X & 0x7ffff00000000) != 0 || (_X._0_4_ != 0)))) ||
       (((_Y._6_2_ & 0x7ff8) == 0x7ff0 &&
        ((((ulonglong)_Y & 0x7ffff00000000) != 0 || (_Y._0_4_ != 0)))))) {
      fVar2 = (float10)__except2(8,0x26,_X,_Y,_X + _Y,local_8);
      goto LAB_007ca184;
    }
    if (((_X._6_2_ & 0x7ff8) == 0x7ff8) || ((_Y._6_2_ & 0x7ff8) == 0x7ff8)) {
      fVar2 = (float10)__handle_qnan2();
      goto LAB_007ca184;
    }
  }
  if (_Y == _X) {
    __ctrlfp();
    fVar2 = (float10)_X;
  }
  else {
    if (_X == _DAT_008942e0) {
      if (_Y <= _X) {
        local_14 = -4.94065645841247e-324;
      }
      else {
        local_14 = 4.94065645841247e-324;
      }
    }
    iVar1 = (int)((ulonglong)_X >> 0x20);
    if (((_DAT_008942e0 < _X) && (_Y < _X)) || ((_X < _DAT_008942e0 && (_X < _Y)))) {
      if (_X._0_4_ == 0) {
        iVar1 = iVar1 + -1;
      }
      local_14 = (double)CONCAT44(iVar1,_X._0_4_ + -1);
    }
    else if (((_DAT_008942e0 < _X) && (_X < _Y)) || ((_X < _DAT_008942e0 && (_Y < _X)))) {
      local_14 = (double)CONCAT44(iVar1,_X._0_4_ + 1);
      if (_X._0_4_ + 1 == 0) {
        local_14 = (double)((ulonglong)(iVar1 + 1) << 0x20);
      }
    }
    if ((((ulonglong)local_14 & 0x7ff0000000000000) == 0) &&
       ((((ulonglong)local_14 & 0xfffff00000000) != 0 || ((int)local_14 != 0)))) {
      fVar2 = (float10)__decomp(local_14,&local_18);
      local_24 = (double)fVar2;
      fVar2 = (float10)__set_exp(local_24,local_18 + 0x600);
      local_14 = (double)fVar2;
      fVar2 = (float10)__except2(0x12,0x26,_X,_Y,local_14,local_8);
    }
    else if (((local_14._4_4_ == 0x7ff00000) && ((int)local_14 == 0)) ||
            ((local_14._4_4_ == -0x100000 && ((int)local_14 == 0)))) {
      fVar2 = (float10)__decomp(local_14,&local_28);
      fVar2 = (float10)__set_exp((double)fVar2,local_28 + -0x600);
      local_14 = (double)fVar2;
      fVar2 = (float10)__except2(0x11,0x26,_X,_Y,local_14,local_8);
    }
    else {
      __ctrlfp();
      fVar2 = (float10)local_14;
    }
  }
LAB_007ca184:
  return (double)fVar2;
}

