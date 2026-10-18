/* speed.exe 004063d0 FUN_004063d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_004063d0(float param_1,int param_2,char param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  
  pfVar5 = (float *)0x0;
  pfVar4 = (float *)&DAT_008ebc68;
  if (param_3 == '\0') {
    pfVar4 = (float *)&DAT_008eb5e8;
  }
  fVar2 = *pfVar4;
  fVar3 = _DAT_00890cd8;
  while (_DAT_00890cd4 < fVar2) {
    fVar2 = param_1 - *pfVar4;
    if (((_DAT_00890968 < fVar2) && ((int)pfVar4[1] <= param_2)) && (fVar2 < fVar3)) {
      pfVar5 = pfVar4;
      fVar3 = fVar2;
    }
    pfVar1 = pfVar4 + 0x1a;
    pfVar4 = pfVar4 + 0x1a;
    fVar2 = *pfVar1;
  }
  return pfVar5;
}

