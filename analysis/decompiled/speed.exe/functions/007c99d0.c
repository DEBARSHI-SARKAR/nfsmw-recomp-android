/* speed.exe 007c99d0 FUN_007c99d0; analysis pseudocode, not buildable source.
 * calls 007d9df0 __sptype
 * calls 007def40 __frnd
 * calls 007d9fa0 __handle_qnan1
 * calls 007d7cb0 ___libm_error_support
 * calls 007dac10 __ctrlfp
 * calls 007da070 __except1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007c99d0(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  longlong lVar6;
  
  uVar1 = (uint)((ulonglong)param_1 >> 0x20);
  if ((DAT_009c5310 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = uVar1 >> 0x14;
    lVar6 = CONCAT44(_UNK_008b8be4,_DAT_008b8be0 - (uVar1 >> 0x14 & _DAT_008b8c10));
    if ((uVar2 & 0x800) == 0) {
      if (uVar2 < 0x3ff) {
        return (float10)0;
      }
      if (uVar2 < 0x433) {
        return (float10)(double)(((ulonglong)param_1 >> lVar6) << lVar6);
      }
    }
    else {
      dVar5 = (double)(((ulonglong)param_1 >> lVar6) << lVar6);
      if (uVar2 < 0xbff) {
        return (float10)(double)((-(ulonglong)(param_1 < _DAT_008b8c00) | (ulonglong)_DAT_008b8c00)
                                & _DAT_008b8bf0);
      }
      if (uVar2 < 0xc33) {
        return (float10)(dVar5 - (double)(-(ulonglong)(param_1 < dVar5) & _DAT_008b8bd0));
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support();
    }
    return (float10)param_1;
  }
  uVar2 = __ctrlfp(DAT_00906d50,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype(SUB84(param_1,0),uVar1);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = (float10)__handle_qnan1();
        return fVar4;
      }
    }
    fVar4 = (float10)__except1(8,0xb,param_1,param_1 + _DAT_008942e8,uVar2);
    return fVar4;
  }
  fVar4 = (float10)__frnd(SUB84(param_1,0),uVar1);
  dVar5 = (double)fVar4;
  if (dVar5 == param_1) {
    __ctrlfp(uVar2,0xffff);
    return (float10)dVar5;
  }
  if ((uVar2 & 0x20) != 0) {
    __ctrlfp(uVar2,0xffff);
    return (float10)dVar5;
  }
  fVar4 = (float10)__except1(0x10,0xb,param_1,dVar5,uVar2);
  return fVar4;
}

