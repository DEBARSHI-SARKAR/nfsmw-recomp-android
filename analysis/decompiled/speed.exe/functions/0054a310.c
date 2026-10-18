/* speed.exe 0054a310 FUN_0054a310; analysis pseudocode, not buildable source.
 * calls 005345d0 FUN_005345d0
 * calls 005926b0 FUN_005926b0
 * calls 005347f0 FUN_005347f0
 * calls 00586290 FUN_00586290
 * calls 00592170 FUN_00592170
 */

undefined4 * __thiscall FUN_0054a310(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008702a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e7fc;
  FUN_00592170(param_1[4],"Scrollbar","Scrollbar",1,1,0,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005345d0();
  FUN_005347f0();
  FUN_005926b0(1);
  *(undefined1 *)(param_1 + 0x36) = 1;
  ExceptionList = local_c;
  return param_1;
}

