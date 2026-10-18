/* speed.exe 004ca150 FUN_004ca150; analysis pseudocode, not buildable source.
 * calls 004c6f10 FUN_004c6f10
 * calls 0045a430 FUN_0045a430
 */

void FUN_004ca150(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c0d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0045a430();
  FUN_004c6f10();
  ExceptionList = local_c;
  return;
}

