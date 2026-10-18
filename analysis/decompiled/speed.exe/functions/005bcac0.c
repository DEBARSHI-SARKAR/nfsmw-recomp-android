/* speed.exe 005bcac0 FUN_005bcac0; analysis pseudocode, not buildable source.
 * calls 005b3cd0 FUN_005b3cd0
 */

void __fastcall FUN_005bcac0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087421b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_008a2c20;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_005b3cd0();
  }
  *(undefined ***)(param_1 + 8) = &PTR_LAB_008a2c14;
  ExceptionList = local_c;
  return;
}

