/* speed.exe 006f9610 FUN_006f9610; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 006ee860 FUN_006ee860
 * calls 006f77f0 FUN_006f77f0
 * calls 005d29d0 FUN_005d29d0
 * calls 00478ec0 FUN_00478ec0
 * calls 00674580 FUN_00674580
 */

undefined4 * __fastcall FUN_006f9610(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f2b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006ee860(4);
  local_4 = 0;
  FUN_006f77f0();
  local_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar1 = param_1 + 0xb;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xc] = puVar4;
  FUN_005d7930(&LAB_00667bd0,puVar1);
  *puVar1 = &PTR_FUN_008b07ec;
  local_4._0_1_ = 2;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar2 = param_1 + 0xe;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0xf] = puVar4;
  FUN_005d7930(&LAB_00402820,puVar2);
  *puVar2 = &PTR_FUN_00894974;
  local_4._0_1_ = 3;
  *param_1 = &PTR_FUN_008b08a0;
  param_1[2] = &PTR_LAB_008b0898;
  *puVar1 = &PTR_LAB_008b0870;
  *puVar2 = &PTR_LAB_008b0854;
  param_1[0x11] = 0;
  puVar4 = (undefined4 *)FUN_005d29d0(0x14,0);
  local_4._0_1_ = 4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_008952f0;
    uVar5 = FUN_00478ec0();
    puVar4[2] = uVar5;
    puVar4[3] = 0;
    puVar4[4] = puVar2;
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  param_1[0x12] = puVar4;
  if (param_1 == (undefined4 *)0xffffffcc) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 0xb;
  }
  if (DAT_0092d790 <= DAT_0092d794) {
    uVar5 = (**(code **)(DAT_0092d788 + 0xc))(DAT_0092d794 + 1);
    FUN_00674580(uVar5);
  }
  piVar3 = (int *)(DAT_0092d78c + DAT_0092d794 * 4);
  if (piVar3 != (int *)0x0) {
    *piVar3 = (int)puVar4;
    DAT_0092d794 = DAT_0092d794 + 1;
    ExceptionList = local_c;
    return param_1;
  }
  DAT_0092d794 = DAT_0092d794 + 1;
  ExceptionList = local_c;
  return param_1;
}

