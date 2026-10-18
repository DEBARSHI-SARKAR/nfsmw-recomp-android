/* speed.exe 00521b50 FUN_00521b50; analysis pseudocode, not buildable source.
 * calls 00793170 FUN_00793170
 * calls 00794f80 FUN_00794f80
 * calls 0079bac0 FUN_0079bac0
 * calls 0056e300 FUN_0056e300
 * calls 00572360 FUN_00572360
 * calls 00790970 FUN_00790970
 */

void __fastcall FUN_00521b50(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e7b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089c9ec;
  local_4 = 0;
  if (1 < *(int *)(DAT_0091cf90 + 0x19c)) {
    uVar3 = 0;
    uVar1 = 0;
    FUN_0079bac0(0,0);
    FUN_00790970(uVar1,uVar3);
    uVar1 = 1;
    puVar2 = &LAB_00512f50;
    FUN_00794f80(&LAB_00512f50,1);
    FUN_00793170(puVar2,uVar1);
    FUN_0056e300(2);
  }
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

