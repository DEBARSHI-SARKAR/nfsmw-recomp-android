/* speed.exe 004a8020 FUN_004a8020; analysis pseudocode, not buildable source.
 * calls 0049c770 FUN_0049c770
 * calls 0048da30 FUN_0048da30
 * calls 00494380 FUN_00494380
 * calls 004935c0 FUN_004935c0
 * calls 00494110 FUN_00494110
 * calls 0048ddf0 FUN_0048ddf0
 * calls 0048dc20 FUN_0048dc20
 * calls 00493670 FUN_00493670
 * calls 00493850 FUN_00493850
 * calls 0048dc80 FUN_0048dc80
 * calls 00493700 FUN_00493700
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004a8020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90 [16];
  undefined1 local_50 [76];
  
  FUN_00493670(local_90);
  FUN_00493850(param_3,&local_d8);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  fVar3 = (float10)FUN_0049c770(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                                &local_d8);
  FUN_00493700((float)(fVar3 * (float10)_DAT_00890974),uVar4,uVar5,uVar6);
  local_c8 = *(undefined4 *)(param_6 + 0x30);
  local_c4 = *(undefined4 *)(param_6 + 0x34);
  local_c0 = *(undefined4 *)(param_6 + 0x38);
  FUN_00493850(&local_c8,&local_e4);
  local_ac = local_e4;
  local_a8 = local_e0;
  local_a4 = local_dc;
  local_e4 = local_d8;
  local_e0 = local_d4;
  local_dc = local_d0;
  FUN_0048dc80(&local_ac,&local_e4,&local_d8);
  FUN_00494110(local_d8,local_d4,local_d0,local_cc,0,0,0);
  if (param_7 != 0) {
    FUN_004935c0(param_7,&local_a0);
    FUN_004935c0(param_1 + 0x18,&local_c8);
    local_bc = local_c8;
    local_b8 = local_c4;
    local_b4 = local_c0;
    local_e4 = local_a0;
    local_e0 = local_9c;
    local_dc = local_98;
    fVar3 = (float10)FUN_0048da30(&local_bc,&local_e4,&local_a0);
    FUN_0048dc20(&local_ac,(float)fVar3);
    FUN_0048ddf0(&local_a0,&local_d8,&local_bc);
    FUN_00494110(local_bc,local_b8,local_b4,local_b0,0,0,0);
  }
  FUN_00494380(local_50,param_4,local_90);
  puVar2 = local_90;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_4 = *puVar2;
    puVar2 = puVar2 + 1;
    param_4 = param_4 + 1;
  }
  return;
}

