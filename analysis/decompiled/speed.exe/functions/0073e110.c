/* speed.exe 0073e110 FUN_0073e110; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073e110(float *param_1,float param_2,float param_3,code *param_4)

{
  bool bVar1;
  float *pfVar2;
  
  bVar1 = param_2 != _DAT_00890968;
  *param_1 = 0.0;
  if (bVar1) {
    pfVar2 = (float *)(*param_4)();
    *param_1 = param_2 * *pfVar2 + *param_1;
  }
  if (param_3 != _DAT_00890968) {
    pfVar2 = (float *)(*param_4)();
    *param_1 = param_3 * *pfVar2 + *param_1;
  }
  return;
}

