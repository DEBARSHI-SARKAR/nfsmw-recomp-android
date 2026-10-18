/* speed.exe 005dc0f0 FUN_005dc0f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005dc0f0(char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)_DAT_00890968;
  pcVar3 = param_1 + (*param_1 == '-');
  cVar1 = *pcVar3;
  fVar6 = (float10)_DAT_0089096c;
  bVar2 = false;
  do {
    if (cVar1 == '\0') {
      return fVar5;
    }
    if (*pcVar3 == '.') {
      bVar2 = true;
    }
    else {
      if (bVar2) {
        fVar6 = fVar6 * (float10)_DAT_00890cd4;
      }
      else {
        fVar5 = fVar5 * (float10)_DAT_00890bf8;
      }
      iVar4 = *pcVar3 + -0x30;
      if (iVar4 < 1) {
        iVar4 = 0;
LAB_005dc15b:
        param_1 = (char *)iVar4;
      }
      else {
        param_1 = (char *)0x9;
        if (iVar4 < 10) goto LAB_005dc15b;
      }
      fVar5 = (float10)(int)param_1 * fVar6 + fVar5;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  } while( true );
}

