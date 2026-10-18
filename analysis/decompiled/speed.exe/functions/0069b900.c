/* speed.exe 0069b900 FUN_0069b900; analysis pseudocode, not buildable source.
 * calls 006717f0 FUN_006717f0
 * calls 006eea40 FUN_006eea40
 * calls 006fbea0 FUN_006fbea0
 */

undefined4 * __thiscall FUN_0069b900(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c32c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006717f0(param_2,0);
  param_1[0x12] = &PTR___purecall_00890d38;
  *param_1 = &PTR_FUN_008ab3b8;
  param_1[2] = &PTR_LAB_008ab3ac;
  param_1[0x12] = &PTR_FUN_008ab3a8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  iVar1 = *(int *)(param_2 + 4);
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
    piVar4 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(iVar1 + 0x2c);
    piVar4 = (int *)(iVar1 + 0x2c);
  }
  iVar1 = (**(code **)(*piVar3 + 0x44))();
  uVar5 = *(undefined4 *)(iVar1 + 4);
  uVar2 = (**(code **)(*piVar4 + 0x70))(uVar5);
  FUN_006eea40(uVar2,uVar5);
  local_4 = CONCAT31(local_4._1_3_,3);
  param_1[0x3a] = 0;
  FUN_006fbea0(param_1 + 0x12,param_1[0xd],"Effects");
  ExceptionList = pvStack_c;
  return param_1;
}

