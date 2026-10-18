/* speed.exe 005d6bd0 FUN_005d6bd0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 005d13a0 FUN_005d13a0
 * calls 005d1500 FUN_005d1500
 * calls 005d3620 FUN_005d3620
 * calls 005d5340 FUN_005d5340
 * calls 005cda40 FUN_005cda40
 * calls 005d6360 FUN_005d6360
 * calls 005d1800 FUN_005d1800
 */

void __thiscall FUN_005d6bd0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int iVar6;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00874a50;
  local_10 = ExceptionList;
  local_20 = param_4[1];
  local_24 = *param_4;
  iVar3 = *(int *)(param_1 + 4);
  local_14 = &stack0xffffffd0;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 3;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar3 >> 3;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    puVar1 = &stack0xffffffd0;
    if (0x1fffffffU - iVar6 < param_3) {
      ExceptionList = &local_10;
      uVar2 = FUN_005d6360();
      iVar3 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar3 >> 3;
    }
    if (uVar2 < iVar6 + param_3) {
      if (0x1fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 8) - iVar3 >> 3;
      }
      if (uVar2 < iVar6 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 3;
        }
        uVar2 = iVar3 + param_3;
      }
      local_18 = uVar2 << 3;
      iVar6 = FUN_005d29d0(local_18,&PTR_LAB_004c5452_1_00890f10);
      local_8 = 0;
      iVar3 = FUN_005d1800(*(undefined4 *)(param_1 + 4),param_2,iVar6,param_1,param_2);
      FUN_005d3620(iVar3,param_3,&local_24,param_1,param_2);
      FUN_005d1800(param_2,*(undefined4 *)(param_1 + 8),iVar3 + param_3 * 8,param_1,param_2);
      iVar3 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - iVar3 >> 3;
      }
      if (iVar3 != 0) {
        FUN_005d13a0(iVar3,*(int *)(param_1 + 0xc) - iVar3 >> 3);
      }
      *(int *)(param_1 + 0xc) = local_18 + iVar6;
      *(uint *)(param_1 + 8) = iVar6 + (param_3 + iVar4) * 8;
      *(int *)(param_1 + 4) = iVar6;
      ExceptionList = local_10;
      return;
    }
    iVar6 = *(int *)(param_1 + 8);
    iVar3 = param_3 * 8;
    if ((uint)(iVar6 - param_2 >> 3) < param_3) {
      FUN_005d1800(param_2,iVar6,iVar3 + param_2,param_1,iVar3);
      local_8 = 2;
      FUN_005d5340(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 3),&local_24)
      ;
      iVar3 = *(int *)(param_1 + 8) + iVar3;
      *(int *)(param_1 + 8) = iVar3;
      FUN_005cda40(param_2,iVar3 + param_3 * -8,&local_24);
      ExceptionList = local_10;
      return;
    }
    iVar4 = iVar6 + param_3 * -8;
    uVar5 = FUN_005d1800(iVar4,iVar6,iVar6,param_1,iVar3);
    *(undefined4 *)(param_1 + 8) = uVar5;
    FUN_005d1500(param_2,iVar4,iVar6);
    FUN_005cda40(param_2,iVar3 + param_2,&local_24);
  }
  ExceptionList = local_10;
  return;
}

