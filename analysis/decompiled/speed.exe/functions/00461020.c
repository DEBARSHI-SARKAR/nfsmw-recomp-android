/* speed.exe 00461020 FUN_00461020; analysis pseudocode, not buildable source.
 * calls 00460f80 FUN_00460f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00461020(char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0;
  
  bVar2 = false;
  if (*param_1 == '-') {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if (*param_1 != '+') goto LAB_00461036;
  }
  bVar2 = bVar3;
  param_1 = param_1 + 1;
LAB_00461036:
  fVar6 = (float10)_DAT_00890968;
  for (; (cVar1 = *param_1, '/' < cVar1 && (cVar1 < ':')); param_1 = param_1 + 1) {
    fVar6 = fVar6 * (float10)_DAT_00890bf8 + (float10)(cVar1 + -0x30);
  }
  if (*param_1 == '.') {
    fVar7 = (float10)_DAT_00890968;
    fVar8 = (float10)_DAT_0089096c;
    while( true ) {
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
      if ((cVar1 < '0') || ('9' < cVar1)) break;
      fVar8 = fVar8 * (float10)_DAT_00890cd4;
      fVar7 = (float10)(cVar1 + -0x30) * fVar8 + fVar7;
    }
    if (fVar7 != (float10)_DAT_00890968) {
      fVar7 = (float10)(float)((int)(float)fVar7 + 1);
    }
    fVar6 = fVar7 + fVar6;
  }
  if ((*param_1 == 'e') || (*param_1 == 'E')) {
    iVar4 = FUN_00460f80(param_1 + 1);
    fVar6 = (float10)_DAT_0089096c;
    if (7 < iVar4) {
      iVar5 = (iVar4 - 8U >> 3) + 1;
      iVar4 = iVar4 + iVar5 * -8;
      do {
        iVar5 = iVar5 + -1;
        fVar6 = fVar6 * (float10)_DAT_00890bf8 * (float10)_DAT_00890bf8 * (float10)_DAT_00890bf8 *
                (float10)_DAT_00890bf8 * (float10)_DAT_00890bf8 * (float10)_DAT_00890bf8 *
                (float10)_DAT_00890bf8 * (float10)_DAT_00890bf8;
      } while (iVar5 != 0);
    }
    if (iVar4 < 1) {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
        do {
          iVar4 = iVar4 + -1;
          fVar6 = fVar6 * (float10)_DAT_00890cd4;
        } while (iVar4 != 0);
      }
    }
    else {
      do {
        iVar4 = iVar4 + -1;
        fVar6 = fVar6 * (float10)_DAT_00890bf8;
      } while (iVar4 != 0);
    }
    fVar6 = fVar6 * extraout_ST0;
  }
  if (bVar2) {
    fVar6 = -fVar6;
  }
  return fVar6;
}

