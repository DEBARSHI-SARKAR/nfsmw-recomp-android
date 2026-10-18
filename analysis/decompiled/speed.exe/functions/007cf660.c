/* speed.exe 007cf660 __d_inttype; analysis pseudocode, not buildable source.
 * calls 007def40 __frnd
 * calls 007ca1f0 __fpclass
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __d_inttype
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined4 __d_inttype(double param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar3 = (float10)__frnd(param_1);
    if ((double)fVar3 == param_1) {
      fVar3 = (float10)__frnd(param_1 / _DAT_008bcb70);
      if ((float10)param_1 / (float10)_DAT_008bcb70 == fVar3) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

