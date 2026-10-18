/* speed.exe 0077b9e0 FUN_0077b9e0; analysis pseudocode, not buildable source.
 * calls 005d5ed0 FUN_005d5ed0
 * calls 00774260 FUN_00774260
 */

undefined4 * __fastcall FUN_0077b9e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881c4a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b5c20;
  FUN_005d5ed0();
  local_4 = 0;
  FUN_005d5ed0();
  local_4._0_1_ = 1;
  FUN_005d5ed0();
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x21] = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  *(undefined1 *)((int)param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0x55) = 0;
  param_1[0xb9] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  FUN_00774260();
  ExceptionList = local_c;
  return param_1;
}

