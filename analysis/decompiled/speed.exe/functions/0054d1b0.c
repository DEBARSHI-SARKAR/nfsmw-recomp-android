/* speed.exe 0054d1b0 FUN_0054d1b0; analysis pseudocode, not buildable source.
 * calls 00540770 FUN_00540770
 * calls 005409a0 FUN_005409a0
 * calls 00586290 FUN_00586290
 * calls 00592170 FUN_00592170
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0054d1b0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008705f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e2a0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_00592170(param_1[4],"Scrollbar","Scrollbar",1,1,0,1);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  _DAT_0091c2f8 = 0;
  FUN_00540770();
  FUN_005409a0();
  *(undefined1 *)(param_1 + 0x37) = 1;
  ExceptionList = local_c;
  return param_1;
}

