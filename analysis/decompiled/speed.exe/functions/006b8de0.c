/* speed.exe 006b8de0 FUN_006b8de0; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006b5870 FUN_006b5870
 * calls 006ee930 FUN_006ee930
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_006b8de0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087de08;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x13;
  puVar2 = param_1 + 0x18;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008ad52c;
  param_1[2] = &PTR_LAB_008ad524;
  *puVar1 = &PTR_LAB_008ad508;
  param_1[0x15] = &PTR_LAB_008ad488;
  *puVar2 = &PTR_LAB_008ad468;
  local_4 = 4;
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
  }
  piVar4 = *(int **)param_1[0x1d];
  if (piVar4 != (int *)param_1[0x1d]) {
    do {
      if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar4[2])(1);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)param_1[0x1d]);
  }
  piVar4 = (int *)param_1[0x1d];
  piVar3 = (int *)*piVar4;
  *piVar4 = (int)piVar4;
  *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1d];
  local_4 = CONCAT31(local_4._1_3_,3);
  param_1[0x1e] = 0;
  if (piVar3 != (int *)param_1[0x1d]) {
    do {
      piVar4 = (int *)*piVar3;
      FUN_005d0370(piVar3,0xc,0);
      piVar3 = piVar4;
    } while (piVar4 != (int *)param_1[0x1d]);
  }
  if (param_1[0x1d] != 0) {
    FUN_005d0370(param_1[0x1d],0xc,0);
  }
  param_1[0x1d] = 0;
  *puVar2 = &PTR_FUN_00890970;
  local_4._0_1_ = 2;
  FUN_005d5a50(puVar2);
  local_4._0_1_ = 1;
  FUN_006b5870();
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

