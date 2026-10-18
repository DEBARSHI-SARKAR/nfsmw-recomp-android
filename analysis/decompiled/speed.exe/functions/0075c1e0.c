/* speed.exe 0075c1e0 FUN_0075c1e0; analysis pseudocode, not buildable source.
 * calls 0075a5e0 FUN_0075a5e0
 * calls 0074c8c0 FUN_0074c8c0
 */

void FUN_0075c1e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008812eb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0075a5e0();
  local_4 = 0xffffffff;
  FUN_0074c8c0();
  ExceptionList = local_c;
  return;
}

