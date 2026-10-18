/* speed.exe 004b8800 FUN_004b8800; analysis pseudocode, not buildable source.
 * calls 0045a8a0 FUN_0045a8a0
 * calls 0045a430 FUN_0045a430
 */

void __fastcall FUN_004b8800(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b66b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896f64;
  local_4 = 0;
  puVar1 = param_1;
  FUN_0045a430();
  local_4 = 0xffffffff;
  if (param_1[0x13] != 0) {
    FUN_0045a8a0(puVar1);
  }
  ExceptionList = local_c;
  return;
}

