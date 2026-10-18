/* speed.exe 004aba50 FUN_004aba50; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 */

void FUN_004aba50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b13b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

