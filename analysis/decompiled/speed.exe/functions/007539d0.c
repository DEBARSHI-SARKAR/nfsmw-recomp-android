/* speed.exe 007539d0 FUN_007539d0; analysis pseudocode, not buildable source.
 * calls 0074b5c0 FUN_0074b5c0
 * calls 0078eba0 FUN_0078eba0
 * calls 0073c9f0 FUN_0073c9f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_007539d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  float10 fVar5;
  float fVar6;
  
  if ((DAT_009b0fb9 == '\0') && (cVar3 = FUN_0078eba0(param_1), cVar3 == '\0')) {
    fVar5 = (float10)_DAT_009b0a48;
    if ((float10)_DAT_00890968 < fVar5) {
      return fVar5;
    }
    if (fVar5 < (float10)_DAT_00890968) {
      return (float10)_DAT_00890968;
    }
  }
  fVar5 = (float10)FUN_0073c9f0(param_2,param_3);
  fVar6 = (float)fVar5;
  if ((DAT_009b0fb9 != '\0') || (cVar3 = FUN_0078eba0(), cVar3 != '\0')) {
    fVar6 = fVar6 * fVar6;
  }
  iVar2 = DAT_009b2a9c;
  if (DAT_009b2a9c != 0) {
    _DAT_009b2aa8 = FUN_0074b5c0(param_2,param_3);
    fVar1 = _DAT_00890968;
    if ((_DAT_009b2aa8 != 0) &&
       (pfVar4 = (float *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + _DAT_009b2aa8),
       pfVar4 != (float *)0x0)) {
      fVar1 = *pfVar4;
    }
    if (fVar6 <= fVar1) {
      if ((_DAT_009b2aa8 != 0) &&
         (pfVar4 = (float *)(**(int **)(iVar2 + 0x10) + _DAT_009b2aa8), pfVar4 != (float *)0x0)) {
        return (float10)*pfVar4;
      }
      return (float10)_DAT_00890968;
    }
  }
  return (float10)_DAT_00890968;
}

