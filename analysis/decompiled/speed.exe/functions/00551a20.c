/* speed.exe 00551a20 FUN_00551a20; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00508b10 FUN_00508b10
 * calls 00511820 FUN_00511820
 * calls 00516af0 FUN_00516af0
 * calls 00514c70 FUN_00514c70
 * calls 00530240 FUN_00530240
 * calls 007a2920 FUN_007a2920
 * calls 00516be0 FUN_00516be0
 * calls 00548020 FUN_00548020
 */

void __fastcall FUN_00551a20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_4;
  
  local_4 = param_1;
  if ((((*(int *)(param_1 + 0x10) == 0) ||
       (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
      (iVar1 = FUN_005b8550(0xc1f62308), iVar1 == 0)) || (*(int *)(iVar1 + 0x18) != 1)) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     ((iVar1 = FUN_005b8550(0x7fe4020f), iVar1 == 0 || (*(int *)(iVar1 + 0x18) != 1)))) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x38) = iVar1;
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     ((iVar1 = FUN_005b8550(0x26869897), iVar1 == 0 || (*(int *)(iVar1 + 0x18) != 1)))) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  if ((((*(int *)(param_1 + 0x10) == 0) ||
       (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
      (iVar1 = FUN_005b8550(0xf5a2a087), iVar1 == 0)) || (*(int *)(iVar1 + 0x18) != 1)) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x40) = iVar1;
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     ((iVar1 = FUN_005b8550(0x2cbe1dd0), iVar1 == 0 || (*(int *)(iVar1 + 0x18) != 1)))) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x44) = iVar1;
  *(uint *)(param_1 + 0x58) = DAT_0091ca3c;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x40);
  *(int *)(param_1 + 0x7c) = iVar1;
  FUN_00514c70(*(undefined4 *)(param_1 + 0x34));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x78));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x7c));
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_00530240();
  }
  FUN_00514c70(*(undefined4 *)(param_1 + 0x38));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x3c));
  local_4 = FUN_00511820();
  iVar1 = *(int *)(param_1 + 0x38);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != local_4)) {
    *(int *)(iVar1 + 0x24) = local_4;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != local_4)) {
    *(int *)(iVar1 + 0x24) = local_4;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
  }
  FUN_00508b10(&local_4,1,&LAB_0052edf0,param_1,0);
  if ((*(char *)(param_1 + 0x2c) == '\0') || (*(char *)(param_1 + 0x2d) == '\0')) {
    if ((*(uint *)(DAT_0091cf90 + 300) >> 0x11 & 1) == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = 0xaf922178;
    }
    else {
      FUN_007a2920();
      DAT_0091ca3c = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
      FUN_00516be0(0xb21a45f,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = 0xb4c144b1;
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = 0x34297cb0;
  }
  FUN_00516be0(uVar2,uVar3,0xfffffffc,0xff);
  FUN_00548020();
  return;
}

