/* speed.exe 00492ef0 FUN_00492ef0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00492ef0(float *param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float *pfVar16;
  
  if (param_2 != 0) {
    if (param_3 == param_4) {
      pfVar15 = param_3 + 1;
      do {
        param_2 = param_2 + -1;
        fVar1 = param_1[9];
        fVar2 = pfVar15[1];
        fVar3 = *pfVar15;
        fVar4 = param_1[5];
        fVar5 = param_1[1];
        fVar6 = pfVar15[-1];
        fVar7 = param_1[0xd];
        fVar8 = param_1[2];
        fVar9 = pfVar15[-1];
        fVar10 = param_1[10];
        fVar11 = pfVar15[1];
        fVar12 = *pfVar15;
        fVar13 = param_1[6];
        fVar14 = param_1[0xe];
        *param_4 = *param_1 * pfVar15[-1] + param_1[8] * pfVar15[1] + *pfVar15 * param_1[4] +
                   param_1[0xc];
        param_4[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
        param_4[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
        pfVar15 = pfVar15 + 3;
        param_4 = param_4 + 3;
      } while (param_2 != 0);
      return;
    }
    pfVar15 = param_3 + 2;
    pfVar16 = param_4;
    do {
      param_2 = param_2 + -1;
      *pfVar16 = pfVar15[-1] * param_1[4] + param_1[8] * *pfVar15 + pfVar15[-2] * *param_1 +
                 param_1[0xc];
      *(float *)((int)pfVar15 + ((int)param_4 - (int)param_3) + -4) =
           pfVar15[-2] * param_1[1] + param_1[5] * pfVar15[-1] + param_1[9] * *pfVar15 +
           param_1[0xd];
      *(float *)((int)pfVar15 + ((int)param_4 - (int)param_3)) =
           pfVar15[-1] * param_1[6] + *pfVar15 * param_1[10] + param_1[2] * pfVar15[-2] +
           param_1[0xe];
      pfVar15 = pfVar15 + 3;
      pfVar16 = pfVar16 + 3;
    } while (param_2 != 0);
  }
  return;
}

