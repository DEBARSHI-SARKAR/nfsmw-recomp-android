/* speed.exe 0048db70 FUN_0048db70; analysis pseudocode, not buildable source.
 */

void FUN_0048db70(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(*param_1);
  fVar2 = ABS(param_1[1]);
  if ((fVar2 < fVar1) && (ABS(param_1[2]) < fVar1)) {
    *param_2 = param_1[2] + param_1[1];
    param_2[1] = -*param_1;
    param_2[2] = -*param_1;
    return;
  }
  if ((fVar1 < fVar2) && (ABS(param_1[2]) < fVar2)) {
    param_2[1] = param_1[2] + *param_1;
    param_2[2] = -param_1[1];
    *param_2 = -param_1[1];
    return;
  }
  param_2[2] = param_1[1] + *param_1;
  *param_2 = -param_1[2];
  param_2[1] = -param_1[2];
  return;
}

