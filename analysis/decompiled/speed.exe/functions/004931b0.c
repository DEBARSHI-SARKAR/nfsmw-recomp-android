/* speed.exe 004931b0 FUN_004931b0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004931b0(float *param_1,int param_2,float *param_3,float *param_4)

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
  float *pfVar25;
  int iVar26;
  
  if (param_2 != 0) {
    pfVar25 = param_3 + 2;
    if (param_3 == param_4) {
      do {
        param_2 = param_2 + -1;
        fVar1 = param_1[0xd];
        fVar2 = pfVar25[1];
        fVar3 = param_1[9];
        fVar4 = *pfVar25;
        fVar5 = param_1[1];
        fVar6 = pfVar25[-2];
        fVar7 = pfVar25[-1];
        fVar8 = param_1[5];
        fVar9 = param_1[6];
        fVar10 = pfVar25[-1];
        fVar11 = param_1[0xe];
        fVar12 = pfVar25[1];
        fVar13 = param_1[10];
        fVar14 = *pfVar25;
        fVar15 = param_1[2];
        fVar16 = pfVar25[-2];
        fVar17 = *pfVar25;
        fVar18 = param_1[0xb];
        fVar19 = param_1[3];
        fVar20 = pfVar25[-2];
        fVar21 = param_1[7];
        fVar22 = pfVar25[-1];
        fVar23 = param_1[0xf];
        fVar24 = pfVar25[1];
        *param_4 = param_1[8] * *pfVar25 +
                   *param_1 * pfVar25[-2] + param_1[4] * pfVar25[-1] + param_1[0xc] * pfVar25[1];
        param_4[1] = fVar7 * fVar8 + fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
        param_4[2] = fVar15 * fVar16 + fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10;
        param_4[3] = fVar23 * fVar24 + fVar21 * fVar22 + fVar19 * fVar20 + fVar17 * fVar18;
        pfVar25 = pfVar25 + 4;
        param_4 = param_4 + 4;
      } while (param_2 != 0);
      return;
    }
    iVar26 = (int)param_4 - (int)param_3;
    do {
      param_2 = param_2 + -1;
      *param_4 = param_1[4] * pfVar25[-1] +
                 param_1[8] * *pfVar25 + param_1[0xc] * pfVar25[1] + pfVar25[-2] * *param_1;
      *(float *)((int)pfVar25 + iVar26 + -4) =
           pfVar25[-1] * param_1[5] +
           param_1[9] * *pfVar25 + param_1[0xd] * pfVar25[1] + param_1[1] * pfVar25[-2];
      *(float *)((int)pfVar25 + iVar26) =
           param_1[10] * *pfVar25 +
           param_1[0xe] * pfVar25[1] + pfVar25[-2] * param_1[2] + param_1[6] * pfVar25[-1];
      *(float *)((int)pfVar25 + iVar26 + 4) =
           param_1[7] * pfVar25[-1] +
           param_1[3] * pfVar25[-2] + *pfVar25 * param_1[0xb] + pfVar25[1] * param_1[0xf];
      pfVar25 = pfVar25 + 4;
      param_4 = param_4 + 4;
    } while (param_2 != 0);
  }
  return;
}

