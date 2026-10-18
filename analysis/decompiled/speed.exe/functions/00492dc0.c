/* speed.exe 00492dc0 FUN_00492dc0; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_00492dc0(float *param_1,int param_2,float *param_3,int param_4,float *param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
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
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (param_2 != 0) {
    if (param_4 == 0) {
      param_4 = 0xc;
    }
    if (param_6 == 0) {
      param_6 = 0xc;
    }
    if (param_3 == param_5) {
      param_3 = param_3 + 1;
      do {
        pfVar1 = param_3 + 1;
        fVar3 = *param_3;
        pfVar2 = param_3 + -1;
        fVar4 = *param_3;
        fVar5 = param_1[5];
        fVar6 = param_1[1];
        fVar7 = param_3[-1];
        fVar8 = param_1[9];
        fVar9 = param_3[1];
        fVar10 = param_1[0xd];
        fVar11 = param_1[10];
        fVar12 = param_3[1];
        fVar13 = param_1[6];
        fVar14 = *param_3;
        fVar15 = param_1[2];
        fVar16 = param_3[-1];
        param_3 = (float *)((int)param_3 + param_4);
        fVar17 = param_1[0xe];
        *param_5 = *param_1 * *pfVar2 + fVar3 * param_1[4] + param_1[8] * *pfVar1 + param_1[0xc];
        param_5[1] = fVar8 * fVar9 + fVar6 * fVar7 + fVar4 * fVar5 + fVar10;
        param_5[2] = fVar15 * fVar16 + fVar13 * fVar14 + fVar11 * fVar12 + fVar17;
        param_2 = param_2 + -1;
        param_5 = (float *)((int)param_5 + param_6);
      } while (param_2 != 0);
      return;
    }
    param_5 = param_5 + 2;
    param_3 = param_3 + 1;
    do {
      param_5[-2] = param_3[-1] * *param_1 + *param_3 * param_1[4] + param_3[1] * param_1[8] +
                    param_1[0xc];
      param_5[-1] = param_1[1] * param_3[-1] + *param_3 * param_1[5] + param_3[1] * param_1[9] +
                    param_1[0xd];
      pfVar1 = param_3 + 1;
      pfVar2 = param_3 + -1;
      fVar3 = *param_3;
      param_3 = (float *)((int)param_3 + param_4);
      *param_5 = fVar3 * param_1[6] + *pfVar2 * param_1[2] + param_1[10] * *pfVar1 + param_1[0xe];
      param_5 = (float *)((int)param_5 + param_6);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

