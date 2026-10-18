/* speed.exe 00533890 FUN_00533890; analysis pseudocode, not buildable source.
 * calls 00528e30 FUN_00528e30
 * calls 0056c6e0 FUN_0056c6e0
 */

void __fastcall FUN_00533890(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086f7f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089db64;
  local_4 = 0;
  if (param_1[0x49] != 0) {
    FUN_0056c6e0(param_1[0x49]);
    param_1[0x49] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00528e30();
  ExceptionList = local_c;
  return;
}

