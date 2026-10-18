/* speed.exe 005905f0 FUN_005905f0; analysis pseudocode, not buildable source.
 * calls 00580f40 FUN_00580f40
 */

void FUN_005905f0(void)

{
  undefined **local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872898;
  local_c = ExceptionList;
  local_10 = &PTR_FUN_008a0740;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00580f40(&local_10);
  ExceptionList = local_c;
  return;
}

