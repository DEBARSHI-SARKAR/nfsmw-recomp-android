/* speed.exe 0045e610 FUN_0045e610; analysis pseudocode, not buildable source.
 * calls 0045e4d0 FUN_0045e4d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045e610(float *param_1,undefined4 param_2)

{
  float *extraout_ECX;
  float10 fVar1;
  
  fVar1 = (float10)FUN_0045e4d0(param_2);
  fVar1 = (float10)_DAT_0089096c / fVar1;
  *param_1 = (float)(((float10)extraout_ECX[5] * (float10)extraout_ECX[0xf] *
                      (float10)extraout_ECX[10] +
                     ((((float10)extraout_ECX[9] * (float10)extraout_ECX[0xe] *
                        (float10)extraout_ECX[7] +
                       ((float10)extraout_ECX[0xb] * (float10)extraout_ECX[0xd] *
                        (float10)extraout_ECX[6] -
                       (float10)extraout_ECX[0xd] * (float10)extraout_ECX[10] *
                       (float10)extraout_ECX[7])) -
                      (float10)extraout_ECX[5] * (float10)extraout_ECX[0xb] *
                      (float10)extraout_ECX[0xe]) -
                     (float10)extraout_ECX[9] * (float10)extraout_ECX[0xf] *
                     (float10)extraout_ECX[6])) * fVar1);
  param_1[1] = (float)((((float10)extraout_ECX[0xb] * (float10)extraout_ECX[0xe] *
                         (float10)extraout_ECX[1] +
                        (float10)extraout_ECX[9] * (float10)extraout_ECX[0xf] *
                        (float10)extraout_ECX[2] +
                        (((float10)extraout_ECX[0xd] * (float10)extraout_ECX[10] *
                          (float10)extraout_ECX[3] -
                         (float10)extraout_ECX[0xb] * (float10)extraout_ECX[0xd] *
                         (float10)extraout_ECX[2]) -
                        (float10)extraout_ECX[9] * (float10)extraout_ECX[0xe] *
                        (float10)extraout_ECX[3])) -
                       (float10)extraout_ECX[1] * (float10)extraout_ECX[0xf] *
                       (float10)extraout_ECX[10]) * fVar1);
  param_1[2] = (float)(((float10)extraout_ECX[1] * (float10)extraout_ECX[0xf] *
                        (float10)extraout_ECX[6] +
                       ((((float10)extraout_ECX[5] * (float10)extraout_ECX[0xe] *
                          (float10)extraout_ECX[3] +
                         ((float10)extraout_ECX[0xd] * (float10)extraout_ECX[7] *
                          (float10)extraout_ECX[2] -
                         (float10)extraout_ECX[0xd] * (float10)extraout_ECX[6] *
                         (float10)extraout_ECX[3])) -
                        (float10)extraout_ECX[0xe] * (float10)extraout_ECX[1] *
                        (float10)extraout_ECX[7]) -
                       (float10)extraout_ECX[5] * (float10)extraout_ECX[0xf] *
                       (float10)extraout_ECX[2])) * fVar1);
  param_1[3] = (float)((((float10)extraout_ECX[1] * (float10)extraout_ECX[10] *
                         (float10)extraout_ECX[7] +
                        (float10)extraout_ECX[5] * (float10)extraout_ECX[0xb] *
                        (float10)extraout_ECX[2] +
                        (((float10)extraout_ECX[9] * (float10)extraout_ECX[6] *
                          (float10)extraout_ECX[3] -
                         (float10)extraout_ECX[9] * (float10)extraout_ECX[7] *
                         (float10)extraout_ECX[2]) -
                        (float10)extraout_ECX[5] * (float10)extraout_ECX[10] *
                        (float10)extraout_ECX[3])) -
                       (float10)extraout_ECX[0xb] * (float10)extraout_ECX[1] *
                       (float10)extraout_ECX[6]) * fVar1);
  param_1[4] = (float)((((float10)extraout_ECX[8] * (float10)extraout_ECX[0xf] *
                         (float10)extraout_ECX[6] +
                        (float10)extraout_ECX[4] * (float10)extraout_ECX[0xb] *
                        (float10)extraout_ECX[0xe] +
                        (((float10)extraout_ECX[0xc] * (float10)extraout_ECX[10] *
                          (float10)extraout_ECX[7] -
                         (float10)extraout_ECX[0xc] * (float10)extraout_ECX[0xb] *
                         (float10)extraout_ECX[6]) -
                        (float10)extraout_ECX[8] * (float10)extraout_ECX[0xe] *
                        (float10)extraout_ECX[7])) -
                       (float10)extraout_ECX[4] * (float10)extraout_ECX[0xf] *
                       (float10)extraout_ECX[10]) * fVar1);
  param_1[5] = (float)(((float10)*extraout_ECX * (float10)extraout_ECX[0xf] *
                        (float10)extraout_ECX[10] +
                       ((((float10)extraout_ECX[8] * (float10)extraout_ECX[0xe] *
                          (float10)extraout_ECX[3] +
                         ((float10)extraout_ECX[0xc] * (float10)extraout_ECX[0xb] *
                          (float10)extraout_ECX[2] -
                         (float10)extraout_ECX[0xc] * (float10)extraout_ECX[10] *
                         (float10)extraout_ECX[3])) -
                        (float10)extraout_ECX[0xb] * (float10)extraout_ECX[0xe] *
                        (float10)*extraout_ECX) -
                       (float10)extraout_ECX[8] * (float10)extraout_ECX[0xf] *
                       (float10)extraout_ECX[2])) * fVar1);
  param_1[6] = (float)((((float10)extraout_ECX[0xe] * (float10)*extraout_ECX *
                         (float10)extraout_ECX[7] +
                        (float10)extraout_ECX[4] * (float10)extraout_ECX[0xf] *
                        (float10)extraout_ECX[2] +
                        (((float10)extraout_ECX[0xc] * (float10)extraout_ECX[6] *
                          (float10)extraout_ECX[3] -
                         (float10)extraout_ECX[0xc] * (float10)extraout_ECX[7] *
                         (float10)extraout_ECX[2]) -
                        (float10)extraout_ECX[4] * (float10)extraout_ECX[0xe] *
                        (float10)extraout_ECX[3])) -
                       (float10)*extraout_ECX * (float10)extraout_ECX[0xf] *
                       (float10)extraout_ECX[6]) * fVar1);
  param_1[7] = (float)(((float10)extraout_ECX[0xb] * (float10)*extraout_ECX *
                        (float10)extraout_ECX[6] +
                       ((((float10)extraout_ECX[4] * (float10)extraout_ECX[10] *
                          (float10)extraout_ECX[3] +
                         ((float10)extraout_ECX[8] * (float10)extraout_ECX[7] *
                          (float10)extraout_ECX[2] -
                         (float10)extraout_ECX[8] * (float10)extraout_ECX[6] *
                         (float10)extraout_ECX[3])) -
                        (float10)*extraout_ECX * (float10)extraout_ECX[10] *
                        (float10)extraout_ECX[7]) -
                       (float10)extraout_ECX[4] * (float10)extraout_ECX[0xb] *
                       (float10)extraout_ECX[2])) * fVar1);
  param_1[8] = (float)(((float10)extraout_ECX[4] * (float10)extraout_ECX[9] *
                        (float10)extraout_ECX[0xf] +
                       ((((float10)extraout_ECX[8] * (float10)extraout_ECX[0xd] *
                          (float10)extraout_ECX[7] +
                         ((float10)extraout_ECX[5] * (float10)extraout_ECX[0xc] *
                          (float10)extraout_ECX[0xb] -
                         (float10)extraout_ECX[0xc] * (float10)extraout_ECX[9] *
                         (float10)extraout_ECX[7])) -
                        (float10)extraout_ECX[4] * (float10)extraout_ECX[0xb] *
                        (float10)extraout_ECX[0xd]) -
                       (float10)extraout_ECX[5] * (float10)extraout_ECX[8] *
                       (float10)extraout_ECX[0xf])) * fVar1);
  param_1[9] = (float)((((float10)extraout_ECX[8] * (float10)extraout_ECX[1] *
                         (float10)extraout_ECX[0xf] +
                        (float10)extraout_ECX[0xb] * (float10)extraout_ECX[0xd] *
                        (float10)*extraout_ECX +
                        (((float10)extraout_ECX[0xc] * (float10)extraout_ECX[9] *
                          (float10)extraout_ECX[3] -
                         (float10)extraout_ECX[0xc] * (float10)extraout_ECX[0xb] *
                         (float10)extraout_ECX[1]) -
                        (float10)extraout_ECX[8] * (float10)extraout_ECX[0xd] *
                        (float10)extraout_ECX[3])) -
                       (float10)extraout_ECX[9] * (float10)*extraout_ECX *
                       (float10)extraout_ECX[0xf]) * fVar1);
  param_1[10] = (float)(((float10)extraout_ECX[5] * (float10)*extraout_ECX *
                         (float10)extraout_ECX[0xf] +
                        ((((float10)extraout_ECX[4] * (float10)extraout_ECX[0xd] *
                           (float10)extraout_ECX[3] +
                          ((float10)extraout_ECX[0xc] * (float10)extraout_ECX[1] *
                           (float10)extraout_ECX[7] -
                          (float10)extraout_ECX[5] * (float10)extraout_ECX[0xc] *
                          (float10)extraout_ECX[3])) -
                         (float10)extraout_ECX[0xd] * (float10)*extraout_ECX *
                         (float10)extraout_ECX[7]) -
                        (float10)extraout_ECX[4] * (float10)extraout_ECX[1] *
                        (float10)extraout_ECX[0xf])) * fVar1);
  param_1[0xb] = (float)((((float10)extraout_ECX[4] * (float10)extraout_ECX[0xb] *
                           (float10)extraout_ECX[1] +
                          (float10)extraout_ECX[9] * (float10)*extraout_ECX *
                          (float10)extraout_ECX[7] +
                          (((float10)extraout_ECX[5] * (float10)extraout_ECX[8] *
                            (float10)extraout_ECX[3] -
                           (float10)extraout_ECX[8] * (float10)extraout_ECX[1] *
                           (float10)extraout_ECX[7]) -
                          (float10)extraout_ECX[4] * (float10)extraout_ECX[9] *
                          (float10)extraout_ECX[3])) -
                         (float10)extraout_ECX[5] * (float10)extraout_ECX[0xb] *
                         (float10)*extraout_ECX) * fVar1);
  param_1[0xc] = (float)((((float10)extraout_ECX[4] * (float10)extraout_ECX[0xd] *
                           (float10)extraout_ECX[10] +
                          (float10)extraout_ECX[5] * (float10)extraout_ECX[8] *
                          (float10)extraout_ECX[0xe] +
                          (((float10)extraout_ECX[0xc] * (float10)extraout_ECX[9] *
                            (float10)extraout_ECX[6] -
                           (float10)extraout_ECX[5] * (float10)extraout_ECX[0xc] *
                           (float10)extraout_ECX[10]) -
                          (float10)extraout_ECX[8] * (float10)extraout_ECX[0xd] *
                          (float10)extraout_ECX[6])) -
                         (float10)extraout_ECX[4] * (float10)extraout_ECX[9] *
                         (float10)extraout_ECX[0xe]) * fVar1);
  param_1[0xd] = (float)(((float10)extraout_ECX[9] * (float10)extraout_ECX[0xe] *
                          (float10)*extraout_ECX +
                         ((((float10)extraout_ECX[8] * (float10)extraout_ECX[0xd] *
                            (float10)extraout_ECX[2] +
                           ((float10)extraout_ECX[0xc] * (float10)extraout_ECX[1] *
                            (float10)extraout_ECX[10] -
                           (float10)extraout_ECX[0xc] * (float10)extraout_ECX[9] *
                           (float10)extraout_ECX[2])) -
                          (float10)extraout_ECX[0xd] * (float10)*extraout_ECX *
                          (float10)extraout_ECX[10]) -
                         (float10)extraout_ECX[8] * (float10)extraout_ECX[0xe] *
                         (float10)extraout_ECX[1])) * fVar1);
  param_1[0xe] = (float)((((float10)extraout_ECX[4] * (float10)extraout_ECX[0xe] *
                           (float10)extraout_ECX[1] +
                          (float10)extraout_ECX[0xd] * (float10)*extraout_ECX *
                          (float10)extraout_ECX[6] +
                          (((float10)extraout_ECX[5] * (float10)extraout_ECX[0xc] *
                            (float10)extraout_ECX[2] -
                           (float10)extraout_ECX[0xc] * (float10)extraout_ECX[1] *
                           (float10)extraout_ECX[6]) -
                          (float10)extraout_ECX[4] * (float10)extraout_ECX[0xd] *
                          (float10)extraout_ECX[2])) -
                         (float10)extraout_ECX[5] * (float10)extraout_ECX[0xe] *
                         (float10)*extraout_ECX) * fVar1);
  param_1[0xf] = (float)(((float10)extraout_ECX[5] * (float10)*extraout_ECX *
                          (float10)extraout_ECX[10] +
                         ((((float10)extraout_ECX[4] * (float10)extraout_ECX[9] *
                            (float10)extraout_ECX[2] +
                           ((float10)extraout_ECX[8] * (float10)extraout_ECX[1] *
                            (float10)extraout_ECX[6] -
                           (float10)extraout_ECX[5] * (float10)extraout_ECX[8] *
                           (float10)extraout_ECX[2])) -
                          (float10)extraout_ECX[9] * (float10)*extraout_ECX *
                          (float10)extraout_ECX[6]) -
                         (float10)extraout_ECX[4] * (float10)extraout_ECX[1] *
                         (float10)extraout_ECX[10])) * fVar1);
  return;
}

