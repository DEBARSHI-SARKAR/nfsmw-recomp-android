/* speed.exe 0043ada0 FUN_0043ada0; analysis pseudocode, not buildable source.
 * calls 004099e0 FUN_004099e0
 * calls 005d29d0 FUN_005d29d0
 * calls 00403e50 FUN_00403e50
 * calls 00409d20 FUN_00409d20
 * calls 0043a9a0 FUN_0043a9a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0043ada0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868ed2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043a9a0(param_2,param_3,param_4,param_5);
  local_4 = 0;
  *param_1 = &PTR_FUN_00891bb8;
  param_1[2] = &PTR_LAB_00891bb0;
  param_1[0x13] = &PTR_LAB_00891ad8;
  param_1[0x15] = &PTR_LAB_00891ad0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  iVar5 = FUN_005d29d0(0x84,0);
  local_4._0_1_ = 1;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00403e50(5,5,0x41f00000);
  }
  local_4._0_1_ = 0;
  param_1[0x1cf] = uVar6;
  iVar5 = FUN_005d29d0(0x84,0);
  local_4._0_1_ = 2;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00403e50(5,5,0x41f00000);
  }
  local_4._0_1_ = 0;
  param_1[0x1d0] = uVar6;
  iVar5 = FUN_005d29d0(0x84,0);
  local_4._0_1_ = 3;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00403e50(DAT_008eb28c,DAT_008eb290,0x41f00000);
  }
  local_4._0_1_ = 0;
  param_1[0x1d1] = uVar6;
  puVar7 = (undefined4 *)FUN_005d29d0(0xb8,0);
  local_4._0_1_ = 4;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_004099e0(0,0x3dcccccd);
    *puVar7 = &PTR_FUN_00890df4;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    puVar7[0x2d] = 0;
  }
  local_4._0_1_ = 0;
  param_1[0x1d2] = puVar7;
  iVar5 = FUN_005d29d0(0x130,0);
  local_4._0_1_ = 5;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00409d20(0,0x3dcccccd,DAT_008eb28c,DAT_008eb290);
  }
  param_1[0x1d3] = iVar5;
  *(undefined4 *)(iVar5 + 0x20) = 0x3dcccccd;
  *(undefined4 *)(param_1[0x1d3] + 0x48) = 0x36a7c5ac;
  *(undefined4 *)(param_1[0x1d3] + 0x4c) = 0x36a7c5ac;
  *(undefined4 *)(param_1[0x1d3] + 0x50) = 0x36a7c5ac;
  *(undefined4 *)(param_1[0x1d3] + 0x3c) = 0x3c23d70a;
  *(undefined4 *)(param_1[0x1d3] + 0x40) = 0x3c23d70a;
  *(undefined4 *)(param_1[0x1d3] + 0x44) = 0x3c23d70a;
  iVar5 = param_1[0x1d3];
  *(undefined4 *)(iVar5 + 0x24) = 0xbecccccd;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  iVar5 = param_1[0x1d3];
  *(undefined4 *)(iVar5 + 0x2c) = 0xbf19999a;
  *(undefined4 *)(iVar5 + 0x30) = 0;
  iVar5 = param_1[0x1d3];
  *(undefined4 *)(iVar5 + 0x34) = 0xbc23d70a;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(param_1[0x1d2] + 0x20) = 0x3dcccccd;
  *(undefined4 *)(param_1[0x1d2] + 0x48) = 0x3727c5ac;
  *(undefined4 *)(param_1[0x1d2] + 0x4c) = 0x3727c5ac;
  *(undefined4 *)(param_1[0x1d2] + 0x50) = 0x3727c5ac;
  *(undefined4 *)(param_1[0x1d2] + 0x3c) = 0x3c23d70a;
  *(undefined4 *)(param_1[0x1d2] + 0x40) = 0x3c23d70a;
  *(undefined4 *)(param_1[0x1d2] + 0x44) = 0x3c23d70a;
  piVar1 = (int *)param_1[0x12];
  local_4 = (uint)local_4._1_3_ << 8;
  if (piVar1 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar1 + 0x30))();
    if (iVar5 == 1) {
      iVar5 = (**(code **)(*piVar1 + 0x58))();
      if (iVar5 == 0) {
        param_5 = 0x3f19999a;
        param_4 = 0x3f99999a;
        uVar6 = _DAT_00892b64;
        uVar2 = _DAT_0089062c;
        uVar3 = _DAT_00890ea8;
        uVar4 = _DAT_00890634;
        goto LAB_0043b089;
      }
    }
  }
  param_5 = 0x3ecccccd;
  param_4 = 0x3f800000;
  uVar6 = _DAT_00890cd4;
  uVar2 = _DAT_00891054;
  uVar3 = _DAT_00890dc4;
  uVar4 = _DAT_00890cd4;
LAB_0043b089:
  iVar5 = param_1[0x1d2];
  *(undefined4 *)(iVar5 + 0x24) = param_5;
  *(undefined4 *)(iVar5 + 0x28) = param_4;
  iVar5 = param_1[0x1d2];
  *(undefined4 *)(iVar5 + 0x2c) = uVar3;
  *(undefined4 *)(iVar5 + 0x30) = uVar4;
  iVar5 = param_1[0x1d2];
  *(undefined4 *)(iVar5 + 0x34) = uVar6;
  *(undefined4 *)(iVar5 + 0x38) = uVar2;
  ExceptionList = local_c;
  return param_1;
}

