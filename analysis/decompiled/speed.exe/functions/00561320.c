/* speed.exe 00561320 FUN_00561320; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 0062c2d0 FUN_0062c2d0
 * calls 007a1fa0 FUN_007a1fa0
 * calls 0055afa0 FUN_0055afa0
 * calls 00516be0 FUN_00516be0
 * calls 00551e90 FUN_00551e90
 * calls 007a2920 FUN_007a2920
 * calls 00586290 FUN_00586290
 * calls 007a1fd0 FUN_007a1fd0
 */

undefined4 * __thiscall FUN_00561320(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871112;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089f0a8;
  iVar1 = param_2[2];
  *(bool *)(param_1 + 0xb) = iVar1 != 0;
  local_4 = 0;
  FUN_0055afa0(*param_2,iVar1 != 0);
  local_4._0_1_ = 1;
  if ((*(uint *)(DAT_0091cf90 + 300) >> 0x11 & 1) == 0) {
    FUN_00516be0(0xaf922178,param_1[4],0xfffffffc,0xff);
    if (*(char *)(param_1 + 0xb) == '\0') {
      FUN_007a1fa0();
      FUN_007a1fd0();
    }
  }
  else {
    FUN_007a2920();
    if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) == '\x10') {
      iVar1 = FUN_00627400(0xc);
      local_4._0_1_ = 2;
      if (iVar1 != 0) {
        FUN_0062c2d0(*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) - 1);
      }
      local_4._0_1_ = 1;
    }
    DAT_0091ca3c = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
    FUN_00516be0(0xb21a45f,param_1[4],0xfffffffc,0xff);
  }
  FUN_00551e90();
  ExceptionList = local_c;
  return param_1;
}

