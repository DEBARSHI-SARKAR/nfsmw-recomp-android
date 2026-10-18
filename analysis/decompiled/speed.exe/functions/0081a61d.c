/* speed.exe 0081a61d FUN_0081a61d; analysis pseudocode, not buildable source.
 * calls 0081f81a FUN_0081f81a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0081a61d(char *param_1)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  pcVar6 = param_1;
  if (*(int *)(param_1 + 8) < 1) {
    iVar7 = 0;
  }
  else {
    fVar4 = _DAT_009c1b54 / (float)*(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    fVar5 = (float)iVar7;
    if (_DAT_0089096c < *(float *)(param_1 + 4) != (_DAT_0089096c == *(float *)(param_1 + 4))) {
      fVar2 = *(float *)(param_1 + 4);
      do {
        fVar2 = fVar2 - _DAT_0089096c;
      } while (_DAT_0089096c <= fVar2);
      *(float *)(param_1 + 4) = fVar2;
    }
    cVar3 = *param_1;
    if (cVar3 == '\0') {
      iVar8 = FUN_0081f81a((int)ROUND(*(float *)(param_1 + 4) * _DAT_00898760));
      param_1 = (char *)((float)iVar8 * (float)iVar7 * _DAT_00890980);
    }
    else if (cVar3 == '\x01') {
      pfVar1 = (float *)(param_1 + 4);
      param_1 = (char *)fVar5;
      if (*pfVar1 < _DAT_008933d4) {
        param_1 = (char *)0x0;
      }
    }
    else if (cVar3 == '\x02') {
      param_1 = (char *)(fVar5 * *(float *)(param_1 + 4));
    }
    else if (*(float *)(param_1 + 4) < _DAT_008933d4) {
      param_1 = (char *)(fVar5 * *(float *)(param_1 + 4) + fVar5 * *(float *)(param_1 + 4));
    }
    else {
      fVar5 = (1.0 - *(float *)(param_1 + 4)) * fVar5;
      param_1 = (char *)(fVar5 + fVar5);
    }
    *(float *)(pcVar6 + 4) = fVar4 + *(float *)(pcVar6 + 4);
    iVar7 = (int)ROUND((float)param_1);
  }
  return iVar7;
}

