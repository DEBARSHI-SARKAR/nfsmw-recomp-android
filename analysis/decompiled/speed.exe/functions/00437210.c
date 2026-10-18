/* speed.exe 00437210 FUN_00437210; analysis pseudocode, not buildable source.
 * calls 0041dd40 FUN_0041dd40
 * calls 0042d2d0 FUN_0042d2d0
 * calls 00435c70 FUN_00435c70
 * calls 005d29d0 FUN_005d29d0
 * calls 0040f170 FUN_0040f170
 * calls 0040bb30 FUN_0040bb30
 * calls 0040cac0 FUN_0040cac0
 * calls 0041d620 FUN_0041d620
 * calls 0040f5d0 FUN_0040f5d0
 */

void __thiscall FUN_00437210(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00868c70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_38 = *param_4;
  local_34 = param_4[1];
  local_30 = param_4[2];
  local_20 = param_4[6];
  local_2c = param_4[3];
  local_28 = param_4[4];
  local_24 = param_4[5];
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar2) / 0x1c;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    puVar1 = &stack0xffffffbc;
    if (0x9249249U - iVar2 < param_3) {
      ExceptionList = &local_10;
      FUN_00435c70();
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
    }
    if (uVar5 < iVar2 + param_3) {
      if (0x9249249 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (*(int *)(param_1 + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
      }
      if (uVar5 < iVar2 + param_3) {
        iVar2 = FUN_0040bb30();
        uVar5 = iVar2 + param_3;
      }
      if (uVar5 == 0) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)FUN_005d29d0(uVar5 * 0x1c,0);
      }
      local_8 = 0;
      local_18 = FUN_0040f5d0(*(undefined4 *)(param_1 + 4),param_2,param_4,param_1,param_2);
      FUN_0041dd40(local_18,param_3,&local_38,param_1,param_2);
      FUN_0040f5d0(param_2,*(undefined4 *)(param_1 + 8),local_18 + param_3 * 0x1c,param_1,param_2);
      local_8 = 0xffffffff;
      iVar2 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
      }
      if (*(int *)(param_1 + 4) != 0) {
        FUN_0040cac0(*(undefined4 *)(param_1 + 4),
                     (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x1c);
      }
      *(uint *)(param_1 + 0xc) = uVar5 * 0x1c + (int)param_4;
      *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x1c + (int)param_4;
      *(undefined4 **)(param_1 + 4) = param_4;
      ExceptionList = local_10;
      return;
    }
    iVar2 = *(int *)(param_1 + 8);
    if ((uint)((iVar2 - param_2) / 0x1c) < param_3) {
      iVar3 = param_3 * 0x1c;
      FUN_0040f5d0(param_2,iVar2,iVar3 + param_2,param_1,iVar3);
      local_8 = 2;
      FUN_0042d2d0(*(undefined4 *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2) / 0x1c,
                   &local_38);
      iVar3 = *(int *)(param_1 + 8) + iVar3;
      *(int *)(param_1 + 8) = iVar3;
      FUN_0041d620(param_2,iVar3 + param_3 * -0x1c,&local_38);
      ExceptionList = local_10;
      return;
    }
    iVar3 = iVar2 + param_3 * -0x1c;
    uVar4 = FUN_0040f5d0(iVar3,iVar2,iVar2,param_1,iVar3);
    *(undefined4 *)(param_1 + 8) = uVar4;
    FUN_0040f170(param_2,iVar3,iVar2,iVar3);
    FUN_0041d620(param_2,param_3 * 0x1c + param_2,&local_38);
  }
  ExceptionList = local_10;
  return;
}

