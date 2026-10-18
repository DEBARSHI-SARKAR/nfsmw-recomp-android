/* speed.exe 00484550 FUN_00484550; analysis pseudocode, not buildable source.
 * calls 00480c60 FUN_00480c60
 * calls 00786940 FUN_00786940
 * calls 00652ad0 _malloc
 * calls 005d8660 FUN_005d8660
 * calls 0047b980 FUN_0047b980
 * calls 00481bd0 FUN_00481bd0
 * calls 004716a0 FUN_004716a0
 */

undefined4 * __thiscall FUN_00484550(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a9b1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005d8660(0);
  *param_1 = &PTR_FUN_00894bac;
  local_4 = 0;
  FUN_00480c60(param_1 + 1);
  local_4._0_1_ = 1;
  FUN_0047b980();
  param_1[9] = &PTR___purecall_00895120;
  local_4._0_1_ = 2;
  *param_1 = &PTR_FUN_00895248;
  param_1[6] = &PTR_LAB_00895240;
  param_1[9] = &PTR_LAB_00895238;
  FUN_00786940(0);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = &DAT_00890978;
  param_1[0x14] = 0;
  local_4._0_1_ = 3;
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_2 + 0x20) + 0xc))();
  param_1[0x13] = puVar1[3];
  param_1[0x10] = *puVar1;
  param_1[0x11] = puVar1[1];
  param_1[0x12] = puVar1[2];
  pvVar2 = _malloc(0x120);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004716a0(0);
  }
  local_4._0_1_ = 3;
  param_1[0xb] = uVar3;
  pvVar2 = _malloc(0xf0);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (pvVar2 == (void *)0x0) {
    param_1[10] = 0;
  }
  else {
    uVar3 = FUN_00481bd0(*(undefined4 *)(param_2 + 8),param_1[0xb],3,0,0,0,1);
    param_1[10] = uVar3;
  }
  ExceptionList = pvStack_c;
  return param_1;
}

