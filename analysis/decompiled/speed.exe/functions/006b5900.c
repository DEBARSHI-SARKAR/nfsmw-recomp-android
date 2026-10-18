/* speed.exe 006b5900 FUN_006b5900; analysis pseudocode, not buildable source.
 * calls 006b0c30 FUN_006b0c30
 * calls 006b12e0 FUN_006b12e0
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006b5900(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d743;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_0068b7e0,param_1);
  local_4 = 0;
  FUN_006b0c30();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_006b12e0();
  *param_1 = &PTR_FUN_008ac2c0;
  ExceptionList = local_c;
  return param_1;
}

