/* speed.exe 0046ab60 FUN_0046ab60; analysis pseudocode, not buildable source.
 * calls 0045f640 FUN_0045f640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ab60(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar7 = _DAT_0089096c - param_4;
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  fVar5 = *param_2;
  fVar6 = *param_3;
  param_1[3] = param_4 * param_2[3] + fVar7 * param_3[3];
  *param_1 = fVar7 * fVar6 + param_4 * fVar5;
  param_1[1] = param_4 * fVar2 + fVar7 * fVar1;
  param_1[2] = param_4 * fVar4 + fVar7 * fVar3;
  local_70 = param_4 * param_2[4];
  local_6c = param_4 * param_2[5];
  local_68 = param_4 * param_2[6];
  local_90 = param_4 * param_2[8];
  local_8c = param_4 * param_2[9];
  local_88 = param_4 * param_2[10];
  local_50 = param_4 * param_2[0xc];
  local_4c = param_4 * param_2[0xd];
  local_48 = param_4 * param_2[0xe];
  local_b0 = param_4 * param_2[0x10];
  local_ac = param_4 * param_2[0x11];
  local_a8 = param_4 * param_2[0x12];
  local_30 = param_4 * param_2[0x14];
  local_2c = param_4 * param_2[0x15];
  local_28 = param_4 * param_2[0x16];
  local_a0 = param_4 * param_2[0x18];
  local_9c = param_4 * param_2[0x19];
  local_98 = param_4 * param_2[0x1a];
  local_80 = param_4 * param_2[0x1c];
  local_7c = param_4 * param_2[0x1d];
  local_78 = param_4 * param_2[0x1e];
  local_60 = param_4 * param_2[0x20];
  local_5c = param_4 * param_2[0x21];
  local_58 = param_4 * param_2[0x22];
  local_40 = param_4 * param_2[0x24];
  local_3c = param_4 * param_2[0x25];
  local_38 = param_4 * param_2[0x26];
  local_20 = param_4 * param_2[0x28];
  local_1c = param_4 * param_2[0x29];
  local_18 = param_4 * param_2[0x2a];
  FUN_0045f640(param_1 + 4,&local_70,param_3 + 4,fVar7);
  FUN_0045f640(param_1 + 8,&local_90,param_3 + 8,fVar7);
  FUN_0045f640(param_1 + 0xc,&local_50,param_3 + 0xc,fVar7);
  FUN_0045f640(param_1 + 0x10,&local_b0,param_3 + 0x10,fVar7);
  FUN_0045f640(param_1 + 0x14,&local_30,param_3 + 0x14,fVar7);
  FUN_0045f640(param_1 + 0x18,&local_a0,param_3 + 0x18,fVar7);
  FUN_0045f640(param_1 + 0x1c,&local_80,param_3 + 0x1c,fVar7);
  FUN_0045f640(param_1 + 0x20,&local_60,param_3 + 0x20,fVar7);
  FUN_0045f640(param_1 + 0x24,&local_40,param_3 + 0x24,fVar7);
  FUN_0045f640(param_1 + 0x28,&local_20,param_3 + 0x28,fVar7);
  return;
}

