/* speed.exe 007b59e0 FUN_007b59e0; analysis pseudocode, not buildable source.
 * calls 007b5870 FUN_007b5870
 */

void FUN_007b59e0(undefined4 param_1)

{
  undefined **local_38 [3];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008832e8;
  local_c = ExceptionList;
  local_38[0] = &PTR_FUN_008b7518;
  local_2c = 0;
  local_28 = param_1;
  local_24 = 0;
  local_20 = 7;
  local_1c = 0;
  local_18 = 1;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_007b5870(local_38);
  ExceptionList = local_c;
  return;
}

