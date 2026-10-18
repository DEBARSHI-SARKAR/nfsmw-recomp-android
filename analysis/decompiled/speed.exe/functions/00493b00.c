/* speed.exe 00493b00 FUN_00493b00; analysis pseudocode, not buildable source.
 * calls 004939d0 FUN_004939d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00493b00(undefined4 param_1,float *param_2)

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
  float *extraout_ECX;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  
  fVar19 = (float10)FUN_004939d0();
  if (((float10)_DAT_00895450 <= fVar19) || (fVar19 <= (float10)_DAT_00891108)) {
    fVar3 = extraout_ECX[1];
    fVar19 = (float10)_DAT_0089096c / fVar19;
    fVar4 = extraout_ECX[5];
    fVar5 = extraout_ECX[9];
    fVar6 = extraout_ECX[2];
    fVar7 = extraout_ECX[0xd];
    fVar8 = extraout_ECX[10];
    fVar9 = extraout_ECX[6];
    fVar10 = extraout_ECX[3];
    fVar11 = extraout_ECX[0xe];
    fVar12 = extraout_ECX[7];
    fVar13 = extraout_ECX[0xb];
    fVar20 = (float10)*extraout_ECX;
    fVar21 = (float10)extraout_ECX[4];
    fVar22 = (float10)extraout_ECX[8];
    fVar23 = (float10)extraout_ECX[0xc];
    fVar14 = extraout_ECX[0xf];
    fVar15 = fVar14 * fVar8 - fVar13 * fVar11;
    fVar16 = fVar12 * fVar11 - fVar14 * fVar9;
    fVar24 = (float10)fVar13 * (float10)fVar9 - (float10)fVar12 * (float10)fVar8;
    fVar1 = (float)fVar24;
    *param_2 = (float)(((float10)fVar15 * (float10)fVar4 +
                       (float10)fVar16 * (float10)fVar5 + fVar24 * (float10)fVar7) * fVar19);
    fVar17 = fVar10 * fVar11 - fVar14 * fVar6;
    fVar24 = (float10)(fVar13 * fVar6) - (float10)(fVar10 * fVar8);
    param_2[1] = (float)(-((float10)fVar15 * (float10)fVar3 +
                          (float10)fVar17 * (float10)fVar5 + fVar24 * (float10)fVar7) * fVar19);
    fVar18 = fVar14 * fVar9 - fVar12 * fVar11;
    fVar25 = (float10)fVar12 * (float10)fVar6 - (float10)fVar10 * (float10)fVar9;
    fVar2 = (float)fVar25;
    param_2[2] = (float)(((float10)fVar17 * (float10)fVar4 +
                         (float10)fVar18 * (float10)fVar3 + fVar25 * (float10)fVar7) * fVar19);
    fVar25 = (float10)(fVar10 * fVar8) - (float10)(fVar13 * fVar6);
    param_2[3] = (float)(-((float10)fVar1 * (float10)fVar3 +
                          (float10)fVar2 * (float10)fVar5 + fVar25 * (float10)fVar4) * fVar19);
    param_2[4] = (float)(-((float10)fVar15 * fVar21 +
                          (float10)fVar16 * fVar22 + (float10)fVar1 * fVar23) * fVar19);
    param_2[5] = (float)(((float10)fVar15 * fVar20 +
                         (float10)fVar17 * fVar22 + (float10)(float)fVar24 * fVar23) * fVar19);
    param_2[6] = (float)(-((float10)fVar17 * fVar21 +
                          (float10)fVar18 * fVar20 + (float10)fVar2 * fVar23) * fVar19);
    param_2[7] = (float)(((float10)fVar1 * fVar20 +
                         (float10)fVar2 * fVar22 + (float10)(float)fVar25 * fVar21) * fVar19);
    fVar1 = fVar14 * fVar5 - fVar13 * fVar7;
    fVar2 = fVar13 * fVar4 - fVar12 * fVar5;
    param_2[8] = (float)(((float10)fVar1 * fVar21 +
                         (float10)fVar2 * fVar23 +
                         ((float10)(fVar12 * fVar7) - (float10)(fVar14 * fVar4)) * fVar22) * fVar19)
    ;
    fVar15 = fVar10 * fVar7 - fVar14 * fVar3;
    param_2[9] = (float)(-((float10)fVar1 * fVar20 +
                          (float10)fVar15 * fVar22 +
                          ((float10)(fVar13 * fVar3) - (float10)(fVar10 * fVar5)) * fVar23) * fVar19
                        );
    fVar1 = fVar12 * fVar3 - fVar10 * fVar4;
    param_2[10] = (float)(((float10)fVar15 * fVar21 +
                          (float10)fVar1 * fVar23 +
                          ((float10)(fVar14 * fVar4) - (float10)(fVar12 * fVar7)) * fVar20) * fVar19
                         );
    param_2[0xb] = (float)(-((float10)fVar2 * fVar20 +
                            (float10)fVar1 * fVar22 +
                            ((float10)(fVar10 * fVar5) - (float10)(fVar13 * fVar3)) * fVar21) *
                          fVar19);
    fVar1 = fVar11 * fVar5 - fVar8 * fVar7;
    fVar2 = fVar8 * fVar4 - fVar9 * fVar5;
    param_2[0xc] = (float)(-((float10)fVar1 * fVar21 +
                            (float10)fVar2 * fVar23 +
                            ((float10)(fVar9 * fVar7) - (float10)(fVar11 * fVar4)) * fVar22) *
                          fVar19);
    fVar10 = fVar6 * fVar7 - fVar11 * fVar3;
    param_2[0xd] = (float)(((float10)fVar1 * fVar20 +
                           (float10)fVar10 * fVar22 +
                           ((float10)(fVar8 * fVar3) - (float10)(fVar6 * fVar5)) * fVar23) * fVar19)
    ;
    fVar1 = fVar9 * fVar3 - fVar6 * fVar4;
    param_2[0xe] = (float)(-((float10)fVar10 * fVar21 +
                            (float10)fVar1 * fVar23 +
                            ((float10)(fVar11 * fVar4) - (float10)(fVar9 * fVar7)) * fVar20) *
                          fVar19);
    param_2[0xf] = (float)(((float10)fVar2 * fVar20 +
                           (float10)fVar1 * fVar22 +
                           ((float10)(fVar6 * fVar5) - (float10)(fVar8 * fVar3)) * fVar21) * fVar19)
    ;
  }
  return;
}

