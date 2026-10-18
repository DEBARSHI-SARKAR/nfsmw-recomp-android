/* speed.exe 006bdb50 FUN_006bdb50; analysis pseudocode, not buildable source.
 * calls 0045db30 FUN_0045db30
 * calls 0045dbf0 FUN_0045dbf0
 */

void FUN_006bdb50(float *param_1,undefined4 param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_0045dbf0(param_2);
  fVar2 = (float10)FUN_0045db30(param_2);
  *param_1 = (float)fVar1;
  param_1[1] = (float)fVar2;
  param_1[5] = (float)fVar1;
  param_1[4] = (float)-fVar2;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 1.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  return;
}

