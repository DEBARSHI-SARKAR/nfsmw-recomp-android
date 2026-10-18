/* speed.exe 00561e00 FUN_00561e00; analysis pseudocode, not buildable source.
 * calls 0053e500 FUN_0053e500
 * calls 00592170 FUN_00592170
 * calls 0079a020 FUN_0079a020
 * calls 0053e400 FUN_0053e400
 * calls 0055f0e0 FUN_0055f0e0
 * calls 0079bac0 FUN_0079bac0
 * calls 0050d780 FUN_0050d780
 * calls 00586290 FUN_00586290
 * calls 005240d0 FUN_005240d0
 * calls 00516af0 FUN_00516af0
 */

undefined4 * __thiscall FUN_00561e00(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871271;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e14c;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00592170(param_1[4],"ScrollBar","ScrollBar",1,1,0,0);
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)((int)param_1 + 0x10d) = 0;
  FUN_0050d780();
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  DAT_0091cc24 = DAT_00925b14;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0053e400();
  FUN_005240d0();
  FUN_0053e500();
  FUN_0055f0e0(1);
  param_1[0x6b] = DAT_00925b14;
  iVar1 = FUN_00516af0(PTR_s_OL_GameRoom_fng_008f32b0);
  if (iVar1 != 0) {
    FUN_0079bac0();
    FUN_0079a020();
  }
  *(undefined1 *)(param_1 + 0x3c) = 1;
  ExceptionList = local_c;
  return param_1;
}

