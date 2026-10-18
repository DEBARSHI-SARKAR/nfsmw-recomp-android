/* speed.exe 004c3df0 thunk_FUN_004b9c30; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_004b9c30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0086b7e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00896fa8;
  uStack_4 = 0;
  FUN_0072e030(&DAT_004afa70);
  uStack_4 = 0xffffffff;
  FUN_004eb720();
  ExceptionList = pvStack_c;
  return;
}

