/* speed.exe 0066c9a0 FUN_0066c9a0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0066c9a0(void)

{
  float fVar1;
  float *pfVar2;
  
  pfVar2 = (float *)FUN_00454810(0xaacbe2e7,0);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_006269b0(4);
  }
  fVar1 = *pfVar2;
  pfVar2 = (float *)FUN_00454810(0xaacbe2e7,1);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_006269b0(4);
  }
  if ((fVar1 < *pfVar2) && (_DAT_00890968 < *pfVar2)) {
    return 1;
  }
  return 0;
}

