/* speed.exe 006f85c0 FUN_006f85c0; analysis pseudocode, not buildable source.
 * calls 006f6610 FUN_006f6610
 * calls 006ef710 FUN_006ef710
 * calls 005d5a50 FUN_005d5a50
 * calls 006ee930 FUN_006ee930
 * calls 006b5870 FUN_006b5870
 * calls 006ef6e0 FUN_006ef6e0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_006f85c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087efcd;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0xb;
  puVar2 = param_1 + 0x10;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b095c;
  param_1[2] = &PTR_LAB_008b0954;
  *puVar1 = &PTR_LAB_008b0938;
  param_1[0xd] = &PTR_LAB_008b08b8;
  *puVar2 = &PTR_LAB_008b08ac;
  local_4 = 6;
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
    param_1[0x18] = 0;
  }
  piVar3 = (int *)param_1[0x20];
  if (piVar3 != (int *)0x0) {
    param_1[10] = param_1[10] + -1;
    if ((char)piVar3[3] != '\x01') {
      *(undefined1 *)(piVar3 + 3) = 1;
      (**(code **)(*piVar3 + 4))();
    }
    param_1[0x20] = 0;
  }
  if ((int *)param_1[0x1b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1b] + 4))();
    param_1[0x1b] = 0;
  }
  FUN_006ef710();
  local_4._0_1_ = 5;
  FUN_006ef6e0();
  iVar4 = param_1[0x1d];
  local_4._0_1_ = 4;
  if (iVar4 != 0) {
    FUN_005d0370(iVar4,(param_1[0x1f] - iVar4 >> 2) * 4,0);
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (param_1 == (undefined4 *)0xffffffb8) {
    param_1 = (undefined4 *)0x0;
  }
  FUN_006f6610(param_1);
  *puVar2 = &PTR_FUN_00890970;
  local_4._0_1_ = 2;
  FUN_005d5a50(puVar2);
  local_4._0_1_ = 1;
  FUN_006b5870();
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

