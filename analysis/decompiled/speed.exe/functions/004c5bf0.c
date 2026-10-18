/* speed.exe 004c5bf0 thunk_FUN_004b4f90; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_004b4f90(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0086b5c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00896d2c;
  uStack_4 = 0;
  FUN_004b12b0();
  uStack_4 = 0xffffffff;
  FUN_004b4e40();
  ExceptionList = pvStack_c;
  return;
}

