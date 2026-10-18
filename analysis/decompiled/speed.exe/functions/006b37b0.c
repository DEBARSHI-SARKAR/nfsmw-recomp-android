/* speed.exe 006b37b0 FUN_006b37b0; analysis pseudocode, not buildable source.
 * calls 00691ed0 FUN_00691ed0
 * calls 006a0760 FUN_006a0760
 * calls 006a5520 FUN_006a5520
 * calls 006a5d40 FUN_006a5d40
 * calls 006a5aa0 FUN_006a5aa0
 * calls 006a5b80 FUN_006a5b80
 * calls 006a53d0 FUN_006a53d0
 * calls 006a58e0 FUN_006a58e0
 * calls 006a5670 FUN_006a5670
 * calls 00677480 FUN_00677480
 * calls 006a5c60 FUN_006a5c60
 * calls 005d59f0 FUN_005d59f0
 * calls 006a5590 FUN_006a5590
 * calls 005d7930 FUN_005d7930
 * calls 006a5600 FUN_006a5600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_006b37b0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d3c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00677480(param_2,0);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x13;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x14] = iVar4;
  FUN_005d7930(&LAB_00404010,puVar1);
  *puVar1 = &PTR_FUN_008aaedc;
  local_4._0_1_ = 1;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x15;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x16] = iVar4;
  FUN_005d7930(&LAB_00404020,puVar1);
  *puVar1 = &PTR_FUN_008aaf30;
  param_1[0x17] = &PTR___purecall_008a94b0;
  local_4._0_1_ = 2;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x18;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x19] = iVar4;
  FUN_005d7930(&LAB_0068a910,puVar1);
  *puVar1 = &PTR_FUN_008aaf1c;
  local_4._0_1_ = 3;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x1a;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x1b] = iVar4;
  FUN_005d7930(&LAB_0068a8a0,puVar1);
  *puVar1 = &PTR_FUN_008aaf14;
  local_4._0_1_ = 4;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x1c;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x1d] = iVar4;
  FUN_005d7930(&LAB_00668390,puVar1);
  *puVar1 = &PTR_FUN_008aaf7c;
  local_4._0_1_ = 5;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar2 = param_1 + 0x1e;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x1f] = iVar4;
  FUN_005d7930(&LAB_00604250,puVar2);
  *puVar2 = &PTR_FUN_008ab1c8;
  *puVar2 = &PTR_LAB_008ab6a0;
  *puVar1 = &PTR_LAB_008ab6b8;
  local_4._0_1_ = 6;
  *param_1 = &PTR_FUN_008ab758;
  param_1[2] = &PTR_LAB_008ab750;
  param_1[0x13] = &PTR_LAB_008ab720;
  param_1[0x15] = &PTR_LAB_008ab6e0;
  param_1[0x17] = &PTR_LAB_008ab6dc;
  param_1[0x18] = &PTR_LAB_008ab6c8;
  param_1[0x1a] = &PTR_LAB_008ab6c0;
  param_1[0x20] = 0;
  param_1[0x21] = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x3f800000;
  param_1[0x3f] = 0x3f800000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  uVar3 = FUN_006a5b80(param_1[0xd],0);
  FUN_006a5670(uVar3);
  local_4._0_1_ = 7;
  uVar3 = FUN_006a5c60(param_1[0xd],0);
  FUN_006a5600(uVar3);
  local_4._0_1_ = 8;
  uVar3 = FUN_006a5d40(param_1[0xd],0);
  FUN_006a5520(uVar3);
  local_4._0_1_ = 9;
  uVar3 = FUN_006a5aa0(param_1[0xd],0);
  FUN_006a5590(uVar3);
  local_4._0_1_ = 10;
  uVar3 = FUN_006a58e0(param_1[0xd],0);
  FUN_006a53d0(uVar3);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  param_1[0x11] = 0;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  uVar3 = FUN_005d59f0(&LAB_00403f90);
  param_1[0x44] = uVar3;
  uVar3 = FUN_005d59f0(&LAB_00404040);
  param_1[0x45] = uVar3;
  uVar3 = FUN_005d59f0(&LAB_00405240);
  param_1[0x46] = uVar3;
  FUN_006a0760();
  if (*(float *)(param_1[0x49] + 0x10) <= _DAT_00890968) {
    param_1[0x3e] = 0;
  }
  else {
    param_1[0x3e] = 0x3f800000;
  }
  FUN_00691ed0();
  ExceptionList = local_c;
  return param_1;
}

