/* speed.exe 004fc3c0 FUN_004fc3c0; analysis pseudocode, not buildable source.
 * calls 0045dd10 FUN_0045dd10
 * calls 0045ded0 FUN_0045ded0
 */

void FUN_004fc3c0(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  ushort uVar2;
  short sVar3;
  
  fVar1 = SQRT(param_4 * param_4 + param_3 * param_3 + param_2 * param_2);
  uVar2 = FUN_0045ded0(param_2,param_3);
  sVar3 = FUN_0045dd10(param_4 / fVar1);
  param_1[2] = fVar1;
  *param_1 = (float)uVar2;
  param_1[1] = (float)(ushort)(0x4000 - sVar3);
  return;
}

