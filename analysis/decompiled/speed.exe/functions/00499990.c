/* speed.exe 00499990 FUN_00499990; analysis pseudocode, not buildable source.
 */

void FUN_00499990(float *param_1,float *param_2,undefined4 *param_3)

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
  
  fVar2 = *param_1;
  fVar1 = param_1[2];
  fVar3 = param_1[4];
  fVar4 = param_1[6];
  fVar5 = param_1[8];
  fVar9 = param_1[10];
  fVar6 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar7 = fVar3 * fVar3 + fVar4 * fVar4;
  fVar8 = fVar5 * fVar5 + fVar9 * fVar9;
  if ((fVar7 <= fVar6) && (fVar8 <= fVar6)) {
    *param_3 = 0;
    *param_2 = fVar2;
    param_2[1] = 0.0;
    param_2[2] = fVar1;
    param_2[3] = 1.0;
    return;
  }
  if ((fVar7 < fVar6) || (fVar7 < fVar8)) {
    *param_3 = 2;
  }
  else {
    *param_3 = 1;
    fVar9 = fVar4;
    fVar5 = fVar3;
  }
  *param_2 = fVar5;
  param_2[2] = fVar9;
  param_2[1] = 0.0;
  param_2[3] = 1.0;
  return;
}

