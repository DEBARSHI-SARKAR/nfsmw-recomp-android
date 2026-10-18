/* speed.exe 007bf270 FUN_007bf270; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 0056e5b0 FUN_0056e5b0
 * calls 0056c9f0 FUN_0056c9f0
 * calls 0056ce30 FUN_0056ce30
 * calls 007ba1a0 FUN_007ba1a0
 */

undefined4 * __thiscall FUN_007bf270(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883955;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  puVar1 = param_1 + 0xb;
  *param_1 = &PTR_FUN_008b7fa0;
  *puVar1 = puVar1;
  param_1[0xc] = puVar1;
  puVar1 = param_1 + 0xe;
  param_1[0xd] = 0;
  *puVar1 = puVar1;
  param_1[0xf] = puVar1;
  param_1[0x10] = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  param_1[0x11] = 0;
  FUN_0056e5b0();
  param_1[0x17] = 0;
  FUN_0056c9f0();
  param_1[0x18] = &PTR_FUN_0089b098;
  local_4._0_1_ = 3;
  FUN_0056c9f0();
  param_1[0x29] = &PTR_FUN_0089b098;
  local_4._0_1_ = 4;
  FUN_0056c9f0();
  param_1[0x3a] = &PTR_FUN_0089b098;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_007ba1a0();
  *(undefined1 *)(param_1 + 0x14) = 0;
  (**(code **)(param_1[0x18] + 0x28))(param_1[4],"ACCELERATION",0,0x3f800000,0,0,0,0x43200000);
  (**(code **)(param_1[0x29] + 0x28))(param_1[4],"TOPSPEED",0,0x3f800000,0,0,0,0x43200000);
  pvVar2 = (void *)0x0;
  (**(code **)(param_1[0x3a] + 0x28))(param_1[4],"HANDLING",0,0x3f800000,0,0,0,0x43200000);
  ExceptionList = pvVar2;
  return param_1;
}

