/* speed.exe 0046a660 FUN_0046a660; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 */

void FUN_0046a660(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086a16c;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0045a430();
  local_4 = local_4 & 0xffffff00;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

