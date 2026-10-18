/* speed.exe 004a7f00 FUN_004a7f00; analysis pseudocode, not buildable source.
 * calls 0049fcf0 FUN_0049fcf0
 * calls 0049ff90 FUN_0049ff90
 */

void __thiscall
FUN_004a7f00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_1[6] = *param_6;
  param_1[7] = param_6[1];
  param_1[8] = param_6[2];
  param_1[9] = param_6[3];
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_0049ff90(param_7,0);
  FUN_0049fcf0(param_7,param_8,0);
  iVar1 = param_1[1] * 0x40 + param_8;
  fVar3 = *(float *)(param_1[2] * 0x40 + 0x30 + param_8);
  iVar2 = param_1[2] * 0x40 + param_8;
  fVar4 = *(float *)(iVar2 + 0x34);
  fVar5 = *(float *)(iVar2 + 0x38);
  fVar6 = fVar3 - *(float *)(param_1[1] * 0x40 + 0x30 + param_8);
  fVar7 = fVar4 - *(float *)(iVar1 + 0x34);
  param_8 = param_1[3] * 0x40 + param_8;
  fVar8 = fVar5 - *(float *)(iVar1 + 0x38);
  param_1[4] = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
  fVar3 = *(float *)(param_8 + 0x30) - fVar3;
  fVar4 = *(float *)(param_8 + 0x34) - fVar4;
  fVar5 = *(float *)(param_8 + 0x38) - fVar5;
  param_1[5] = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
  return;
}

