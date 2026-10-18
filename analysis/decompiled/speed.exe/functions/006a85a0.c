/* speed.exe 006a85a0 FUN_006a85a0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006a85a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  puStack_8 = &LAB_0087c36c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008ab3b8;
  param_1[2] = &PTR_LAB_008ab3ac;
  param_1[0x12] = &PTR_FUN_008ab3a8;
  iStack_4 = 3;
  FUN_006f8180(param_1 + 0x12);
  iStack_4._0_1_ = 2;
  FUN_0069b810();
  iStack_4._0_1_ = 1;
  if (param_1[0x1e] != 0) {
    FUN_0045a8a0();
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (param_1[0x16] != 0) {
    FUN_0045a8a0();
  }
  iStack_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

