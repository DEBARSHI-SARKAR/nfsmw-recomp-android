/* speed.exe 0061d8e0 FUN_0061d8e0; analysis pseudocode, not buildable source.
 * calls 0060c820 FUN_0060c820
 * calls 00454810 FUN_00454810
 * calls 0060c540 FUN_0060c540
 * calls 0045a430 FUN_0045a430
 * calls 00603eb0 FUN_00603eb0
 * calls 004e4ea0 FUN_004e4ea0
 * calls 0045da30 FUN_0045da30
 * calls 00684610 FUN_00684610
 * calls 0060ca40 FUN_0060ca40
 * calls 005d0370 FUN_005d0370
 * calls 00619b70 FUN_00619b70
 * calls 006269b0 FUN_006269b0
 * calls 00616d40 FUN_00616d40
 * calls 0061cbe0 FUN_0061cbe0
 */

bool FUN_0061d8e0(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_54 [4];
  int *local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876958;
  local_c = ExceptionList;
  local_48 = *param_3;
  local_44 = param_3[1];
  local_40 = param_3[2];
  ExceptionList = &local_c;
  FUN_00603eb0(0x3e4ccccd);
  FUN_0060c540();
  local_38 = local_48;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_34 = local_44;
  local_30 = local_40;
  local_50 = (int *)FUN_0060c820();
  local_4c = 0;
  local_4 = 0;
  FUN_00684610(&local_2c,&local_38,local_54);
  if (local_4c == 0) {
    local_4 = 0xffffffff;
    FUN_0060c540();
    if (local_50 != (int *)0x0) {
      FUN_005d0370(local_50,0xc,0);
    }
    ExceptionList = local_c;
    return false;
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00619b70(local_4c);
  piVar8 = (int *)*local_50;
  if (piVar8 != local_50) {
    do {
      param_3 = (undefined4 *)piVar8[2];
      FUN_004e4ea0(param_3,0,0);
      local_4._0_1_ = 2;
      if (local_1c != 0) {
        pcVar5 = (char *)FUN_00454810(0x6df0abfe,0);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = (char *)FUN_006269b0(1);
        }
        if (*pcVar5 != '\0') {
          FUN_0061cbe0(&param_3);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0045a430();
      piVar8 = (int *)*piVar8;
    } while (piVar8 != local_50);
  }
  iVar4 = local_44;
  if ((local_44 != 0) && (uVar9 = local_40 - local_44 >> 2, uVar9 != 0)) {
    for (uVar10 = 0; uVar10 < uVar9; uVar10 = uVar10 + 1) {
      iVar6 = FUN_0045da30(uVar9);
      uVar1 = *(undefined4 *)(iVar4 + uVar10 * 4);
      *(undefined4 *)(iVar4 + uVar10 * 4) = *(undefined4 *)(iVar4 + iVar6 * 4);
      *(undefined4 *)(iVar4 + iVar6 * 4) = uVar1;
    }
    iVar6 = iVar4;
    for (param_3 = (undefined4 *)0x0; (param_3 < uVar9 && (param_3 < param_2));
        param_3 = (undefined4 *)((int)param_3 + 1)) {
      iVar2 = *(int *)(param_1 + 4);
      iVar7 = FUN_0060ca40(iVar2,*(undefined4 *)(iVar2 + 4),iVar6);
      FUN_00616d40(1);
      *(int *)(iVar2 + 4) = iVar7;
      **(int **)(iVar7 + 4) = iVar7;
      iVar6 = iVar6 + 4;
    }
    iVar6 = *(int *)(param_1 + 8);
    local_4 = local_4 & 0xffffff00;
    FUN_005d0370(iVar4,(local_3c - iVar4 >> 2) << 2,0);
    piVar8 = (int *)*local_50;
    *local_50 = (int)local_50;
    local_50[1] = (int)local_50;
    local_4 = 0xffffffff;
    local_4c = 0;
    if (piVar8 != local_50) {
      do {
        piVar3 = (int *)*piVar8;
        FUN_005d0370(piVar8,0xc,0);
        piVar8 = piVar3;
      } while (piVar3 != local_50);
    }
    if (local_50 != (int *)0x0) {
      FUN_005d0370(local_50,0xc,0);
    }
    ExceptionList = local_c;
    return iVar6 != 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (local_44 != 0) {
    FUN_005d0370(local_44,(local_3c - local_44 >> 2) * 4,0);
  }
  local_4 = 0xffffffff;
  FUN_0060c540();
  if (local_50 != (int *)0x0) {
    FUN_005d0370(local_50,0xc,0);
  }
  ExceptionList = local_c;
  return false;
}

