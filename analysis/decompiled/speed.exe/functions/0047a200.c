/* speed.exe 0047a200 FUN_0047a200; analysis pseudocode, not buildable source.
 * calls 006533b0 FUN_006533b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047a200(int param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 *local_4;
  
  local_c = *(float *)(param_1 + 0x10);
  local_10 = *(float *)(param_1 + 0x14);
  local_8 = _DAT_0089096c / (local_c - local_10);
  local_4 = &local_1c;
  local_1c = 0xbc23d70a;
  local_18 = 0x3f8147ae;
  local_14 = 2;
  fVar2 = (float10)FUN_006533b0(*param_2);
  fVar1 = (float10)_DAT_0089096c;
  local_4 = (undefined4 *)(param_1 + 8);
  local_14 = 2;
  local_10 = 0.0;
  local_c = 1.0;
  local_8 = 1.0;
  fVar3 = (float10)FUN_006533b0((float)(fVar1 - fVar2));
  local_10 = (float)-fVar3;
  local_4 = &local_1c;
  local_c = (float)fVar3;
  local_14 = 2;
  local_8 = (float)((float10)_DAT_0089096c / (fVar3 - (float10)local_10));
  fVar3 = (float10)FUN_006533b0(-(float)param_2[1]);
  *param_4 = (float)(fVar1 - fVar2);
  *param_3 = (float)fVar3;
  return;
}

