/* speed.exe 0066c610 FUN_0066c610; analysis pseudocode, not buildable source.
 * calls 00452940 FUN_00452940
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066c610(int param_1,int param_2,int param_3,float param_4,uint param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 8);
  local_4 = 0.0;
  uVar4 = FUN_00452940();
  if (param_5 < uVar4) {
    pfVar6 = (float *)(iVar1 + 8 + param_5 * 4);
  }
  else {
    pfVar6 = (float *)FUN_006269b0(4);
  }
  fVar3 = *(float *)(*(int *)(param_1 + 8) + 0x80) * *pfVar6;
  fVar2 = *(float *)(*(int *)(param_2 + 8) + 0x58) - *(float *)(*(int *)(param_2 + 8) + 0x5c);
  if (fVar3 < _DAT_00890968) {
    fVar3 = -fVar3;
  }
  if ((_DAT_00890968 < fVar3) && (_DAT_00890968 < fVar2)) {
    iVar1 = *(int *)(param_3 + 8);
    local_4 = (((param_4 - *(float *)(*(int *)(param_2 + 8) + 0x5c)) / fVar3) / fVar2) *
              *(float *)(*(int *)(param_2 + 8) + 0x58) *
              ((*(float *)(iVar1 + 0x30) * _DAT_008a9388 +
               *(float *)(iVar1 + 0x28) * _DAT_00890dc4 * *(float *)(iVar1 + 0x40) * _DAT_00897188)
               * _DAT_008933d4 +
              (*(float *)(iVar1 + 0x34) * _DAT_008a9388 +
              *(float *)(iVar1 + 0x2c) * _DAT_00890dc4 * *(float *)(iVar1 + 0x44) * _DAT_00897188) *
              _DAT_008933d4) * _DAT_008933d4 * _DAT_008a9398;
  }
  iVar1 = *(int *)(param_2 + 8);
  iVar5 = FUN_00452940();
  if (iVar5 == 0) {
    pfVar6 = (float *)FUN_006269b0(4);
  }
  else {
    pfVar6 = (float *)(iVar1 + 0x34);
  }
  fVar7 = (float10)*pfVar6 * (float10)_DAT_00890958;
  if (fVar7 <= (float10)_DAT_00890968) {
    fVar7 = (float10)local_4;
  }
  else if ((float10)local_4 < fVar7) {
    return (float10)local_4;
  }
  return fVar7;
}

