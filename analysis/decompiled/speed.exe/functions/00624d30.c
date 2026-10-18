/* speed.exe 00624d30 FUN_00624d30; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 004056d0 FUN_004056d0
 * calls 005cc240 FUN_005cc240
 */

void __fastcall FUN_00624d30(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7410;
  local_4 = 0;
  local_24 = param_1;
  uVar2 = FUN_005cc240("AICopManager");
  iVar1 = param_1[2];
  FUN_004056d0(&local_28);
  local_20 = local_28;
  local_18 = 0x14;
  local_14 = 0;
  local_1c = uVar2;
  local_10 = iVar1 != 0;
  FUN_0065faf0();
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

