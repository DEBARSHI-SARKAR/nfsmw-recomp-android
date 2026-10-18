/* speed.exe 0068ec70 FUN_0068ec70; analysis pseudocode, not buildable source.
 * calls 00653d10 FUN_00653d10
 * calls 006533b0 FUN_006533b0
 * calls 006e8de0 FUN_006e8de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0068ec70(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_2 + 0x8c);
  fVar2 = *(float *)(param_1 + 0x130);
  fVar3 = *(float *)(param_2 + 0xc0);
  fVar4 = (float10)FUN_006e8de0();
  fVar7 = (float)fVar4;
  fVar4 = (float10)FUN_006533b0(ABS((fVar1 - fVar2) / fVar3));
  FUN_00653d10((float)fVar4,fVar7);
  fVar5 = (float10)FUN_006533b0(*(undefined4 *)(param_2 + 0x48));
  fVar4 = (float10)_DAT_008aad30;
  fVar1 = *(float *)(param_1 + 0x178);
  fVar6 = (float10)FUN_006533b0(ABS(*(float *)(param_1 + 0x140)));
  return fVar6 * (float10)(float)(fVar5 * fVar4 * (float10)fVar1);
}

