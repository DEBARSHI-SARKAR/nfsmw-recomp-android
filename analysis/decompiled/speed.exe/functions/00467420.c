/* speed.exe 00467420 FUN_00467420; analysis pseudocode, not buildable source.
 * calls 006bd900 FUN_006bd900
 * calls 007c4b80 FUN_007c4b80
 * calls 00467350 FUN_00467350
 * calls 006bdbb0 FUN_006bdbb0
 * calls 006bdc60 FUN_006bdc60
 * calls 004673c0 FUN_004673c0
 */

void __thiscall FUN_00467420(int param_1,undefined4 param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fVar2 = *(float *)(param_1 + 0x78);
  fVar1 = *(float *)(param_1 + 0x74);
  fVar3 = *(float *)(param_1 + 0x7c);
  fVar8 = (float10)FUN_00467350(*(float *)(param_1 + 0x70) * param_3);
  fVar9 = (float10)FUN_00467350(fVar1 * param_3);
  FUN_00467350(fVar2 * param_3);
  FUN_00467350(fVar3 * param_3);
  fVar1 = *(float *)(param_1 + 0x80);
  fVar4 = *(float *)(param_1 + 0x98);
  fVar5 = *(float *)(param_1 + 0x9c);
  fVar2 = *(float *)(param_1 + 0x84);
  fVar3 = *(float *)(param_1 + 0x94);
  fVar10 = (float10)FUN_00467350(*(float *)(param_1 + 0x90) * param_3);
  fVar11 = (float10)FUN_00467350(fVar3 * param_3);
  FUN_00467350(fVar4 * param_3);
  FUN_00467350(fVar5 * param_3);
  local_50 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x3f800000;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_20 = ((float)fVar10 * *(float *)(param_1 + 0xa0) + (float)fVar8 * fVar1) * param_4;
  local_1c = ((float)fVar11 * *(float *)(param_1 + 0xa4) + (float)fVar9 * fVar2) * param_4;
  iVar6 = FUN_007c4b80();
  uVar7 = FUN_004673c0(iVar6 / 0x168);
  FUN_006bdbb0(&local_50,&local_50,uVar7);
  iVar6 = FUN_007c4b80();
  uVar7 = FUN_004673c0(iVar6 / 0x168);
  FUN_006bdc60(&local_50,&local_50,uVar7);
  FUN_006bd900(param_2,param_2,&local_50);
  return;
}

