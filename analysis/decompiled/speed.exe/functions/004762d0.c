/* speed.exe 004762d0 FUN_004762d0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0064b680 FUN_0064b680
 * calls 006cf0a0 FUN_006cf0a0
 * calls 006513c0 FUN_006513c0
 * calls 004700d0 FUN_004700d0
 * calls 00651980 FUN_00651980
 * calls 00475a50 FUN_00475a50
 * calls 0045ed20 thunk_FUN_006bd940
 */

void __thiscall FUN_004762d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d0 [64];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  cVar3 = FUN_0064b680();
  if (cVar3 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x88) + 0x24) = 0x3f333333;
    iVar1 = *(int *)(param_1 + 0x8c);
    *(undefined4 *)(iVar1 + 0x24) = 0x3f333333;
    *(undefined4 *)(iVar1 + 0x50) = 0x3f333333;
    *(undefined4 *)(iVar1 + 0x7c) = 0x3f333333;
    iVar1 = *(int *)(param_1 + 0x90);
    *(undefined4 *)(iVar1 + 0x24) = 0x3f333333;
    *(undefined4 *)(iVar1 + 0x50) = 0x3f333333;
    *(undefined4 *)(iVar1 + 0x7c) = 0x3f333333;
    FUN_00475a50(local_90,0,local_d0,0);
    FUN_006513c0(param_2,0,0);
    FUN_00651980(param_2,0,0);
    FUN_00651980(param_2,0,0);
    puVar2 = *(undefined4 **)(param_1 + 0x8c);
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0x3f800000;
    local_e8 = puVar2[0x16];
    local_ec = puVar2[0xb];
    local_f0 = *puVar2;
    puVar2 = *(undefined4 **)(param_1 + 0x90);
    local_100 = *puVar2;
    local_f8 = puVar2[0x16];
    local_fc = puVar2[0xb];
    thunk_FUN_006bd940(&local_f0,local_90,&local_f0);
    thunk_FUN_006bd940(&local_100,local_d0,&local_100);
    FUN_006cf0a0(local_50,&local_f0,&local_100,&local_e0);
    if (DAT_00911020 == 0) {
      uVar4 = FUN_007c4b80();
      *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = uVar4;
    }
    FUN_004700d0(local_50,param_2);
  }
  return;
}

