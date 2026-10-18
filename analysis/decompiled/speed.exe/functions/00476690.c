/* speed.exe 00476690 FUN_00476690; analysis pseudocode, not buildable source.
 * calls 006bdd20 FUN_006bdd20
 * calls 006bd900 FUN_006bd900
 * calls 0064c420 FUN_0064c420
 * calls 00444fe0 FUN_00444fe0
 * calls 006bdbb0 FUN_006bdbb0
 * calls 006bdc60 FUN_006bdc60
 * calls 0045ed30 FUN_0045ed30
 * calls 004700d0 FUN_004700d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00476690(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [48];
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x39) != '\0') {
    iVar1 = *(int *)(param_1 + 0x80);
    local_110 = 0x3f800000;
    local_10c = 0;
    local_108 = 0;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0x3f800000;
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = 0;
    local_ec = 0;
    local_e8 = 0x3f800000;
    local_e4 = 0;
    local_d4 = 0x3f800000;
    local_e0 = -*(float *)(iVar1 + 0x20);
    local_dc = -*(float *)(iVar1 + 0x24);
    local_d8 = -*(float *)(iVar1 + 0x28);
    FUN_00444fe0(local_50,iVar1 + 0x50);
    FUN_0045ed30(local_90,local_50);
    FUN_006bdbb0(local_90,local_90,0x4000);
    FUN_006bdc60(local_90,local_90,0x4000);
    FUN_006bdd20(local_90,local_90,0);
    FUN_006bd900(local_d0,&local_110,local_90);
    local_a0 = _DAT_008ee2b0 + local_a0;
    local_9c = _DAT_008ee2b4 + local_9c;
    local_98 = _DAT_008ee2b8 + local_98;
    if (DAT_00911020 == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = 20000;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xbc) = DAT_008eded8;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc0) = DAT_008ededc;
    FUN_0064c420(*(undefined4 *)(param_1 + 0x10),local_d0);
    FUN_004700d0(local_d0,param_2);
  }
  return;
}

