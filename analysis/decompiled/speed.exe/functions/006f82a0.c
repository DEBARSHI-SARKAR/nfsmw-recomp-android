/* speed.exe 006f82a0 FUN_006f82a0; analysis pseudocode, not buildable source.
 * calls 006f5b30 FUN_006f5b30
 */

void FUN_006f82a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087ed98;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_006f5b30();
  local_4 = 0xffffffff;
  FUN_006f5b30();
  ExceptionList = local_c;
  return;
}

