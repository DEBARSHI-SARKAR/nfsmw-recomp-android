/* speed.exe 006479d0 FUN_006479d0; analysis pseudocode, not buildable source.
 * calls 005d0640 FUN_005d0640
 * calls 0045a430 FUN_0045a430
 * calls 00454c30 FUN_00454c30
 * calls 004546c0 FUN_004546c0
 * calls 00635250 FUN_00635250
 * calls 00452d40 FUN_00452d40
 * calls 00452bd0 FUN_00452bd0
 * calls 00452380 FUN_00452380
 * calls 00454640 FUN_00454640
 * calls 00645f10 FUN_00645f10
 * calls 00635060 FUN_00635060
 */

int __thiscall FUN_006479d0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 local_4c [12];
  undefined4 *local_40;
  undefined4 *local_34;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  piVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00635060();
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  if (param_3 != 0) {
    FUN_00452380(param_3,0,0);
    if (local_34 == (undefined4 *)0x0) {
      local_34 = &DAT_009205e0;
    }
    local_4._0_1_ = 1;
    param_3 = 0;
    do {
      iVar3 = FUN_005d0640(param_3);
      if (iVar3 != 0) {
        uVar2 = FUN_00454640(iVar3);
        FUN_004546c0(local_4c,uVar2);
        local_4 = CONCAT31(local_4._1_3_,2);
        uVar4 = FUN_00452d40();
        param_2 = (int *)0x0;
        if (uVar4 != 0) {
          do {
            if (local_40 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)FUN_00454c30(param_2);
LAB_00647aa8:
              if (puVar6 == (undefined4 *)0x0) goto LAB_00647aae;
            }
            else {
              puVar6 = local_40;
              if (param_2 == (int *)0x0) goto LAB_00647aa8;
LAB_00647aae:
              puVar6 = &DAT_009205e0;
            }
            if (((char *)puVar6[3] != (char *)0x0) && (*(char *)puVar6[3] != '\0')) {
              iVar7 = 0;
              iVar3 = (**(code **)(*piVar1 + 0x14))();
              if (0 < iVar3) {
                iVar3 = 0;
                do {
                  if ((((-1 < iVar3) && (iVar5 = (**(code **)(*piVar1 + 0x14))(), iVar7 < iVar5)) &&
                      (piVar1[6] + iVar3 != 0)) && (*(int *)(piVar1[6] + iVar3 + 4) == puVar6[2])) {
                    if (iVar7 != -1) {
                      uStack_28 = puVar6[4];
                      uStack_24 = puVar6[5];
                      iStack_1c = param_3;
                      uStack_20 = puVar6[6];
                      iVar3 = *(int *)(param_1 + 4);
                      uStack_14 = 0xbf800000;
                      uStack_10 = 0xbf800000;
                      iStack_18 = iVar7;
                      iVar7 = FUN_00635250(iVar3,*(undefined4 *)(iVar3 + 4),&uStack_28);
                      FUN_00645f10(1);
                      *(int *)(iVar3 + 4) = iVar7;
                      **(int **)(iVar7 + 4) = iVar7;
                    }
                    break;
                  }
                  iVar7 = iVar7 + 1;
                  iVar3 = iVar3 + 0x10;
                  iVar5 = (**(code **)(*piVar1 + 0x14))();
                } while (iVar7 < iVar5);
              }
            }
            param_2 = (int *)((int)param_2 + 1);
          } while (param_2 < uVar4);
        }
        local_4._0_1_ = 1;
        FUN_00452bd0();
      }
      param_3 = param_3 + 1;
    } while (param_3 < 0x8a);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return param_1;
}

