/* speed.exe 00824c1f FUN_00824c1f; analysis pseudocode, not buildable source.
 * calls 00824349 FUN_00824349
 * calls 008263e1 FUN_008263e1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00824c1f(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  
  iVar1 = *param_2;
  iVar2 = param_2[2];
  fVar4 = (float)param_2[3] * _DAT_008ae820;
  iVar3 = param_2[1];
  *(float *)(param_1 + 0x20) = (float)(iVar1 >> 8);
  *(int *)(param_1 + 0x1c) = iVar3 >> 8;
  *(float *)(param_1 + 0x24) = (float)(iVar2 >> 8);
  fVar6 = (float)(iVar3 >> 8);
  fVar5 = _DAT_0089096c - ((float)(iVar2 >> 8) * _DAT_00894214) / fVar6;
  *(float *)(param_1 + 0x28) = fVar5;
  fVar7 = (float10)FUN_00824349(((float)(iVar1 >> 8) * _DAT_00894218) / fVar6);
  fVar7 = (((float10)*(float *)(param_1 + 0x28) + (float10)*(float *)(param_1 + 0x28)) /
          ((float10)(fVar5 * fVar5) + (float10)_DAT_0089096c)) * fVar7;
  *(float *)(param_1 + 0x2c) = (float)fVar7;
  fVar7 = (float10)FUN_008263e1((float)-(fVar7 * fVar7));
  *(float *)(param_1 + 0x30) =
       (float)(((float10)1 - (float10)(fVar5 * fVar5)) * fVar7 * (float10)fVar4);
  return;
}

