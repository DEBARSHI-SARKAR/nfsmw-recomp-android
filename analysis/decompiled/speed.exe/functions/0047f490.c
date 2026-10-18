/* speed.exe 0047f490 FUN_0047f490; analysis pseudocode, not buildable source.
 * calls 00469610 FUN_00469610
 * calls 0047ee00 FUN_0047ee00
 * calls 0046e5e0 FUN_0046e5e0
 * calls 0045f640 FUN_0045f640
 * calls 0046e530 FUN_0046e530
 * calls 00477ee0 FUN_00477ee0
 * calls 0047edb0 FUN_0047edb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f490(float *param_1,float *param_2,float *param_3,float *param_4,char *param_5,
                 uint param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char *pcVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_70 = 0.0;
  local_6c = 0.0;
  local_68 = 0.0;
  local_64 = 0.0;
  local_a0 = 0.0;
  local_9c = 0.0;
  local_98 = 0.0;
  local_94 = 0.0;
  local_a4 = 0.0;
  fVar1 = _DAT_00890968;
  if (*param_5 != '\0') {
    pcVar5 = (char *)FUN_0046e5e0(param_5,param_6,param_7);
    if (((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) ||
       (cVar4 = FUN_00477ee0(param_5,param_6,pcVar5,param_6 ^ 1), cVar4 == '\0')) {
      local_90 = 0.0;
      local_8c = 0.0;
      local_88 = 0.0;
      local_84 = 0;
      local_80 = 0.0;
      local_7c = 0.0;
      local_78 = 0.0;
      local_74 = 0;
      local_60 = 0.0;
      local_5c = 0.0;
      local_58 = 0.0;
      local_54 = 0;
      local_50 = 0.0;
      local_4c = 0.0;
      local_48 = 0.0;
      local_44 = 0;
      FUN_0047edb0(0,&local_90);
      FUN_0047edb0(1,&local_80);
      FUN_0047ee00(0,&local_60);
      FUN_0047ee00(1,&local_50);
      local_a4 = *(float *)(param_5 + param_6 * 4 + 0x14);
      local_70 = (local_80 - local_90) * local_a4;
      local_6c = (local_7c - local_8c) * local_a4;
      local_68 = (local_78 - local_88) * local_a4;
      local_a0 = (local_50 - local_60) * local_a4;
      local_9c = (local_4c - local_5c) * local_a4;
      local_98 = (local_48 - local_58) * local_a4;
      fVar1 = (*(float *)(param_5 + 0x50) - *(float *)(param_5 + 0x4c)) * local_a4;
      local_a4 = (*(float *)(param_5 + 0x58) - *(float *)(param_5 + 0x54)) * local_a4;
    }
    else {
      local_90 = 0.0;
      local_8c = 0.0;
      local_88 = 0.0;
      local_84 = 0;
      local_80 = 0.0;
      local_7c = 0.0;
      local_78 = 0.0;
      local_74 = 0;
      local_60 = 0.0;
      local_5c = 0.0;
      local_58 = 0.0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_50 = 0.0;
      local_4c = 0.0;
      local_48 = 0.0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      FUN_0047edb0(0,&local_90);
      FUN_0047edb0(1,&local_80);
      FUN_00469610(&local_60,&local_80,&local_90);
      FUN_0047ee00(0,&local_90);
      FUN_0047ee00(1,&local_80);
      FUN_00469610(&local_50,&local_80,&local_90);
      local_40 = *(float *)(pcVar5 + 0x50) - *(float *)(pcVar5 + 0x4c);
      local_34 = *(float *)(pcVar5 + 0x58) - *(float *)(pcVar5 + 0x54);
      FUN_0047edb0(0,&local_90);
      FUN_0047edb0(1,&local_80);
      FUN_00469610(&local_30,&local_80,&local_90);
      FUN_0047ee00(0,&local_90);
      FUN_0047ee00(1,&local_80);
      FUN_00469610(&local_20,&local_80,&local_90);
      local_38 = *(float *)(param_5 + 0x50) - *(float *)(param_5 + 0x4c);
      local_3c = *(float *)(param_5 + 0x58) - *(float *)(param_5 + 0x54);
      fVar6 = (float10)FUN_0046e530(param_5,param_7);
      fVar1 = (float)fVar6;
      fVar6 = (float10)FUN_0046e530(pcVar5,param_7);
      fVar7 = (float10)fVar1 / (fVar6 + (float10)fVar1);
      fVar8 = (float10)_DAT_0089096c - fVar7;
      if ((float)_DAT_008938e0 < (float)fVar6) {
        fVar7 = (fVar7 / (float10)(float)fVar6) * (float10)fVar1;
      }
      fVar2 = (float)((float10)*(float *)(param_5 + param_6 * 4 + 0x14) * fVar7);
      fVar3 = (float)((float10)*(float *)(param_5 + param_6 * 4 + 0x14) * fVar8);
      local_70 = local_60 * fVar2;
      local_6c = local_5c * fVar2;
      local_68 = local_58 * fVar2;
      FUN_0045f640(&local_70,&local_70,&local_30,fVar3);
      local_a0 = local_50 * fVar2;
      local_9c = local_4c * fVar2;
      local_98 = local_48 * fVar2;
      FUN_0045f640(&local_a0,&local_a0,&local_20,fVar3);
      fVar1 = fVar2 * local_40 + fVar3 * local_38;
      local_a4 = fVar2 * local_34 + fVar3 * local_3c;
    }
  }
  *param_1 = local_70;
  param_1[1] = local_6c;
  param_1[2] = local_68;
  param_1[3] = local_64;
  *param_2 = local_a0;
  param_2[1] = local_9c;
  param_2[2] = local_98;
  param_2[3] = local_94;
  *param_3 = fVar1;
  *param_4 = local_a4;
  return;
}

