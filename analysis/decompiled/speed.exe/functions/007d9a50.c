/* speed.exe 007d9a50 _ldexp; analysis pseudocode, not buildable source.
 * calls 007da170 __except2
 * calls 007dac10 __ctrlfp
 * calls 007da000 __handle_qnan2
 * calls 007d9e70 __decomp
 * calls 007d9df0 __sptype
 * calls 007c9cb0 __copysign
 * calls 007d9d20 __set_exp
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _ldexp
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

double __cdecl _ldexp(double _X,int _Y)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  int local_3c;
  int local_10;
  int local_8;
  
  uVar1 = __ctrlfp(0x133f,0xffff);
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    if (_X == _DAT_008942e0) {
      __ctrlfp(uVar1,0xffff);
      fVar3 = (float10)_X;
    }
    else {
      fVar3 = (float10)__decomp(_X,&local_8);
      dVar4 = (double)fVar3;
      if (_Y < 0) {
        local_3c = -_Y;
      }
      else {
        local_3c = _Y;
      }
      if (local_3c <= 0x7fffffff) {
        local_10 = local_8 + _Y;
      }
      else {
        local_10 = _Y;
      }
      if (local_10 < 0xa01) {
        if (local_10 < 0x401) {
          if (local_10 < -0x9fd) {
            fVar3 = (float10)__except2(0x12,0x19,_X,(double)_Y,dVar4 * _DAT_008942e0,uVar1);
          }
          else if (local_10 < -0x3fd) {
            fVar3 = (float10)__set_exp(dVar4,local_10 + 0x600);
            fVar3 = (float10)__except2(0x12,0x19,_X,(double)_Y,(double)fVar3,uVar1);
          }
          else {
            fVar3 = (float10)__set_exp(dVar4,local_10);
            __ctrlfp(uVar1,0xffff);
            fVar3 = (float10)(double)fVar3;
          }
        }
        else {
          fVar3 = (float10)__set_exp(dVar4,local_10 + -0x600);
          fVar3 = (float10)__except2(0x11,0x19,_X,(double)_Y,(double)fVar3,uVar1);
        }
      }
      else {
        dVar4 = __copysign(_DAT_00906ec0,dVar4);
        fVar3 = (float10)__except2(0x11,0x19,_X,(double)_Y,SUB84(dVar4,0),
                                   (int)((ulonglong)dVar4 >> 0x20),uVar1);
      }
    }
    goto LAB_007d9d18;
  }
  iVar2 = __sptype(_X);
  if (0 < iVar2) {
    if (iVar2 < 3) {
      __ctrlfp(uVar1,0xffff);
      fVar3 = (float10)_X;
      goto LAB_007d9d18;
    }
    if (iVar2 == 3) {
      fVar3 = (float10)__handle_qnan2();
      goto LAB_007d9d18;
    }
  }
  fVar3 = (float10)__except2(8,0x19,_X,(double)_Y,_X + _DAT_008942e8,uVar1);
LAB_007d9d18:
  return (double)fVar3;
}

