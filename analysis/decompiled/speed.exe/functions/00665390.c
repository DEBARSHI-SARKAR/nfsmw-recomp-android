/* speed.exe 00665390 FUN_00665390; analysis pseudocode, not buildable source.
 * calls 0065dbc0 FUN_0065dbc0
 * calls 005d29d0 FUN_005d29d0
 * calls 00665300 FUN_00665300
 * calls 0065dc60 FUN_0065dc60
 * calls 006651f0 FUN_006651f0
 * calls 006650a0 FUN_006650a0
 * calls 00654990 FUN_00654990
 * calls 0065cab0 FUN_0065cab0
 */

int __thiscall FUN_00665390(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_40;
  int local_28;
  int local_24;
  undefined1 *local_20;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  piVar1 = DAT_00925980;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a3a2;
  local_c = ExceptionList;
  local_28 = *(int *)(param_1 + 0x18);
  if (local_28 == 0) {
    return 0;
  }
  local_40._4_4_ = *(int **)(param_1 + 0x14);
  local_20 = (undefined1 *)&local_40;
  local_40._0_4_ = param_2;
  ExceptionList = &local_c;
  local_24 = param_1;
  lVar6 = FUN_00654990();
  if (lVar6 != 0) {
    local_40 = lVar6;
    uVar2 = FUN_0065dbc0();
    if (uVar2 < (uint)piVar1[1]) {
      uVar3 = uVar2 * 0x10 + *piVar1;
      uVar2 = *(uint *)(uVar3 + 8);
      if (uVar2 != uVar3) {
        uVar2 = uVar2 & (uVar2 == uVar3) - 1;
        goto LAB_00665419;
      }
    }
  }
  uVar2 = 0;
LAB_00665419:
  if (uVar2 == 0) {
    local_40._0_4_ = 0x10;
    local_40._4_4_ = (int *)uVar2;
    iVar4 = FUN_005d29d0();
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      local_40._4_4_ = (int *)0x66543d;
      local_4 = uVar2;
      uVar2 = FUN_006651f0();
    }
    piVar1 = DAT_00925980;
    local_4 = 0xffffffff;
    local_40._0_4_ = (int)((ulonglong)lVar6 >> 0x20);
    local_40._4_4_ = (int *)uVar2;
    FUN_0065dc60((int)lVar6);
    if (0x20 < (piVar1[3] & 0xfffffffeU)) {
      local_40._4_4_ = (int *)piVar1[1];
      local_40._0_4_ = 0x665471;
      FUN_0065cab0();
    }
  }
  local_40._4_4_ = &local_28;
  local_40._0_4_ = 0x665484;
  plVar5 = (longlong *)FUN_006650a0();
  *plVar5 = lVar6;
  *(uint *)(plVar5 + 1) = uVar2;
  *(undefined4 *)((int)plVar5 + 0xc) = local_10;
  local_40._4_4_ = (int *)local_24;
  local_40._0_4_ = 0x66549f;
  FUN_00665300();
  ExceptionList = local_c;
  return local_28;
}

