/* speed.exe 006eee00 FUN_006eee00; analysis pseudocode, not buildable source.
 * calls 0056f210 FUN_0056f210
 * calls 00679580 FUN_00679580
 * calls 004e4ea0 FUN_004e4ea0
 * calls 0045a430 FUN_0045a430
 */

undefined1 __thiscall FUN_006eee00(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ea08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e4ea0(*param_1,0,0);
  local_4 = 0;
  if (param_1[2] != 0) {
    FUN_0056f210(local_20);
  }
  uVar1 = FUN_00679580(local_20,param_2);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return uVar1;
}

