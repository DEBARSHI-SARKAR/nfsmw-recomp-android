/* speed.exe 0066a890 FUN_0066a890; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 004fa510 FUN_004fa510
 * calls 005c8cc0 FUN_005c8cc0
 * calls 00467c30 FUN_00467c30
 * calls 0066a730 FUN_0066a730
 * calls 006e9660 FUN_006e9660
 * calls 006e95e0 FUN_006e95e0
 * calls 0045a760 FUN_0045a760
 * calls 005ca910 FUN_005ca910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0066a890(int *param_1,int param_2,undefined4 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_1a8;
  undefined1 local_1a1;
  int local_168;
  undefined4 local_14c [12];
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a626;
  local_c = ExceptionList;
  fVar1 = (float)(int)*(short *)(param_2 + 8) * _DAT_00890d60;
  local_1a1 = 0;
  fVar2 = (float)(int)*(short *)(param_2 + 10) * _DAT_00890d60;
  fVar3 = (float)(int)*(short *)(param_2 + 0xc) * _DAT_00890d60;
  puVar7 = &DAT_008a3028;
  puVar8 = local_14c;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  ExceptionList = &local_c;
  FUN_00467c30();
  local_4 = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    FUN_006e95e0();
    FUN_006e9660();
    local_4._0_1_ = 1;
    FUN_0045a760();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045a430();
    if (local_168 == DAT_00988e84) {
      FUN_0045a760();
    }
  }
  if (param_4 == '\x01') {
    if ((*(byte *)(param_2 + 0xe) & 0x20) != 0) {
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 0;
    }
  }
  else if (param_4 == '\0') {
    FUN_005ca910();
    local_110 = 0x3f800000;
    local_11c = fVar1;
    local_118 = fVar2;
    local_114 = fVar3;
    FUN_005c8cc0();
  }
  if (((*(ushort *)(param_2 + 0xe) & 0xe) != 0) &&
     (cVar4 = (**(code **)(*param_1 + 8))(), cVar4 != '\0')) {
    local_1a1 = 1;
  }
  if ((((*(byte *)(param_2 + 0xe) & 0x10) != 0) &&
      (piVar5 = (int *)FUN_0066a730(), piVar5 != (int *)0x0)) &&
     (local_1a8 = *piVar5, 0 < local_1a8)) {
    if ((param_4 == '\0') && (0 < local_1a8)) {
      do {
        FUN_004fa510();
        local_1a8 = local_1a8 + -1;
      } while (local_1a8 != 0);
    }
    (**(code **)(*param_1 + 0xc))();
    local_1a1 = 1;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return local_1a1;
}

