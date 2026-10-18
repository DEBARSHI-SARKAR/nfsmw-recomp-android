/* speed.exe 006f83e0 FUN_006f83e0; analysis pseudocode, not buildable source.
 * calls 006f5cf0 FUN_006f5cf0
 */

void FUN_006f83e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087ee48;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_006f5cf0();
  local_4 = 0xffffffff;
  FUN_006f5cf0();
  ExceptionList = local_c;
  return;
}

