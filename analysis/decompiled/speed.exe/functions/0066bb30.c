/* speed.exe 0066bb30 FUN_0066bb30; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0066bb30(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  
  pfVar1 = *(float **)(param_1 + 8);
  if ((pfVar1[6] <= _DAT_00890968) && (*pfVar1 <= _DAT_00890968)) {
    return 0;
  }
  uVar2 = 1;
  if (pfVar1[3] <= _DAT_00890968) {
    uVar2 = 2;
  }
  return uVar2;
}

