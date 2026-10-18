/* speed.exe 006b9d90 FUN_006b9d90; analysis pseudocode, not buildable source.
 * calls 006b9920 FUN_006b9920
 * calls 006ee9b0 FUN_006ee9b0
 * calls 005cc240 FUN_005cc240
 */

undefined4 * __thiscall FUN_006b9d90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087df48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b9920(param_2,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_008ad438;
  param_1[2] = &PTR_LAB_008ad430;
  param_1[0x13] = &PTR_LAB_008ad40c;
  param_1[0x15] = &PTR_FUN_008ad408;
  param_1[0x16] = &PTR_LAB_008ad3fc;
  param_1[0x18] = &PTR_LAB_008ad3f4;
  param_1[0x2e] = 0;
  param_3 = FUN_005cc240("Physics");
  uVar1 = FUN_006ee9b0(&param_3,0x3dcccccd,0,1);
  param_1[0x2f] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

