/* speed.exe 00691b30 FUN_00691b30; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00691b30(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  
  iVar1 = *(int *)(param_1 + 0x160);
  uVar3 = FUN_00452940();
  if (param_2 < uVar3) {
    pfVar4 = (float *)(iVar1 + 8 + param_2 * 4);
  }
  else {
    pfVar4 = (float *)FUN_006269b0(4);
  }
  iVar1 = *(int *)(param_1 + 0x160);
  fVar2 = *pfVar4;
  uVar3 = FUN_00452940();
  if (param_3 < uVar3) {
    pfVar4 = (float *)(iVar1 + 8 + param_3 * 4);
  }
  else {
    pfVar4 = (float *)FUN_006269b0(4);
  }
  if ((_DAT_00890968 < fVar2) && (_DAT_008aabe0 < *pfVar4)) {
    return (float10)fVar2 / (float10)*pfVar4;
  }
  return (float10)_DAT_00890968;
}

