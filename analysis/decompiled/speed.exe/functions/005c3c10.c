/* speed.exe 005c3c10 FUN_005c3c10; analysis pseudocode, not buildable source.
 * calls 005c31a0 FUN_005c31a0
 * calls 005b91c0 FUN_005b91c0
 * calls 005bff70 FUN_005bff70
 * calls 005b2bb0 FUN_005b2bb0
 */

undefined4 * __thiscall FUN_005c3c10(undefined4 *param_1,int param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874693;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c31a0(param_2,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089b05c;
  param_1[0x17] = 0;
  FUN_005bff70(param_2 + 100);
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  param_1[0x1d] = *(undefined4 *)(param_2 + 0x74);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005b2bb0(*(undefined4 *)(param_2 + 0x5c));
  FUN_005b91c0(*(undefined4 *)(param_2 + 0x68));
  ExceptionList = local_c;
  return param_1;
}

