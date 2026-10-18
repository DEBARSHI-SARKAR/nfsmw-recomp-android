/* speed.exe 00409f90 FUN_00409f90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409f90(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  float local_44;
  
  fVar1 = *param_3 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar3 = param_3[2] - param_2[2];
  fVar4 = *param_5 - *param_4;
  fVar5 = param_5[1] - param_4[1];
  fVar6 = param_5[2] - param_4[2];
  fVar7 = *param_2 - *param_4;
  fVar8 = param_2[1] - param_4[1];
  fVar9 = param_2[2] - param_4[2];
  fVar10 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar11 = fVar4 * fVar1 + fVar5 * fVar2 + fVar6 * fVar3;
  fVar12 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar13 = fVar7 * fVar1 + fVar8 * fVar2 + fVar9 * fVar3;
  fVar14 = fVar4 * fVar7 + fVar8 * fVar5 + fVar9 * fVar6;
  param_4 = (float *)(fVar12 * fVar10 - fVar11 * fVar11);
  param_3 = (float *)fVar14;
  local_44 = fVar12;
  fVar15 = _DAT_00890968;
  if (_DAT_00890dfc <= (float)param_4) {
    fVar16 = fVar14 * fVar11 - fVar13 * fVar12;
    if ((_DAT_00890968 <= fVar16) &&
       (param_3 = (float *)(fVar14 * fVar10 - fVar13 * fVar11), local_44 = (float)param_4,
       fVar15 = fVar16, (float)param_4 < fVar16)) {
      param_3 = (float *)(fVar14 + fVar11);
      local_44 = fVar12;
      fVar15 = (float)param_4;
    }
  }
  else {
    param_4 = (float *)0x3f800000;
  }
  fVar12 = _DAT_00890968;
  fVar14 = _DAT_00890968;
  if (_DAT_00890968 <= (float)param_3) {
    fVar16 = (float)param_4;
    if (local_44 < (float)param_3) {
      param_3 = (float *)local_44;
      fVar15 = fVar11 - fVar13;
      if (fVar15 < _DAT_00890968) goto LAB_0040a296;
      fVar16 = fVar10;
      if (fVar10 < fVar15) {
        fVar16 = (float)param_4;
        fVar15 = (float)param_4;
      }
    }
  }
  else {
    param_3 = (float *)0x0;
    fVar15 = -fVar13;
    if (fVar15 < _DAT_00890968) goto LAB_0040a296;
    fVar16 = fVar10;
    if (fVar10 < fVar15) {
      fVar16 = (float)param_4;
      fVar15 = (float)param_4;
    }
  }
  param_4 = (float *)fVar16;
  fVar12 = fVar15;
  fVar14 = fVar15;
  if (fVar15 < _DAT_00890968) {
    fVar14 = -fVar15;
  }
LAB_0040a296:
  fVar10 = _DAT_00890968;
  if (_DAT_00890dfc <= fVar14) {
    fVar10 = fVar12 / (float)param_4;
  }
  fVar11 = (float)param_3;
  if ((float)param_3 < _DAT_00890968) {
    fVar11 = -(float)param_3;
  }
  fVar12 = _DAT_00890968;
  if (_DAT_00890dfc <= fVar11) {
    fVar12 = (float)param_3 / local_44;
  }
  *param_1 = (fVar1 * fVar10 + fVar7) - fVar4 * fVar12;
  param_1[1] = (fVar2 * fVar10 + fVar8) - fVar5 * fVar12;
  param_1[2] = (fVar3 * fVar10 + fVar9) - fVar6 * fVar12;
  return;
}

