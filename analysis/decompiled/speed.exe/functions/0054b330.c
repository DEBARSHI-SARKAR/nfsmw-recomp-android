/* speed.exe 0054b330 FUN_0054b330; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 0079bac0 FUN_0079bac0
 * calls 0079a020 FUN_0079a020
 * calls 00592170 FUN_00592170
 * calls 0053aef0 FUN_0053aef0
 */

undefined4 * __thiscall FUN_0054b330(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008704ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e8c4;
  FUN_00592170(param_1[4],0,0,1,1,0,1);
  puVar1 = param_1 + 0x38;
  *puVar1 = puVar1;
  param_1[0x39] = puVar1;
  puVar1 = param_1 + 0x3a;
  *puVar1 = puVar1;
  param_1[0x3b] = puVar1;
  puVar1 = param_1 + 0x3c;
  *puVar1 = puVar1;
  param_1[0x3d] = puVar1;
  puVar1 = param_1 + 0x3e;
  *puVar1 = puVar1;
  param_1[0x3f] = puVar1;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_0079bac0();
  FUN_0079a020();
  FUN_0053aef0();
  ExceptionList = pvStack_c;
  return param_1;
}

