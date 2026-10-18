/* speed.exe 005af210 FUN_005af210; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005af210(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a2c30;
  local_4 = 0;
  if (param_1[3] != 0) {
    thunk_FUN_007c7250(param_1[3]);
  }
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
  }
  *param_1 = &PTR_LAB_008a2c14;
  ExceptionList = local_c;
  return;
}

