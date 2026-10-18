/* speed.exe 00763ff0 FUN_00763ff0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00763ff0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  
  pfVar4 = param_2;
  pcVar1 = (char *)((int)param_2 + 0x51);
  if ((*pcVar1 != '\0') || (*(char *)((int)param_3 + 0x51) != '\0')) {
    param_2 = (float *)0x749c31c8;
    fVar2 = _DAT_008b5b2c;
    if (*pcVar1 != '\0') {
      fVar2 = (param_1[2] - pfVar4[2]) * (param_1[2] - pfVar4[2]) +
              (param_1[1] - pfVar4[1]) * (param_1[1] - pfVar4[1]) +
              (*param_1 - *pfVar4) * (*param_1 - *pfVar4);
    }
    if (*(char *)((int)param_3 + 0x51) != '\0') {
      param_2 = (float *)((param_1[2] - param_3[2]) * (param_1[2] - param_3[2]) +
                         (param_1[1] - param_3[1]) * (param_1[1] - param_3[1]) +
                         (*param_1 - *param_3) * (*param_1 - *param_3));
    }
    iVar3 = 0x16;
    if ((float)param_2 <= fVar2) {
      pfVar4 = param_3;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_4 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      param_4 = param_4 + 1;
    }
  }
  return;
}

