/* speed.exe 004aa070 thunk_FUN_004a19c0; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_004a19c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0086aef8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00895f30;
  uStack_4 = 0;
  if (param_1[5] != 0) {
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[5]);
  }
  if (param_1[7] != 0) {
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[7]);
  }
  *param_1 = &PTR_LAB_00895520;
  ExceptionList = pvStack_c;
  return;
}

