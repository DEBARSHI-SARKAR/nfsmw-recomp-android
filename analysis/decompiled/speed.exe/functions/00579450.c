/* speed.exe 00579450 FUN_00579450; analysis pseudocode, not buildable source.
 * calls 005b8190 FUN_005b8190
 * calls 00564fb0 FUN_00564fb0
 * calls 00503400 FUN_00503400
 * calls 005b8320 FUN_005b8320
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00579450(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar5 = FUN_00503400(*(undefined4 *)(param_1 + 0x24),1,0);
  sVar1 = *(short *)(iVar5 + 0x46);
  fVar3 = (float)(int)sVar1;
  fVar4 = _DAT_0089096c / fVar3;
  fVar6 = (float10)FUN_00564fb0(0,param_3,(fVar3 - param_4) * fVar4,param_5 * fVar4,param_2);
  *(float *)(iVar2 + 0x48) = (float)fVar6;
  local_c = *(undefined4 *)(iVar2 + 0x1c);
  fVar3 = *(float *)(iVar2 + 0x20);
  local_4 = *(undefined4 *)(iVar2 + 0x24);
  local_18 = *(undefined4 *)(iVar2 + 0x38);
  fVar4 = *(float *)(iVar2 + 0x3c);
  local_10 = *(undefined4 *)(iVar2 + 0x40);
  fVar7 = ((float10)_DAT_0089096c - fVar6) * (float10)(int)sVar1;
  fVar6 = (float10)_DAT_008933d4;
  local_14 = (float)fVar7;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
  local_8 = (float)(((float10)fVar4 - fVar7) * fVar6 + (float10)fVar3);
  FUN_005b8320(&local_18,0);
  FUN_005b8190(&local_c,0);
  return;
}

