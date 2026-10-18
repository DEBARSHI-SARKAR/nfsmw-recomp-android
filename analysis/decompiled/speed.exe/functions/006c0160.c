/* speed.exe 006c0160 FUN_006c0160; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045db30 FUN_0045db30
 * calls 0045dbf0 FUN_0045dbf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c0160(float *param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  sVar6 = FUN_007c4b80();
  fVar1 = *(float *)(param_2 + 0xc) * _DAT_008933d4;
  sVar6 = *(short *)(param_2 + 0x1c) - sVar6;
  fVar7 = (float10)FUN_0045db30(sVar6);
  fVar8 = (float10)FUN_0045dbf0(sVar6);
  param_1[2] = 0.999;
  param_1[6] = 0.999;
  param_1[10] = 0.999;
  param_1[0xe] = 0.999;
  uVar2 = *(undefined1 *)(param_2 + 0x19);
  uVar3 = *(undefined1 *)(param_2 + 0x1a);
  fVar1 = (float)(fVar8 * (float10)fVar1 + (float10)(float)fVar7 * (float10)fVar1);
  uVar4 = *(undefined1 *)(param_2 + 0x18);
  param_5 = param_5 + *(float *)(param_2 + 0x14);
  uVar5 = FUN_007c4b80();
  *param_1 = (float)(extraout_ST0 - (float10)fVar1);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  *(undefined1 *)(param_1 + 0x22) = uVar4;
  *(undefined1 *)(param_1 + 0x23) = uVar4;
  *(undefined1 *)((int)param_1 + 0x81) = uVar2;
  param_1[1] = (float)((float10)param_5 - extraout_ST1);
  *(undefined1 *)((int)param_1 + 0x82) = uVar3;
  *(undefined1 *)((int)param_1 + 0x83) = uVar5;
  *(undefined1 *)((int)param_1 + 0x85) = uVar2;
  *(undefined1 *)((int)param_1 + 0x86) = uVar3;
  *(undefined1 *)((int)param_1 + 0x87) = uVar5;
  *(undefined1 *)((int)param_1 + 0x89) = uVar2;
  param_1[4] = (float)(extraout_ST0 + extraout_ST1);
  *(undefined1 *)((int)param_1 + 0x8a) = uVar3;
  *(undefined1 *)((int)param_1 + 0x8b) = uVar5;
  *(undefined1 *)((int)param_1 + 0x8d) = uVar2;
  *(undefined1 *)((int)param_1 + 0x8e) = uVar3;
  *(undefined1 *)((int)param_1 + 0x8f) = uVar5;
  param_1[5] = param_5 - fVar1;
  param_1[8] = (float)((float10)fVar1 + extraout_ST0);
  param_1[9] = (float)((float10)param_5 + extraout_ST1);
  param_1[0xc] = (float)(extraout_ST0 - extraout_ST1);
  param_1[0xd] = param_5 + fVar1;
  return;
}

