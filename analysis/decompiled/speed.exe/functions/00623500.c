/* speed.exe 00623500 FUN_00623500; analysis pseudocode, not buildable source.
 * calls 006dfaf0 FUN_006dfaf0
 * calls 0073def0 FUN_0073def0
 */

undefined4 * __thiscall FUN_00623500(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a706c;
  param_1[2] = param_2;
  iVar1 = FUN_006dfaf0();
  if (iVar1 != 0) {
    FUN_0073def0(param_1[2]);
  }
  ExceptionList = local_c;
  return param_1;
}

