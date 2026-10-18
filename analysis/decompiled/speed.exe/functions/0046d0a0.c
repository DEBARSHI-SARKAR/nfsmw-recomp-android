/* speed.exe 0046d0a0 FUN_0046d0a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0046d0a0(float *param_1,int param_2,char *param_3,int param_4)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  float *pfVar4;
  
  pcVar2 = (char *)param_1;
  if (((*(char *)param_1 != *param_3) || (*(char *)((int)param_1 + 4) != param_3[4])) ||
     (*(char *)((int)param_1 + 5) != param_3[5])) {
    return 0;
  }
  iVar3 = 0;
  pfVar4 = (float *)((int)param_1 + param_2 * 0xc + 0x1c);
  param_1 = (float *)(param_3 + param_4 * 0xc + 0x1c);
  while( true ) {
    fVar1 = *pfVar4 - *param_1;
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    if (_DAT_00890d60 < fVar1) {
      return 0;
    }
    fVar1 = *(float *)(pcVar2 + (param_2 * 3 + iVar3) * 4 + 0x34) -
            *(float *)(param_3 + (param_4 * 3 + iVar3) * 4 + 0x34);
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    if (_DAT_00890d60 < fVar1) break;
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
    pfVar4 = pfVar4 + 1;
    if (2 < iVar3) {
      return 1;
    }
  }
  return 0;
}

