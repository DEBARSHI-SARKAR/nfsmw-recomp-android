/* speed.exe 00687e40 FUN_00687e40; analysis pseudocode, not buildable source.
 * calls 00669820 FUN_00669820
 * calls 00480f90 FUN_00480f90
 * calls 0045a430 FUN_0045a430
 * calls 0042af60 FUN_0042af60
 * calls 00683290 FUN_00683290
 * calls 005d0370 FUN_005d0370
 * calls 00686c20 FUN_00686c20
 * calls 006809f0 FUN_006809f0
 * calls 005d5a50 FUN_005d5a50
 * calls 0067e9b0 FUN_0067e9b0
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_00687e40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087bb4f;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x2d;
  puVar2 = param_1 + 0x2f;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008aa9d8;
  param_1[2] = &PTR_LAB_008aa9d0;
  param_1[0xb] = &PTR_LAB_008aa940;
  param_1[0xe] = &PTR_LAB_008aa920;
  param_1[0x10] = &PTR_LAB_008aa904;
  param_1[0x2b] = &PTR_LAB_008aa828;
  *puVar1 = &PTR_LAB_008aa81c;
  *puVar2 = &PTR_LAB_008aa814;
  param_1[0x31] = &PTR_LAB_008aa810;
  local_4 = 5;
  (*(code *)PTR_FUN_008aa95c)();
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a])(1);
    param_1[0x2a] = 0;
  }
  FUN_0042af60(param_1 + 0xb);
  if (param_1[0x39] != 0) {
    FUN_005d0370(param_1[0x39],0x198,0);
    param_1[0x39] = 0;
  }
  FUN_006809f0();
  if (param_1[0x45] != 0) {
    FUN_006e9c90(param_1[0x45]);
    param_1[0x45] = 0;
  }
  if ((int *)param_1[0x44] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x44] + 4))();
    param_1[0x44] = 0;
  }
  iVar3 = param_1[0x32];
  piVar4 = (int *)param_1[0x33];
  *piVar4 = iVar3;
  *(int **)(iVar3 + 4) = piVar4;
  FUN_00480f90(param_1 + 0xe);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00683290(auStack_10,*(undefined4 *)param_1[0x5b],(undefined4 *)param_1[0x5b]);
  if (param_1[0x5b] != 0) {
    FUN_005d0370(param_1[0x5b],0x18,0);
  }
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  local_4._0_1_ = 3;
  FUN_0045a430();
  *puVar2 = &PTR_FUN_00890970;
  local_4._0_1_ = 2;
  FUN_005d5a50(puVar2);
  *puVar1 = &PTR_FUN_00890970;
  local_4._0_1_ = 1;
  FUN_005d5a50(puVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0067e9b0();
  local_4 = 0xffffffff;
  FUN_00686c20();
  ExceptionList = pvStack_c;
  return;
}

