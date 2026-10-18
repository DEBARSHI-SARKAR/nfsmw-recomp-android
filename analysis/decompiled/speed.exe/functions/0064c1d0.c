/* speed.exe 0064c1d0 FUN_0064c1d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0064c1d0(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *param_2 * _DAT_00890da8;
  param_1[4] = (float)&PTR_DAT_008f83d0;
  param_1[5] = 0.0;
  param_1[6] = param_3;
  *param_1 = fVar3;
  param_1[7] = param_4;
  param_1[1] = fVar1 * _DAT_00890da8;
  param_1[2] = fVar2 * _DAT_00890da8;
  return;
}

