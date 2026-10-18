/* speed.exe 007be160 FUN_007be160; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 007b12b0 FUN_007b12b0
 * calls 007b8b80 FUN_007b8b80
 */

undefined4 * __thiscall FUN_007be160(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008837a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  puVar1 = param_1 + 0xb;
  *param_1 = &PTR_FUN_008b7f18;
  *puVar1 = puVar1;
  param_1[0xc] = puVar1;
  puVar1 = param_1 + 0xd;
  *puVar1 = puVar1;
  param_1[0xe] = puVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x4e) = 0xffff;
  *(undefined1 *)(param_1 + 0x14) = 1;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_007b12b0(*param_2);
  param_1[0x11] = param_2[2] & 0xffff;
  local_4 = CONCAT31(local_4._1_3_,3);
  param_1[0x12] = (int)*(short *)((int)param_2 + 10);
  FUN_007b8b80();
  ExceptionList = local_c;
  return param_1;
}

