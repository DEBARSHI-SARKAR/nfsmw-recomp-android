/* speed.exe 0056fcc0 FUN_0056fcc0; analysis pseudocode, not buildable source.
 */

void FUN_0056fcc0(float *param_1)

{
  float fVar1;
  
  if (param_1[4] < *param_1) {
    fVar1 = param_1[4];
    param_1[4] = *param_1;
    param_1[8] = *param_1;
    *param_1 = fVar1;
    param_1[0xc] = fVar1;
  }
  if (param_1[0xd] < param_1[1]) {
    fVar1 = param_1[0xd];
    param_1[9] = param_1[1];
    param_1[0xd] = param_1[1];
    param_1[1] = fVar1;
    param_1[5] = fVar1;
  }
  return;
}

