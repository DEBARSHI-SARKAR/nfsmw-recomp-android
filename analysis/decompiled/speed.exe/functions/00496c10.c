/* speed.exe 00496c10 FUN_00496c10; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00496c10(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_EAX;
  
  fVar2 = (*param_2 - *in_EAX) * param_3 + *in_EAX;
  fVar5 = (param_2[1] - in_EAX[1]) * param_3 + in_EAX[1];
  fVar1 = (param_2[2] - in_EAX[2]) * param_3 + in_EAX[2];
  fVar4 = (param_2[3] - in_EAX[3]) * param_3 + in_EAX[3];
  fVar3 = _DAT_0089096c / SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar1 * fVar1 + fVar4 * fVar4);
  *param_1 = fVar3 * fVar2;
  param_1[1] = fVar3 * fVar5;
  param_1[2] = fVar3 * fVar1;
  param_1[3] = fVar3 * fVar4;
  return;
}

