/* speed.exe 006b0300 FUN_006b0300; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 005d0370 FUN_005d0370
 * calls 005d5a50 FUN_005d5a50
 * calls 006f85c0 FUN_006f85c0
 * calls 0066fb40 FUN_0066fb40
 */

void __fastcall FUN_006b0300(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087d0af;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x25;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ab304;
  param_1[2] = &PTR_LAB_008ab2fc;
  param_1[0xb] = &PTR_LAB_008ab2e0;
  param_1[0xd] = &PTR_LAB_008ab260;
  param_1[0x10] = &PTR_LAB_008ab258;
  *puVar1 = &PTR_LAB_008ab250;
  iVar2 = param_1[0x28];
  local_4 = 2;
  if (iVar2 != 0) {
    FUN_0066fb40();
    FUN_005d0370(iVar2,8,0);
    param_1[0x28] = 0;
  }
  if (*(char *)(param_1 + 0x2e) != '\0') {
    *(undefined1 *)(param_1 + 0x2e) = 0;
    param_1[0x2f] = 0;
  }
  DAT_00937808 = DAT_00937808 + -1;
  local_4._0_1_ = 1;
  FUN_0045a430();
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006f85c0();
  ExceptionList = local_c;
  return;
}

