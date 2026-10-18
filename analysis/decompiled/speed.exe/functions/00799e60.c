/* speed.exe 00799e60 FUN_00799e60; analysis pseudocode, not buildable source.
 * calls 007983d0 FUN_007983d0
 * calls 00794530 FUN_00794530
 */

void FUN_00799e60(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008827e6;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_007983d0();
  FUN_00794530();
  FUN_00794530();
  ExceptionList = local_c;
  return;
}

