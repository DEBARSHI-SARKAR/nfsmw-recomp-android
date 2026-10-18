/* speed.exe 00493010 FUN_00493010; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_00493010(float *param_1,int param_2,float *param_3,int param_4,float *param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (param_2 != 0) {
    if (param_4 == 0) {
      param_4 = 0x10;
    }
    if (param_6 == 0) {
      param_6 = 0x10;
    }
    if (param_3 == param_5) {
      param_3 = param_3 + 2;
      do {
        fVar4 = *param_3;
        pfVar1 = param_3 + 1;
        pfVar2 = param_3 + -2;
        pfVar3 = param_3 + -1;
        fVar5 = param_1[1];
        fVar6 = param_3[-2];
        fVar7 = param_1[5];
        fVar8 = param_3[-1];
        fVar9 = param_1[0xd];
        fVar10 = param_3[1];
        fVar11 = *param_3;
        fVar12 = param_1[9];
        fVar13 = *param_3;
        fVar14 = param_1[10];
        fVar15 = param_1[2];
        fVar16 = param_3[-2];
        fVar17 = param_1[6];
        fVar18 = param_3[-1];
        fVar19 = param_3[1];
        fVar20 = param_1[0xe];
        fVar21 = param_1[0xf];
        fVar22 = param_3[1];
        fVar23 = *param_3;
        fVar24 = param_1[0xb];
        fVar25 = param_1[3];
        fVar26 = param_3[-2];
        fVar27 = param_3[-1];
        param_3 = (float *)((int)param_3 + param_4);
        fVar28 = param_1[7];
        *param_5 = *pfVar3 * param_1[4] +
                   *param_1 * *pfVar2 + param_1[0xc] * *pfVar1 + fVar4 * param_1[8];
        param_5[1] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8 + fVar5 * fVar6;
        param_5[2] = fVar19 * fVar20 + fVar17 * fVar18 + fVar15 * fVar16 + fVar13 * fVar14;
        param_5[3] = fVar27 * fVar28 + fVar25 * fVar26 + fVar23 * fVar24 + fVar21 * fVar22;
        param_2 = param_2 + -1;
        param_5 = (float *)((int)param_5 + param_6);
      } while (param_2 != 0);
      return;
    }
    param_3 = param_3 + 2;
    param_5 = param_5 + 2;
    do {
      param_5[-2] = *param_3 * param_1[8] +
                    param_3[-1] * param_1[4] + param_3[-2] * *param_1 + param_3[1] * param_1[0xc];
      param_5[-1] = param_1[5] * param_3[-1] +
                    param_1[1] * param_3[-2] + param_1[9] * *param_3 + param_3[1] * param_1[0xd];
      *param_5 = param_1[2] * param_3[-2] +
                 *param_3 * param_1[10] + param_3[1] * param_1[0xe] + param_3[-1] * param_1[6];
      pfVar1 = param_3 + -2;
      fVar4 = *param_3;
      pfVar2 = param_3 + 1;
      pfVar3 = param_3 + -1;
      param_3 = (float *)((int)param_3 + param_4);
      param_5[1] = *pfVar3 * param_1[7] +
                   param_1[0xf] * *pfVar2 + param_1[0xb] * fVar4 + param_1[3] * *pfVar1;
      param_5 = (float *)((int)param_5 + param_6);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

