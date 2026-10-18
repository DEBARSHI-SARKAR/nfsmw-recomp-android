/* speed.exe 007b5820 FUN_007b5820; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 007b3fc0 FUN_007b3fc0
 */

void FUN_007b5820(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008832cb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_007b3fc0();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

