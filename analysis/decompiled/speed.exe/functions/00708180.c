/* speed.exe 00708180 FUN_00708180; analysis pseudocode, not buildable source.
 * calls 00706450 FUN_00706450
 * calls 005cc240 FUN_005cc240
 */

undefined4 * __fastcall FUN_00708180(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087fac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008b1f28;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_4 = 0;
  param_1[8] = 0x46fffe00;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_005cc240("ReqHeliJoin");
  uVar1 = FUN_00706450(param_1,&LAB_007049d0);
  param_1[0xd] = uVar1;
  FUN_005cc240("Dodged");
  uVar1 = FUN_00706450(param_1,&LAB_00700b90);
  param_1[0xe] = uVar1;
  FUN_005cc240("Position");
  uVar1 = FUN_00706450(param_1,&LAB_00700bc0);
  param_1[1] = 0;
  param_1[0xf] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

