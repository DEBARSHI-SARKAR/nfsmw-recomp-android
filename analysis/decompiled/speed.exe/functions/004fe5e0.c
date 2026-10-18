/* speed.exe 004fe5e0 FUN_004fe5e0; analysis pseudocode, not buildable source.
 * calls 0045ea70 FUN_0045ea70
 * calls 004fe540 FUN_004fe540
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004fe5e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float local_90 [4];
  float local_80;
  float local_7c;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar8 = *(int *)(param_1 + 8);
    uVar1 = *(undefined4 *)(iVar8 + 0xb4);
    uVar2 = *(undefined4 *)(iVar8 + 0xe4);
    uVar3 = *(undefined4 *)(iVar8 + 0xb0);
    FUN_004fe540(*(undefined4 *)(iVar8 + 0xac),local_50);
    FUN_004fe540(uVar2,local_40);
    FUN_004fe540(uVar3,local_30);
    FUN_004fe540(uVar1,local_20);
    pfVar9 = local_90;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar9 = 0.0;
      pfVar9 = pfVar9 + 1;
    }
    iVar8 = *(int *)(param_1 + 8);
    fVar4 = *(float *)(iVar8 + 0x50) * _DAT_00894c30;
    fVar5 = *(float *)(iVar8 + 0x54) * _DAT_00894c30;
    fVar6 = *(float *)(iVar8 + 0x58) * _DAT_00894c30;
    fVar7 = *(float *)(iVar8 + 0x5c) * _DAT_00894c30;
    local_90[0] = *(float *)(iVar8 + 0x40) * _DAT_008933d4;
    local_80 = *(float *)(iVar8 + 0x44) * _DAT_008933d4;
    local_70 = *(float *)(iVar8 + 0x48) * _DAT_008933d4;
    local_60 = *(float *)(iVar8 + 0x4c) * _DAT_008933d4;
    iVar8 = *(int *)(param_1 + 8);
    local_90[1] = *(float *)(iVar8 + 0x20) * _DAT_00899dd4;
    local_7c = *(float *)(iVar8 + 0x24) * _DAT_00899dd4;
    local_6c = *(float *)(iVar8 + 0x28) * _DAT_00899dd4;
    local_5c = *(float *)(iVar8 + 0x2c) * _DAT_00899dd4;
    FUN_0045ea70(param_1 + 0x20,local_50,fVar4,fVar5,fVar6,fVar7);
    FUN_0045ea70(param_1 + 0x60,local_90,fVar4,fVar5,fVar6,fVar7);
  }
  return;
}

