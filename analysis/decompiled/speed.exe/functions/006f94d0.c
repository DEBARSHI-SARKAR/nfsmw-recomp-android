/* speed.exe 006f94d0 FUN_006f94d0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 006f6c40 FUN_006f6c40
 * calls 006ee860 FUN_006ee860
 * calls 005d29d0 FUN_005d29d0
 * calls 00478ec0 FUN_00478ec0
 * calls 006f6330 FUN_006f6330
 */

undefined4 * __thiscall FUN_006f94d0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006ee860(param_2 + 3);
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_006f6330(param_1);
  local_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 4;
  }
  FUN_006f6c40(puVar2);
  local_4._0_1_ = 2;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 4;
  }
  puVar1 = param_1 + 0xe;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xf] = puVar2;
  FUN_005d7930(&LAB_00402820,puVar1);
  *puVar1 = &PTR_FUN_00894974;
  local_4._0_1_ = 3;
  *param_1 = &PTR_FUN_008b084c;
  param_1[2] = &PTR_LAB_008b0844;
  param_1[0xb] = &PTR_LAB_008b0830;
  *puVar1 = &PTR_LAB_008b0814;
  puVar2 = (undefined4 *)FUN_005d29d0(0x14,0);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (puVar2 == (undefined4 *)0x0) {
    param_1[0x11] = 0;
  }
  else {
    *puVar2 = &PTR_FUN_008952f0;
    uVar3 = FUN_00478ec0();
    puVar2[2] = uVar3;
    puVar2[3] = 0;
    puVar2[4] = puVar1;
    param_1[0x11] = puVar2;
  }
  ExceptionList = local_c;
  return param_1;
}

