/* speed.exe 00826476 FUN_00826476; analysis pseudocode, not buildable source.
 */

void FUN_00826476(float *param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  
  if (0 < param_2) {
    param_4 = param_4 - (int)param_3;
    do {
      *(float *)(param_4 + (int)param_3) =
           param_1[3] * param_1[0xc] +
           (*param_1 + param_1[6]) * param_1[9] +
           (param_1[5] + param_1[1]) * param_1[10] +
           (param_1[2] + param_1[4]) * param_1[0xb] + (param_1[7] + *param_3) * param_1[8];
      param_1[7] = param_1[6];
      param_1[6] = param_1[5];
      param_1[5] = param_1[4];
      param_1[4] = param_1[3];
      param_1[3] = param_1[2];
      param_1[2] = param_1[1];
      param_1[1] = *param_1;
      fVar1 = *param_3;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
      *param_1 = fVar1;
    } while (param_2 != 0);
  }
  return;
}

