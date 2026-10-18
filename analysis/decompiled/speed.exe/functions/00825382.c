/* speed.exe 00825382 FUN_00825382; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00825382(int param_1,int param_2,int param_3,float *param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  
  if (param_1 < 1) {
    fVar3 = 0.0;
    param_1 = -param_1;
    fVar2 = _DAT_0089096c / (float)param_5;
  }
  else {
    fVar3 = 1.0;
    fVar2 = _DAT_00890da8 / (float)param_5;
  }
  if (param_1 < param_5) {
    pfVar4 = param_4;
    iVar5 = param_1;
    do {
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *pfVar4 = fVar3 * *(float *)(param_2 + iVar1) +
                (1.0 - fVar3) * *(float *)((param_2 - (int)param_4) + (int)pfVar4);
      pfVar4 = pfVar4 + 1;
      fVar3 = fVar2 + fVar3;
    } while (iVar5 < param_5);
  }
  iVar5 = 0;
  if (0 < param_1) {
    pfVar4 = param_4 + (param_5 - param_1);
    do {
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *pfVar4 = fVar3 * *(float *)(param_3 + iVar1) +
                (1.0 - fVar3) * *(float *)((int)pfVar4 + (param_2 - (int)param_4));
      pfVar4 = pfVar4 + 1;
      fVar3 = fVar2 + fVar3;
    } while (iVar5 < param_1);
  }
  return;
}

