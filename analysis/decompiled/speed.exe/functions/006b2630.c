/* speed.exe 006b2630 FUN_006b2630; analysis pseudocode, not buildable source.
 * calls 006b1a20 FUN_006b1a20
 * calls 005d59f0 FUN_005d59f0
 * calls 006a5800 FUN_006a5800
 * calls 006a5590 FUN_006a5590
 * calls 006a5aa0 FUN_006a5aa0
 * calls 006a59c0 FUN_006a59c0
 * calls 006fbea0 FUN_006fbea0
 * calls 006a53d0 FUN_006a53d0
 * calls 006a58e0 FUN_006a58e0
 * calls 0069f6f0 FUN_0069f6f0
 * calls 006a5440 FUN_006a5440
 * calls 006a54b0 FUN_006a54b0
 */

undefined4 * __thiscall FUN_006b2630(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d270;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b1a20(param_2);
  param_1[0x24] = &PTR___purecall_00890d38;
  param_1[0x25] = &PTR___purecall_008a94b0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008abcb0;
  param_1[2] = &PTR_LAB_008abca8;
  param_1[0x13] = &PTR_LAB_008abc30;
  param_1[0x24] = &PTR_FUN_008abc2c;
  param_1[0x25] = &PTR_LAB_008abc28;
  uVar1 = FUN_006a59c0(param_1[0xd],0);
  FUN_006a54b0(uVar1);
  local_4._0_1_ = 1;
  uVar1 = FUN_006a58e0(param_1[0xd],0);
  FUN_006a53d0(uVar1);
  local_4._0_1_ = 2;
  uVar1 = FUN_006a5800(param_1[0xd],0);
  FUN_006a5440(uVar1);
  local_4._0_1_ = 3;
  uVar1 = FUN_006a5aa0(param_1[0xd],0);
  FUN_006a5590(uVar1);
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0x3f800000;
  param_1[0x40] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x44] = 0x3f800000;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x42340000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x11] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  uVar1 = FUN_005d59f0(&LAB_004039f0);
  param_1[0x3a] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_004039c0);
  param_1[0x3b] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00403f90);
  param_1[0x3c] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00404010);
  param_1[0x3d] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00405240);
  param_1[0x3e] = uVar1;
  FUN_006fbea0(param_1 + 0x24,param_1[0xd],"SuspensionSimple");
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  FUN_0069f6f0();
  ExceptionList = local_c;
  return param_1;
}

