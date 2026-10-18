/* speed.exe 0073e180 FUN_0073e180; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073e180(float *param_1,float param_2,float param_3,code *param_4)

{
  bool bVar1;
  float *pfVar2;
  
  bVar1 = param_2 != _DAT_00890968;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (bVar1) {
    pfVar2 = (float *)(*param_4)();
    *param_1 = param_2 * *pfVar2 + *param_1;
    param_1[1] = param_2 * pfVar2[1] + param_1[1];
    param_1[2] = param_2 * pfVar2[2] + param_1[2];
    param_1[3] = param_2 * pfVar2[3] + param_1[3];
  }
  if (param_3 != _DAT_00890968) {
    pfVar2 = (float *)(*param_4)();
    *param_1 = param_3 * *pfVar2 + *param_1;
    param_1[1] = param_3 * pfVar2[1] + param_1[1];
    param_1[2] = param_3 * pfVar2[2] + param_1[2];
    param_1[3] = param_3 * pfVar2[3] + param_1[3];
  }
  return;
}

