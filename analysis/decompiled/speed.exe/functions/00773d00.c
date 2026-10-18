/* speed.exe 00773d00 FUN_00773d00; analysis pseudocode, not buildable source.
 * calls 006f94d0 FUN_006f94d0
 * calls 004662e0 FUN_004662e0
 * calls 006e8e90 FUN_006e8e90
 * calls 006ee9b0 FUN_006ee9b0
 * calls 005cc240 FUN_005cc240
 */

undefined4 * __fastcall FUN_00773d00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881b23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_006f94d0(0);
  puVar1 = param_1 + 0x13;
  *param_1 = &PTR_FUN_008b5c88;
  param_1[2] = &PTR_LAB_008b5c80;
  param_1[0xb] = &PTR_LAB_008b5c6c;
  param_1[0xe] = &PTR_LAB_008b5c50;
  *puVar1 = puVar1;
  param_1[0x14] = puVar1;
  local_4 = 1;
  DAT_009b38ec = FUN_004662e0(0x14,0xc00,"AStarNodeSlotPool",0);
  DAT_009b38f0 = FUN_004662e0(0x54,0x10,"AStarSearchSlotPool",0);
  local_14 = FUN_005cc240("AIVehicle");
  uVar2 = FUN_006ee9b0(&local_14,0x3f800000,0,1);
  param_1[0x12] = uVar2;
  FUN_006e8e90(uVar2,"PathFinder");
  ExceptionList = local_c;
  return param_1;
}

