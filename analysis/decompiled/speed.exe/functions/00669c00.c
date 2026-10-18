/* speed.exe 00669c00 FUN_00669c00; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00669c00(void)

{
  float *pfVar1;
  undefined4 extraout_var;
  float fVar2;
  
  pfVar1 = (float *)FUN_00454810(0x44f1273b,0);
  if (pfVar1 == (float *)0x0) {
    pfVar1 = (float *)FUN_006269b0(4,extraout_var);
  }
  fVar2 = *pfVar1;
  if (fVar2 < _DAT_00890968 == (fVar2 == _DAT_00890968)) {
    pfVar1 = (float *)FUN_00454810(0x44f1273b,1);
    if (pfVar1 == (float *)0x0) {
      pfVar1 = (float *)FUN_006269b0(4);
    }
    if (*pfVar1 < _DAT_00890968 == (*pfVar1 == _DAT_00890968)) {
      return (float10)fVar2;
    }
  }
  return (float10)_DAT_00890968;
}

