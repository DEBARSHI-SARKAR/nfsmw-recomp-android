/* speed.exe 0068e490 FUN_0068e490; analysis pseudocode, not buildable source.
 * calls 00653c30 FUN_00653c30
 */

void FUN_0068e490(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087bedb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00653c30();
  local_4 = 0xffffffff;
  FUN_00653c30();
  ExceptionList = local_c;
  return;
}

