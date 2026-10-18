/* speed.exe 004f72a0 FUN_004f72a0; analysis pseudocode, not buildable source.
 * calls 004eb330 FUN_004eb330
 * calls 004eb2a0 FUN_004eb2a0
 * calls 005cc240 FUN_005cc240
 */

undefined4 * __fastcall FUN_004f72a0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_0086d988;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  DAT_009142d8 = 0;
  DAT_009142dc = 0;
  param_1[9] = 0;
  local_14 = 0;
  *param_1 = &PTR_FUN_00899a24;
  FUN_005cc240("MomentStrm");
  uVar1 = FUN_004eb2a0(param_1,&LAB_004f0ba0);
  param_1[10] = uVar1;
  FUN_005cc240("PursuitBreaker");
  uVar1 = FUN_004eb330(param_1,FUN_004f0fb0);
  param_1[0xb] = uVar1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = &PTR_FUN_00899200;
  param_1[0x150] = 0;
  param_1[0x151] = 3;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x160] = 0;
  *(undefined1 *)(param_1 + 0x162) = 0;
  param_1[0x161] = 0;
  DAT_00914354 = 0;
  DAT_0091435c = param_1;
  param_1[0x163] = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  ExceptionList = local_1c;
  return param_1;
}

