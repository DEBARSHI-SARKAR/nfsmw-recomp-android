/* speed.exe 004f9c90 thunk_FUN_004f68b0; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_004f68b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0086d8b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00899870;
  uStack_4 = 0;
  FUN_004b02a0();
  *param_1 = &PTR_FUN_008983e8;
  uStack_4 = 1;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = pvStack_c;
  return;
}

