/* speed.exe 00697180 FUN_00697180; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 */

void __thiscall FUN_00697180(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_18;
  float local_14;
  float local_10;
  
  iVar5 = **(int **)(param_1 + 0x30);
  FUN_00401670(param_1 + 0xa8,iVar5 + 0x70,&local_18);
  fVar6 = *param_2 - (local_18 + *(float *)(iVar5 + 0x10));
  fVar7 = param_2[1] - (local_14 + *(float *)(iVar5 + 0x14));
  fVar8 = param_2[2] - (local_10 + *(float *)(iVar5 + 0x18));
  fVar1 = *(float *)(iVar5 + 0x38);
  fVar2 = *(float *)(iVar5 + 0x30);
  fVar3 = *(float *)(iVar5 + 0x30);
  fVar4 = *(float *)(iVar5 + 0x34);
  *param_3 = fVar8 * *(float *)(iVar5 + 0x34) - fVar7 * *(float *)(iVar5 + 0x38);
  param_3[1] = fVar6 * fVar1 - fVar8 * fVar2;
  param_3[2] = fVar7 * fVar3 - fVar6 * fVar4;
  *param_3 = *(float *)(iVar5 + 0x20) + *param_3;
  param_3[1] = *(float *)(iVar5 + 0x24) + param_3[1];
  param_3[2] = *(float *)(iVar5 + 0x28) + param_3[2];
  return;
}

