/* speed.exe 00477250 FUN_00477250; analysis pseudocode, not buildable source.
 * calls 0045f7c0 FUN_0045f7c0
 * calls 007c4b80 FUN_007c4b80
 * calls 00470fe0 FUN_00470fe0
 * calls 006cf0a0 FUN_006cf0a0
 * calls 00444fe0 FUN_00444fe0
 * calls 0045dc10 FUN_0045dc10
 * calls 0045f590 FUN_0045f590
 * calls 0045ed20 thunk_FUN_006bd940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00477250(int param_1)

{
  int iVar1;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 local_d0 [8];
  undefined4 local_c8;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 local_54 [4];
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 0x80);
  FUN_00444fe0(local_d0,iVar1 + 0x50);
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0x3f800000;
  local_a4 = 0;
  local_c8 = 0;
  local_b8 = 0;
  FUN_0045f7c0(local_d0,local_c0,&local_b0);
  FUN_0045f7c0(local_c0,&local_b0,local_d0);
  FUN_0045f590(local_d0,local_d0);
  FUN_0045f590(local_c0,local_c0);
  thunk_FUN_006bd940(&local_70,local_d0,param_1 + 0x90);
  local_e0 = local_70 + *(float *)(iVar1 + 0x20);
  local_dc = local_6c + *(float *)(iVar1 + 0x24);
  local_d8 = local_68 + *(float *)(iVar1 + 0x28);
  iVar1 = FUN_007c4b80();
  FUN_0045dc10(&local_fc,&local_f4,iVar1 / 0x168);
  if (*(float *)(param_1 + 0x88) < _DAT_008945ec) {
    *(undefined4 *)(param_1 + 0x88) = 0x40400000;
  }
  iVar1 = FUN_007c4b80();
  FUN_0045dc10(&local_f8,local_54,iVar1 / 0x168);
  local_88 = *(float *)(param_1 + 0x8c);
  local_90 = local_f4 * local_88;
  local_8c = local_fc * local_88;
  local_88 = local_88 * local_f8;
  thunk_FUN_006bd940(&local_f0,local_d0,&local_90);
  local_f0 = local_f0 + local_e0;
  local_ec = local_ec + local_dc;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0x3f800000;
  local_e8 = local_e8 + local_d8;
  FUN_006cf0a0(local_50,&local_f0,&local_e0,&local_80);
  FUN_00470fe0(local_50,*(int *)(param_1 + 0x80) + 0x20);
  FUN_00444fe0(param_1 + 0xb0,local_50);
  return;
}

