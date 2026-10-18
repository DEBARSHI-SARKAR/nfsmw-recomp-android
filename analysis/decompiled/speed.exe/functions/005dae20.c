/* speed.exe 005dae20 FUN_005dae20; analysis pseudocode, not buildable source.
 * calls 00603cf0 FUN_00603cf0
 * calls 005d8660 FUN_005d8660
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall
FUN_005dae20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874ce3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d8660(1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 2);
  FUN_005d7930(&LAB_005dadb0,param_1);
  *param_1 = &PTR_FUN_008a3830;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00603cf0();
  ExceptionList = local_c;
  return param_1;
}

