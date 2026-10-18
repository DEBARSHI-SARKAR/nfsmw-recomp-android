/* speed.exe 006a49c0 FUN_006a49c0; analysis pseudocode, not buildable source.
 * calls 006f4400 FUN_006f4400
 * calls 00677480 FUN_00677480
 * calls 005d59f0 FUN_005d59f0
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006a49c0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c9fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00677480();
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
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008ab358;
  *param_1 = &PTR_FUN_008aba64;
  param_1[2] = &PTR_LAB_008aba5c;
  *puVar1 = &PTR_LAB_008aba54;
  param_1[0x15] = 0;
  local_4._0_1_ = 1;
  uVar3 = FUN_005d59f0();
  param_1[0x17] = uVar3;
  piVar2 = (int *)param_1[0xd];
  (**(code **)(*piVar2 + 0x44))();
  (**(code **)(*piVar2 + 0x70))();
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar3 = FUN_006f4400();
  param_1[0x15] = uVar3;
  ExceptionList = pvStack_c;
  return param_1;
}

