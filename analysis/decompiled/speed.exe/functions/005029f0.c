/* speed.exe 005029f0 FUN_005029f0; analysis pseudocode, not buildable source.
 * calls 006bd900 FUN_006bd900
 * calls 00502520 FUN_00502520
 * calls 006cf0a0 FUN_006cf0a0
 * calls 00444fe0 FUN_00444fe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005029f0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar1 != 0) {
    uVar3 = DAT_00915f84;
    uVar2 = DAT_00915f84 + 0x130;
    if (DAT_00915f88 <= DAT_00915f84 + 0x130) {
      DAT_00915f98 = DAT_00915f98 + 0x130;
      DAT_00915f94 = 1;
      uVar3 = 0;
      uVar2 = DAT_00915f84;
    }
    DAT_00915f84 = uVar2;
    *(uint *)(param_1 + 0x5c) = uVar3;
    if (uVar3 != 0) {
      local_b8 = *(float *)(iVar1 + 0x28);
      local_a4 = 0x3f800000;
      local_b0 = *(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 8) * _DAT_00899c88;
      local_ac = *(float *)(iVar1 + 0x44) - *(float *)(iVar1 + 0x18) * _DAT_00899c88;
      local_a8 = (*(float *)(iVar1 + 0x48) - local_b8 * _DAT_00899c88) + _DAT_00899c8c;
      FUN_00502520(uVar3,&DAT_008f2ab0,&DAT_00987ab0,&DAT_00987fc0,&local_b0,param_1);
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0.0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0x3f800000;
      FUN_006cf0a0(local_50,&DAT_009175a0,&local_c0,&local_60);
      local_9c = 0;
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      local_7c = 0;
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0x3f800000;
      local_a0 = 0x3f800000;
      local_8c = 0x3f800000;
      local_78 = 0x3f800000;
      FUN_006bd900(local_50,&local_a0,local_50);
      FUN_00444fe0(*(int *)(param_1 + 0x5c) + 0x90,local_50);
    }
  }
  return;
}

