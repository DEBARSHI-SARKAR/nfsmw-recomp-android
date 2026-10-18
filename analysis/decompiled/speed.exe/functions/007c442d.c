/* speed.exe 007c442d FUN_007c442d; analysis pseudocode, not buildable source.
 * calls 007ce3ec FUN_007ce3ec
 * calls 007ce377 __startOneArgErrorHandling
 * calls 007ce3d5 FUN_007ce3d5
 * calls 007ce46b __math_exit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007c442d(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_009068f0, param_1 != 0)) {
      fVar1 = (float10)FUN_007ce3ec();
    }
LAB_007c44bc:
    if (DAT_009ba9f0 == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_007ce3d5();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else {
      fVar1 = _DAT_009068f0;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_007c44bc;
      if ((param_2 & 0x80000000) == 0) {
        fVar1 = (float10)0;
      }
      else {
        fVar1 = (float10)3.141592653589793;
      }
    }
    if (DAT_009ba9f0 == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}

