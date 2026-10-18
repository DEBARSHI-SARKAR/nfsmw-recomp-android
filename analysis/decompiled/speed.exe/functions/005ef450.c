/* speed.exe 005ef450 FUN_005ef450; analysis pseudocode, not buildable source.
 * calls 005e8130 FUN_005e8130
 * calls 005d7930 FUN_005d7930
 * calls 005d29d0 FUN_005d29d0
 * calls 00478ec0 FUN_00478ec0
 * calls 005d8660 FUN_005d8660
 */

undefined4 * __thiscall FUN_005ef450(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087568d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e8130(param_2,1);
  local_4 = 0;
  FUN_005d8660(1);
  puVar1 = param_1 + 10;
  local_4._0_1_ = 1;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xb] = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0xc);
  FUN_005d7930(&LAB_00402820,puVar1);
  *puVar1 = &PTR_FUN_00894974;
  *param_1 = &PTR_FUN_008a39ec;
  *puVar1 = &PTR_LAB_008a39d0;
  param_1[0x10] = DAT_008a2fb4;
  param_1[0x11] = DAT_008a2fb8;
  param_1[0x12] = DAT_008a2fbc;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  param_1[0x14] = DAT_008a2fb4;
  param_1[0x15] = DAT_008a2fb8;
  param_1[0x16] = DAT_008a2fbc;
  param_1[0x17] = 0;
  param_1[0x18] = DAT_008a2fb4;
  param_1[0x19] = DAT_008a2fb8;
  param_1[0x1a] = DAT_008a2fbc;
  param_1[0x1b] = 0;
  param_1[0x1c] = DAT_008a2fb4;
  param_1[0x1d] = DAT_008a2fb8;
  param_1[0x1e] = DAT_008a2fbc;
  local_4._0_1_ = 2;
  puVar2 = (undefined4 *)FUN_005d29d0(0x14,0);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (puVar2 == (undefined4 *)0x0) {
    param_1[0x1f] = 0;
  }
  else {
    *puVar2 = &PTR_FUN_008952f0;
    uVar3 = FUN_00478ec0();
    puVar2[2] = uVar3;
    puVar2[3] = 0;
    puVar2[4] = puVar1;
    param_1[0x1f] = puVar2;
  }
  ExceptionList = local_c;
  return param_1;
}

