/* speed.exe 00486da0 FUN_00486da0; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 */

void __thiscall
FUN_00486da0(int param_1,float *param_2,float *param_3,undefined4 param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_1 + 0xd4);
  *param_5 = fVar1 * *param_2;
  param_5[1] = fVar1 * param_2[1];
  param_5[2] = fVar1 * param_2[2];
  fVar1 = *param_2;
  fVar2 = param_3[2];
  fVar3 = *param_3;
  fVar4 = param_2[2];
  fVar5 = param_2[1];
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = *param_2;
  *param_6 = param_3[1] * param_2[2] - param_2[1] * param_3[2];
  param_6[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_6[2] = fVar5 * fVar6 - fVar7 * fVar8;
  FUN_00401670(param_6,param_4,param_6);
  return;
}

