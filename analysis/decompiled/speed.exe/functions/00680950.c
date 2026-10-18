/* speed.exe 00680950 FUN_00680950; analysis pseudocode, not buildable source.
 * calls 0067d150 FUN_0067d150
 */

void FUN_00680950(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b488;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0067d150();
  local_4 = 0xffffffff;
  FUN_0067d150();
  ExceptionList = local_c;
  return;
}

