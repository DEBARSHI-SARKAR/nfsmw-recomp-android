/* speed.exe 00634310 FUN_00634310; analysis pseudocode, not buildable source.
 * calls 005d59e0 FUN_005d59e0
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_00634310(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878ac7;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  local_4 = 0xffffffff;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

