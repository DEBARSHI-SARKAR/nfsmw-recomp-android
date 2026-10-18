/* speed.exe 007c2ba0 FUN_007c2ba0; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 00524850 FUN_00524850
 * calls 0058ffa0 FUN_0058ffa0
 * calls 00525220 FUN_00525220
 * calls 005aba50 FUN_005aba50
 * calls 00591e90 FUN_00591e90
 * calls 007ad640 FUN_007ad640
 * calls 005251e0 FUN_005251e0
 * calls 00514c70 FUN_00514c70
 * calls 0056c9f0 FUN_0056c9f0
 * calls 005251a0 FUN_005251a0
 * calls 007b4d70 FUN_007b4d70
 * calls 007c2780 FUN_007c2780
 */

undefined4 * __thiscall FUN_007c2ba0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883b96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  puVar1 = param_1 + 0xb;
  *param_1 = &PTR_FUN_008b7e3c;
  *puVar1 = puVar1;
  param_1[0xc] = puVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x1a] = 0xffffffff;
  bVar2 = *(byte *)(param_2 + 9);
  param_1[0x1b] = &PTR_LAB_008b72b4;
  param_1[0x1e] = (uint)bVar2;
  param_1[0x1f] = 0;
  param_1[0x20] = param_1[4];
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = &PTR_LAB_008b7244;
  param_1[0x23] = 0;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 5;
  param_1[0x29] = 0;
  param_1[0x35] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  FUN_0056c9f0();
  param_1[0x36] = &PTR_FUN_0089b098;
  local_4._0_1_ = 4;
  FUN_0056c9f0();
  param_1[0x47] = &PTR_FUN_0089b098;
  local_4._0_1_ = 5;
  FUN_0056c9f0();
  param_1[0x58] = &PTR_FUN_0089b098;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)((int)param_1 + 0x1a5) = 0;
  param_1[0x6a] = *(uint *)(param_2 + 8) & 0xff;
  local_4 = CONCAT31(local_4._1_3_,6);
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0xe] = 0;
  uVar3 = FUN_005251a0(param_1[4],0x3e01ad1d);
  param_1[0xf] = uVar3;
  uVar3 = FUN_005251a0(param_1[4],0xb05dd708);
  param_1[0x10] = uVar3;
  uVar3 = FUN_005251e0(param_1[4],0xd6d32016);
  param_1[0x11] = uVar3;
  uVar3 = FUN_005251e0(param_1[4],0x79d6e45c);
  param_1[0x12] = uVar3;
  uVar3 = FUN_005251e0(param_1[4],0x5ba2f765);
  param_1[0x13] = uVar3;
  if (((DAT_0091cf90[300] & 4U) == 0) || (*DAT_0091cf90 != '\x02')) {
    DAT_009b9d5c = 0;
  }
  else if (param_1[0x6a] == 0) {
    DAT_009b9d5c = 0;
    FUN_00525220(param_1[4],0xe3fe27fe,0x7b070984);
    FUN_0058ffa0(1);
  }
  else {
    DAT_009b9d5c = 1;
    FUN_005aba50(1);
    FUN_00525220(param_1[4],0xe3fe27fe,0x7b070985);
  }
  if ((*(uint *)(DAT_0091cf90 + 300) >> 0xf & 1) == 0) {
    uVar3 = FUN_00524850(param_1[4],0x19398802);
    FUN_00514c70(uVar3);
    uVar3 = FUN_00524850(param_1[4],0x1930b057);
    FUN_00514c70(uVar3);
    uVar3 = FUN_00524850(param_1[4],0x20d113dc);
    FUN_00514c70(uVar3);
    uVar3 = FUN_00524850(param_1[4],0x20c83c31);
    FUN_00514c70(uVar3);
  }
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) ||
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) {
    uVar3 = FUN_00524850(param_1[4],0xe9ed0a2);
    FUN_00514c70(uVar3);
    uVar3 = FUN_00524850(param_1[4],0x18a4384f);
    FUN_00514c70(uVar3);
  }
  if (((DAT_0091cf90[300] & 1U) != 0) && ((*(uint *)(DAT_0091cf90 + 300) >> 0xf & 1) == 0)) {
    FUN_007ad640();
  }
  FUN_007b4d70();
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_007c2780();
  if (((DAT_0091cf90[300] & 1U) == 0) || ((*(uint *)(DAT_0091cf90 + 300) >> 0xf & 1) == 0)) {
    iVar4 = FUN_00591e90("GarageMain.fng");
    *(undefined1 *)(iVar4 + 0x58) = 0;
  }
  ExceptionList = local_c;
  return param_1;
}

