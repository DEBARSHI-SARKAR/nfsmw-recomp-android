/* speed.exe 00707eb0 FUN_00707eb0; analysis pseudocode, not buildable source.
 * calls 00706140 FUN_00706140
 * calls 005cc240 FUN_005cc240
 * calls 007061d0 FUN_007061d0
 */

undefined4 * __fastcall FUN_00707eb0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087faa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008b1ee0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_4 = 0;
  param_1[0xe] = 0;
  FUN_005cc240("Request");
  uVar1 = FUN_00706140(param_1,&LAB_007048c0);
  param_1[0xf] = uVar1;
  FUN_005cc240("ReqDenied");
  uVar1 = FUN_00706140(param_1,&LAB_00704900);
  param_1[0x10] = uVar1;
  uVar1 = FUN_007061d0(param_1,&LAB_00700940);
  param_1[0x11] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

