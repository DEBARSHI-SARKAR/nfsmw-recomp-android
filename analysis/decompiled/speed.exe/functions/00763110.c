/* speed.exe 00763110 FUN_00763110; analysis pseudocode, not buildable source.
 * calls 00444dc0 FUN_00444dc0
 */

void __thiscall FUN_00763110(float *param_1,float *param_2)

{
  float local_10;
  float local_c;
  float local_8;
  
  *param_2 = (-(*param_1 * param_1[0xc]) - param_1[1] * param_1[0xd]) - param_1[2] * param_1[0xe];
  param_2[2] = (-(param_1[0xc] * param_1[8]) - param_1[9] * param_1[0xd]) -
               param_1[10] * param_1[0xe];
  if ((*(byte *)((int)param_1 + 0x12) & 3) != 0) {
    FUN_00444dc0(param_1 + 8,param_1,&local_10);
    param_2[1] = (-(local_10 * param_1[0xc]) - local_c * param_1[0xd]) - local_8 * param_1[0xe];
    return;
  }
  param_2[1] = -param_1[0xd];
  return;
}

