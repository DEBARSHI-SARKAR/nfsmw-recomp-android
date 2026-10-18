/* speed.exe 00403ed0 FUN_00403ed0; analysis pseudocode, not buildable source.
 * calls 00653a40 FUN_00653a40
 */

void FUN_00403ed0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008675d3;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00653a40();
  local_4 = local_4 & 0xffffff00;
  FUN_00653a40();
  local_4 = 0xffffffff;
  FUN_00653a40();
  ExceptionList = local_c;
  return;
}

