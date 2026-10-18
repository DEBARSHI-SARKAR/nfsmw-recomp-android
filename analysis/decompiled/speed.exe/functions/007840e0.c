/* speed.exe 007840e0 FUN_007840e0; analysis pseudocode, not buildable source.
 * calls 00783e50 FUN_00783e50
 * calls 0077ae80 FUN_0077ae80
 * calls 0041b250 FUN_0041b250
 * calls 0042cbf0 FUN_0042cbf0
 */

void FUN_007840e0(undefined4 param_1,undefined4 param_2)

{
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008820e8;
  local_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_1c = &PTR_FUN_00891594;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0041b250(0x40);
  FUN_0077ae80(param_2,&local_1c);
  FUN_00783e50(&local_1c,param_1,param_2);
  local_4 = 0xffffffff;
  FUN_0042cbf0();
  ExceptionList = local_c;
  return;
}

