/* speed.exe 006b4a90 thunk_FUN_006a3e20; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_006a3e20(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  puStack_8 = &LAB_0087c934;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x13;
  puVar2 = param_1 + 0x15;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008ab9d4;
  param_1[2] = &PTR_LAB_008ab9cc;
  *puVar1 = &PTR_LAB_008ab9c4;
  *puVar2 = &PTR_LAB_008ab9bc;
  iStack_4 = 3;
  if (param_1[0x17] != 0) {
    FUN_006eea10(param_1[0x17]);
  }
  iStack_4._0_1_ = 2;
  FUN_0045a430();
  *puVar2 = &PTR_FUN_00890970;
  iStack_4._0_1_ = 1;
  FUN_005d5a50(puVar2);
  *puVar1 = &PTR_FUN_00890970;
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  iStack_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

