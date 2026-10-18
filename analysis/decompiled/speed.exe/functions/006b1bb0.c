/* speed.exe 006b1bb0 FUN_006b1bb0; analysis pseudocode, not buildable source.
 * calls 006b1a20 FUN_006b1a20
 * calls 006a5800 FUN_006a5800
 * calls 006a5aa0 FUN_006a5aa0
 * calls 006fbea0 FUN_006fbea0
 * calls 006a53d0 FUN_006a53d0
 * calls 006a58e0 FUN_006a58e0
 * calls 006a5440 FUN_006a5440
 * calls 0069d900 FUN_0069d900
 * calls 005d59f0 FUN_005d59f0
 * calls 006a5590 FUN_006a5590
 * calls 006a59c0 FUN_006a59c0
 * calls 0069e290 FUN_0069e290
 * calls 006a54b0 FUN_006a54b0
 */

undefined4 * __thiscall FUN_006b1bb0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d1be;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b1a20(param_2);
  param_1[0x24] = &PTR___purecall_00890d38;
  param_1[0x25] = &PTR___purecall_008a94b0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008abb48;
  param_1[2] = &PTR_LAB_008abb40;
  param_1[0x13] = &PTR_LAB_008abac8;
  param_1[0x24] = &PTR_LAB_008abac4;
  param_1[0x25] = &PTR_LAB_008abac0;
  uVar1 = FUN_006a58e0(param_1[0xd],0);
  FUN_006a53d0(uVar1);
  local_4._0_1_ = 1;
  uVar1 = FUN_006a59c0(param_1[0xd],0);
  FUN_006a54b0(uVar1);
  local_4._0_1_ = 2;
  uVar1 = FUN_006a5800(param_1[0xd],0);
  FUN_006a5440(uVar1);
  local_4._0_1_ = 3;
  uVar1 = FUN_006a5aa0(param_1[0xd],0);
  FUN_006a5590(uVar1);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  local_4._0_1_ = 4;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0x3f800000;
  param_1[0x46] = 0;
  FUN_0069d900();
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x11] = 0;
  uVar1 = FUN_005d59f0(&LAB_004039f0);
  param_1[0x3a] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_004039c0);
  param_1[0x3b] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00404010);
  param_1[0x3c] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00403770);
  param_1[0x3d] = uVar1;
  FUN_006fbea0(param_1 + 0x24,param_1[0xd],"SuspensionRacer");
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  FUN_0069e290();
  ExceptionList = local_c;
  return param_1;
}

