/* speed.exe 006b9e70 FUN_006b9e70; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00677480 FUN_00677480
 * calls 005d7930 FUN_005d7930
 * calls 00478ec0 FUN_00478ec0
 * calls 006a5fe0 FUN_006a5fe0
 * calls 005d29d0 FUN_005d29d0
 * calls 006b5900 FUN_006b5900
 */

undefined4 * __thiscall FUN_006b9e70(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087dfa3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00677480(param_2,2);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar2 = param_1 + 0x13;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x14] = iVar5;
  FUN_005d7930(&LAB_00404ff0,puVar2);
  *puVar2 = &PTR_FUN_008a93c0;
  local_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = param_1 + 4;
  }
  FUN_006b5900(puVar6);
  local_4._0_1_ = 2;
  if (param_1 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = param_1 + 4;
  }
  puVar1 = param_1 + 0x18;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x19] = puVar6;
  FUN_005d7930(&LAB_00402820,puVar1);
  *puVar1 = &PTR_FUN_00894974;
  param_1[0x15] = &PTR_LAB_008ad488;
  local_4._0_1_ = 3;
  *param_1 = &PTR_FUN_008ad52c;
  param_1[2] = &PTR_LAB_008ad524;
  *puVar2 = &PTR_LAB_008ad508;
  *puVar1 = &PTR_LAB_008ad468;
  param_1[0x1a] = 0;
  puVar2 = (undefined4 *)FUN_005d29d0(0x14,0);
  local_4._0_1_ = 4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_008952f0;
    uVar3 = FUN_00478ec0();
    puVar2[2] = uVar3;
    puVar2[3] = 0;
    puVar2[4] = puVar1;
  }
  local_4._0_1_ = 3;
  param_1[0x1b] = puVar2;
  uVar3 = FUN_006a5fe0();
  param_1[0x1d] = uVar3;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  piVar4 = (int *)FUN_005d59f0(&LAB_00620c50);
  if (piVar4 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar4 + 4))();
    param_1[0x1a] = uVar3;
  }
  ExceptionList = local_c;
  return param_1;
}

