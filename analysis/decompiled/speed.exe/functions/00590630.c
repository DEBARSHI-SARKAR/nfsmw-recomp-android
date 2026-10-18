/* speed.exe 00590630 FUN_00590630; analysis pseudocode, not buildable source.
 * calls 00580f40 FUN_00580f40
 */

void FUN_00590630(undefined1 param_1)

{
  undefined **local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008728b8;
  local_c = ExceptionList;
  local_14 = &PTR_FUN_008a0748;
  local_10 = param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00580f40(&local_14);
  ExceptionList = local_c;
  return;
}

