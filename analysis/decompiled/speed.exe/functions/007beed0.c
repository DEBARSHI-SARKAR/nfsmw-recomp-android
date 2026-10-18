/* speed.exe 007beed0 FUN_007beed0; analysis pseudocode, not buildable source.
 * calls 00648db0 FUN_00648db0
 * calls 00760d50 FUN_00760d50
 * calls 004fc310 FUN_004fc310
 * calls 00586290 FUN_00586290
 * calls 005d29d0 FUN_005d29d0
 * calls 00644060 FUN_00644060
 * calls 00515d70 FUN_00515d70
 * calls 00515c00 FUN_00515c00
 * calls 007c5df0 _atexit
 * calls 0056db00 FUN_0056db00
 * calls 00739a70 FUN_00739a70
 * calls 007a9090 FUN_007a9090
 * calls 00476870 FUN_00476870
 * calls 007a93e0 FUN_007a93e0
 * calls 00652ad0 _malloc
 * calls 005af1c0 FUN_005af1c0
 * calls 005251e0 FUN_005251e0
 * calls 00515e20 FUN_00515e20
 * calls 007b9ea0 FUN_007b9ea0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_007beed0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008838e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008b74f4;
  param_1[0xd] = 0;
  param_1[0xc] = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x1c] = param_3;
  local_4 = 0;
  param_1[0x14] = param_5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 1;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0xffffffff;
  iVar1 = FUN_005d29d0(0x28c,0);
  local_4._0_1_ = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00648db0(0,0x82d21520,"GarageMainScreen",0);
  }
  local_4._0_1_ = 0;
  param_1[0x18] = uVar2;
  FUN_00644060(1);
  if (param_5 == 0) {
    uVar2 = FUN_005251e0(param_1[4],0xdb8ccef6);
    param_1[0x19] = uVar2;
    uVar2 = FUN_005251e0(param_1[4],0x83003e0d);
    param_1[0x1a] = uVar2;
    uVar3 = FUN_0056db00();
    uVar2 = param_1[0x1a];
  }
  else {
    if (param_5 != 1) goto LAB_007bf028;
    uVar2 = FUN_005251e0(param_1[4],0xdb8ccef7);
    param_1[0x19] = uVar2;
    uVar2 = FUN_005251e0(param_1[4],0x83003e0e);
    param_1[0x1a] = uVar2;
    uVar3 = FUN_0056db00();
    uVar2 = param_1[0x1a];
  }
  FUN_00515d70(uVar2,&DAT_008941f8,uVar3);
LAB_007bf028:
  if ((_DAT_009ba9d0 & 1) == 0) {
    _DAT_009ba9d0 = _DAT_009ba9d0 | 1;
    local_4._0_1_ = 2;
    FUN_00739a70(0xffffffff,0,0,0);
    FUN_00739a70(0xffffffff,0,0,0);
    DAT_009ba9c0 = 0;
    DAT_009ba9c1 = 0;
    _DAT_009ba9c4 = 0;
    _DAT_009ba9c8 = 0;
    DAT_009ba9cc = 0;
    DAT_009ba9cd = 1;
    _atexit((_func_4879 *)&LAB_0088f120);
    local_4._0_1_ = 0;
  }
  param_1[0xb] = &DAT_009ba3a0;
  FUN_007a93e0(param_4,param_1[0xc]);
  param_1[0x15] = 0;
  pvVar4 = _malloc(0x590);
  local_4._0_1_ = 3;
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00760d50(0,param_1[0x1c]);
  }
  local_4._0_1_ = 0;
  param_1[0xd] = uVar2;
  pvVar4 = _malloc(0x140);
  local_4._0_1_ = 4;
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00476870(param_1[0x1c]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x13] = uVar2;
  FUN_007a9090("BACKDROP");
  FUN_00515e20(local_2c,0x20,"CAR_NAME_%s",*param_4 * 0xd0 + DAT_009b09d8);
  uVar2 = FUN_005af1c0(local_2c);
  FUN_00515c00(param_1[0x19],uVar2);
  FUN_004fc310(param_1[0x1c],0x3f800000,0);
  FUN_007b9ea0(0);
  ExceptionList = local_c;
  return param_1;
}

