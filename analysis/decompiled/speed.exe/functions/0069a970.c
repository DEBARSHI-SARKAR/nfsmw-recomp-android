/* speed.exe 0069a970 FUN_0069a970; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0069a970(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar5 = **(int **)(param_1 + 0x18);
  fVar6 = *param_2 - *(float *)(iVar5 + 0x10);
  fVar8 = param_2[1] - *(float *)(iVar5 + 0x14);
  fVar7 = param_2[2] - *(float *)(iVar5 + 0x18);
  fVar1 = *(float *)(iVar5 + 0x38);
  fVar2 = *(float *)(iVar5 + 0x30);
  fVar3 = *(float *)(iVar5 + 0x30);
  fVar4 = *(float *)(iVar5 + 0x34);
  *param_3 = fVar7 * *(float *)(iVar5 + 0x34) - fVar8 * *(float *)(iVar5 + 0x38);
  param_3[1] = fVar6 * fVar1 - fVar7 * fVar2;
  param_3[2] = fVar8 * fVar3 - fVar6 * fVar4;
  *param_3 = *param_3 + *(float *)(iVar5 + 0x20);
  param_3[1] = *(float *)(iVar5 + 0x24) + param_3[1];
  param_3[2] = *(float *)(iVar5 + 0x28) + param_3[2];
  return;
}

