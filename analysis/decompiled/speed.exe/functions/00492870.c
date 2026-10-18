/* speed.exe 00492870 FUN_00492870; analysis pseudocode, not buildable source.
 * calls 0045db30 FUN_0045db30
 * calls 007c4b80 FUN_007c4b80
 * calls 0045dbf0 FUN_0045dbf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00492870(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float10 fVar7;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  
  uVar6 = FUN_007c4b80();
  fVar7 = (float10)FUN_0045db30(uVar6);
  fVar1 = (float)fVar7;
  uVar6 = FUN_007c4b80();
  fVar7 = (float10)FUN_0045dbf0(uVar6);
  fVar2 = (float)fVar7;
  uVar6 = FUN_007c4b80();
  fVar7 = (float10)FUN_0045db30(uVar6);
  fVar3 = (float)fVar7;
  uVar6 = FUN_007c4b80();
  fVar7 = (float10)FUN_0045dbf0(uVar6);
  fVar4 = (float)fVar7;
  uVar6 = FUN_007c4b80();
  fVar7 = (float10)FUN_0045db30(uVar6);
  fVar5 = (float)fVar7;
  uVar6 = FUN_007c4b80();
  fVar7 = (float10)FUN_0045dbf0(uVar6);
  param_1[3] = 0.0;
  *param_1 = (float)((float10)fVar4 * fVar7 * (float10)param_2);
  param_1[1] = fVar5 * fVar4 * param_2;
  param_1[2] = -(fVar3 * param_2);
  param_1[4] = (float)(((float10)fVar1 * (float10)fVar3 * fVar7 - (float10)fVar5 * (float10)fVar2) *
                      (float10)param_3);
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = in_stack_0000001c;
  param_1[0xd] = in_stack_00000020;
  param_1[0xe] = in_stack_00000024;
  param_1[0xf] = 1.0;
  param_1[5] = (float)((fVar7 * (float10)fVar2 + (float10)fVar5 * (float10)fVar3 * (float10)fVar1) *
                      (float10)param_3);
  param_1[6] = fVar4 * fVar1 * param_3;
  param_1[8] = (float)(((float10)fVar5 * (float10)fVar1 + (float10)fVar3 * fVar7 * (float10)fVar2) *
                      (float10)param_4);
  param_1[9] = (float)(((float10)(float)((float10)fVar5 * (float10)fVar3) * (float10)fVar2 -
                       fVar7 * (float10)fVar1) * (float10)param_4);
  param_1[10] = fVar4 * fVar2 * param_4;
  return;
}

