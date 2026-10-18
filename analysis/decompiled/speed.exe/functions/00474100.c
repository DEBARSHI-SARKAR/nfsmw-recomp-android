/* speed.exe 00474100 FUN_00474100; analysis pseudocode, not buildable source.
 * calls 00470a10 FUN_00470a10
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_00474100(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086a378;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00894cc8;
  local_4 = 0;
  thunk_FUN_007c7250(param_1[0x25]);
  thunk_FUN_007c7250(param_1[0x21]);
  thunk_FUN_007c7250(param_1[0x22]);
  thunk_FUN_007c7250(param_1[0x23]);
  thunk_FUN_007c7250(param_1[0x24]);
  if ((undefined4 *)param_1[0x38] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x38])(1);
  }
  local_4 = 0xffffffff;
  FUN_00470a10();
  ExceptionList = pvStack_c;
  return;
}

