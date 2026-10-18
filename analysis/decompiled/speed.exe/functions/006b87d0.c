/* speed.exe 006b87d0 FUN_006b87d0; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006f8180 FUN_006f8180
 * calls 005d59f0 FUN_005d59f0
 * calls 0045a430 FUN_0045a430
 * calls 006ee930 FUN_006ee930
 * calls 005d0370 FUN_005d0370
 * calls 006a62a0 FUN_006a62a0
 */

void __fastcall FUN_006b87d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087dcf6;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x13;
  puVar2 = param_1 + 0x16;
  puVar3 = param_1 + 0x18;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008ad2cc;
  param_1[2] = &PTR_LAB_008ad2c4;
  *puVar1 = &PTR_LAB_008ad2a0;
  param_1[0x15] = &PTR_FUN_008ad29c;
  *puVar2 = &PTR_LAB_008ad290;
  *puVar3 = &PTR_LAB_008ad288;
  local_4 = 5;
  FUN_006f8180(param_1 + 0x15);
  piVar4 = (int *)FUN_005d59f0(&LAB_00404ff0);
  if (piVar4 != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*piVar4 + 0x10))();
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 100))();
    }
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_006a62a0();
  if (param_1[0x2b] != 0) {
    FUN_005d0370(param_1[0x2b],0xc,0);
  }
  param_1[0x2b] = 0;
  local_4._0_1_ = 3;
  FUN_0045a430();
  *puVar3 = &PTR_FUN_00890970;
  local_4._0_1_ = 2;
  FUN_005d5a50(puVar3);
  *puVar2 = &PTR_FUN_00890970;
  local_4._0_1_ = 1;
  FUN_005d5a50(puVar2);
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

