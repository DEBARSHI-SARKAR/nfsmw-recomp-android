/* speed.exe 00739250 FUN_00739250; analysis pseudocode, not buildable source.
 * calls 005d0a70 FUN_005d0a70
 * calls 00444fe0 FUN_00444fe0
 * calls 006bd920 FUN_006bd920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00739250(int param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *(undefined4 *)(param_1 + 0x50);
  local_2c = *(undefined4 *)(param_1 + 0x54);
  local_28 = *(undefined4 *)(param_1 + 0x58);
  local_24 = *(undefined4 *)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 0x44);
  if (_DAT_00890968 < param_2) {
    FUN_005d0a70(param_1 + 0x330,&local_3c);
    FUN_005d0a70(*(undefined4 *)(param_1 + 0x34),&local_48);
    param_2 = _DAT_0089096c / param_2;
    fVar3 = _DAT_008b2b8c * param_2;
    *(float *)(iVar1 + 0x28) = (local_40 - local_34) * fVar3;
    *(float *)(iVar1 + 0x20) = (local_48 - local_3c) * fVar3;
    *(float *)(iVar1 + 0x24) = (local_44 - local_38) * fVar3;
    pfVar2 = *(float **)(param_1 + 0x38);
    fVar3 = *pfVar2;
    fVar4 = pfVar2[1];
    *(float *)(iVar1 + 0x38) = (pfVar2[2] - *(float *)(iVar1 + 0x18)) * param_2;
    *(float *)(iVar1 + 0x30) = (fVar3 - *(float *)(iVar1 + 0x10)) * param_2;
    *(float *)(iVar1 + 0x34) = (fVar4 - *(float *)(iVar1 + 0x14)) * param_2;
    pfVar2 = *(float **)(param_1 + 0x38);
    fVar3 = pfVar2[1];
    fVar4 = pfVar2[2];
    *(float *)(iVar1 + 0x10) = *pfVar2;
    *(float *)(iVar1 + 0x14) = fVar3;
    *(float *)(iVar1 + 0x18) = fVar4;
  }
  FUN_00444fe0(param_1 + 0x330,*(undefined4 *)(param_1 + 0x34));
  FUN_006bd920(&local_20,*(undefined4 *)(param_1 + 0x34),&local_30);
  *(float *)(param_1 + 0x360) = *(float *)(param_1 + 0x360) - local_20;
  *(float *)(param_1 + 0x364) = *(float *)(param_1 + 0x364) - local_1c;
  *(float *)(param_1 + 0x368) = *(float *)(param_1 + 0x368) - local_18;
  return;
}

