/* speed.exe 00773fd0 FUN_00773fd0; analysis pseudocode, not buildable source.
 * calls 0076e0d0 FUN_0076e0d0
 */

void FUN_00773fd0(float *param_1,float *param_2,int param_3,float param_4,float *param_5)

{
  if ((*(byte *)(param_3 + 0xb) & 1) != 0) {
    FUN_0076e0d0();
    return;
  }
  *param_5 = (*param_2 - *param_1) * param_4 + *param_1;
  param_5[1] = (param_2[1] - param_1[1]) * param_4 + param_1[1];
  param_5[2] = (param_2[2] - param_1[2]) * param_4 + param_1[2];
  return;
}

