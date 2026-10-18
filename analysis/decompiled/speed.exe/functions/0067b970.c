/* speed.exe 0067b970 FUN_0067b970; analysis pseudocode, not buildable source.
 * calls 00480f90 FUN_00480f90
 * calls 0045a430 FUN_0045a430
 * calls 006f85c0 FUN_006f85c0
 * calls 005d0370 FUN_005d0370
 * calls 005d5a50 FUN_005d5a50
 * calls 006fc820 FUN_006fc820
 * calls 0066fb40 FUN_0066fb40
 * calls 006e9f80 FUN_006e9f80
 */

void __fastcall FUN_0067b970(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087ad73;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x25;
  puVar2 = param_1 + 0x27;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a99f4;
  param_1[2] = &PTR_LAB_008a99ec;
  param_1[0xb] = &PTR_LAB_008a99d0;
  param_1[0xd] = &PTR_LAB_008a9950;
  param_1[0x10] = &PTR_LAB_008a9944;
  *puVar1 = &PTR_LAB_008a9928;
  *puVar2 = &PTR_LAB_008a9a18;
  local_4 = 3;
  FUN_006e9f80();
  iVar3 = param_1[0x34];
  if (iVar3 != 0) {
    FUN_0066fb40();
    FUN_005d0370(iVar3,8,0);
    param_1[0x34] = 0;
  }
  FUN_006fc820();
  if ((undefined4 *)param_1[0x38] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x38])(1);
    param_1[0x38] = 0;
  }
  if ((*(byte *)((int)param_1 + 0xda) & 1) != 0) {
    FUN_00480f90(puVar1);
    *(byte *)((int)param_1 + 0xda) = *(byte *)((int)param_1 + 0xda) & 0xfe;
  }
  local_4._0_1_ = 2;
  FUN_0045a430();
  *puVar2 = &PTR_FUN_00890970;
  local_4._0_1_ = 1;
  FUN_005d5a50(puVar2);
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006f85c0();
  ExceptionList = pvStack_c;
  return;
}

