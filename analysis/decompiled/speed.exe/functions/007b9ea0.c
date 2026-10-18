/* speed.exe 007b9ea0 FUN_007b9ea0; analysis pseudocode, not buildable source.
 * calls 0072a990 FUN_0072a990
 * calls 0051e1a0 FUN_0051e1a0
 * calls 004770b0 FUN_004770b0
 * calls 007a2310 FUN_007a2310
 * calls 007a8c70 FUN_007a8c70
 * calls 007b40e0 FUN_007b40e0
 * calls 007a96c0 FUN_007a96c0
 * calls 00476f30 FUN_00476f30
 * calls 00516ac0 FUN_00516ac0
 * calls 007a8fe0 FUN_007a8fe0
 * calls 007609b0 FUN_007609b0
 * calls 007c4b80 FUN_007c4b80
 * calls 0045a430 FUN_0045a430
 * calls 00516c90 FUN_00516c90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007b9ea0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_40;
  int local_2c;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00883570;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if ((*(int *)(param_1 + 0x54) == 0) &&
     (ExceptionList = &local_1c, *(char *)(*(int *)(param_1 + 0x2c) + 0x62c) != '\0')) {
    ExceptionList = &local_1c;
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x54) = 1;
    if ((*(char *)(*(int *)(param_1 + 0x2c) + 0x621) != '\0') &&
       (iVar2 = *(int *)(param_1 + 0x2c) + 0x310, iVar2 != 0)) {
      FUN_007609b0(iVar2);
      *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x574) = 1;
      FUN_00516c90(0x913fa282,0,0);
    }
  }
  FUN_007a2310();
  if ((((*(float *)(param_1 + 0x7c) == _DAT_00890968) &&
       (*(float *)(param_1 + 0x80) == _DAT_00890968)) &&
      (*(float *)(param_1 + 0x84) == _DAT_00890968)) &&
     ((0 < DAT_009b9e58 && (DAT_00926134 == '\0')))) {
    DAT_009b9e58 = DAT_009b9e58 + -1;
  }
  if (((DAT_009b9e58 == 0) && (*(char *)(param_1 + 0x78) != '\0')) && (DAT_009b9e5d == '\0')) {
    bVar1 = true;
    if (DAT_009b9e5c != '\0') {
      FUN_00476f30(DAT_00905e28);
      DAT_009b9e5c = '\0';
      DAT_009b9e5d = '\x01';
      goto LAB_007b9fbc;
    }
  }
  else {
LAB_007b9fbc:
    bVar1 = false;
  }
  iVar2 = FUN_00516ac0();
  if (iVar2 == 0) goto LAB_007ba0eb;
  iVar2 = FUN_007a8c70(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(param_1 + 0x88));
  uVar3 = FUN_007a8fe0(iVar2);
  FUN_0051e1a0(uVar3,0,0);
  local_14 = 0;
  FUN_0051e1a0(iVar2,0,0);
  local_14._0_1_ = 1;
  if (iVar2 == *(int *)(param_1 + 0x74)) {
    if (bVar1) {
      if (iVar2 != *(int *)(param_1 + 0x74)) goto LAB_007ba028;
      DAT_009b9e58 = FUN_007c4b80();
      DAT_009b9e5c = '\x01';
      goto LAB_007ba063;
    }
  }
  else {
LAB_007ba028:
    DAT_009b9e58 = FUN_007c4b80();
    DAT_009b9e5c = '\0';
    DAT_009b9e5d = '\0';
LAB_007ba063:
    *(int *)(param_1 + 0x74) = iVar2;
    *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(local_2c + 0x5a);
    if (*(char *)(param_1 + 0x58) == '\0') {
      local_58 = *(undefined4 *)(local_40 + 0x50);
      local_60 = *(undefined4 *)(local_40 + 0x3c);
      local_5c = *(undefined4 *)(local_40 + 0x54);
      local_70 = *(undefined4 *)(local_40 + 0x2c);
      local_68 = *(undefined4 *)(local_40 + 0x34);
      local_6c = *(undefined4 *)(local_40 + 0x30);
      FUN_004770b0(&local_60,*(undefined4 *)(local_40 + 0x44),*(undefined4 *)(local_40 + 0x24),
                   &local_70,*(undefined4 *)(local_40 + 0x20),*(undefined4 *)(local_40 + 0x1c),
                   *(undefined4 *)(local_40 + 0x48));
    }
  }
  local_14 = (uint)local_14._1_3_ << 8;
  FUN_0045a430();
  local_14 = 0xffffffff;
  FUN_0045a430();
LAB_007ba0eb:
  if (DAT_009196b4 != 0) {
    FUN_0072a990(4,DAT_009b9e60,0,0,0);
  }
  FUN_007a96c0(*(undefined4 *)(param_1 + 0x34));
  FUN_007b40e0();
  ExceptionList = local_1c;
  return;
}

