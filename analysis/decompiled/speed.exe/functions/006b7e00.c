/* speed.exe 006b7e00 FUN_006b7e00; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006b7d80 FUN_006b7d80
 * calls 0048cd20 FUN_0048cd20
 * calls 006e9c90 FUN_006e9c90
 * calls 004258d0 FUN_004258d0
 */

void __fastcall FUN_006b7e00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087dbfa;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x65;
  puVar2 = param_1 + 0x67;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008acba8;
  param_1[2] = &PTR_LAB_008acb9c;
  param_1[0x12] = &PTR_LAB_008acaf0;
  param_1[0x14] = &PTR_LAB_008aca48;
  param_1[0x16] = &PTR_LAB_008aca40;
  param_1[0x18] = &PTR_LAB_008aca08;
  param_1[0x19] = &PTR_FUN_008aca04;
  param_1[0x1a] = &PTR_LAB_008ac9f4;
  param_1[0x4c] = &PTR_LAB_008ac9d4;
  *puVar1 = &PTR_LAB_008ac9c0;
  *puVar2 = &PTR_LAB_008ac9b0;
  local_4 = 2;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_0048cd20(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if ((int *)param_1[0x69] != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x69] + 4))();
    (**(code **)(*piVar3 + 8))();
  }
  if (param_1[0x6b] != 0) {
    FUN_006e9c90(param_1[0x6b]);
    param_1[0x6b] = 0;
  }
  local_4._0_1_ = 1;
  *puVar2 = &PTR_FUN_0089187c;
  FUN_004258d0();
  *puVar2 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar2);
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006b7d80();
  ExceptionList = pvStack_c;
  return;
}

