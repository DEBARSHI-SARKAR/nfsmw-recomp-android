/* speed.exe 006f8570 FUN_006f8570; analysis pseudocode, not buildable source.
 * calls 006f6040 FUN_006f6040
 */

void FUN_006f8570(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087eef8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_006f6040();
  local_4 = 0xffffffff;
  FUN_006f6040();
  ExceptionList = local_c;
  return;
}

