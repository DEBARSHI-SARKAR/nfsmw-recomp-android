/* speed.exe 0075cbe0 FUN_0075cbe0; analysis pseudocode, not buildable source.
 * calls 0073ff90 FUN_0073ff90
 * calls 007401e0 FUN_007401e0
 * calls 0074cf90 FUN_0074cf90
 * calls 005d29d0 FUN_005d29d0
 * calls 0075c950 FUN_0075c950
 * calls 0075aa30 FUN_0075aa30
 * calls 0074ce70 FUN_0074ce70
 * calls 0073f640 FUN_0073f640
 * calls 00758a70 FUN_00758a70
 */

void __thiscall FUN_0075cbe0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  uint extraout_EDX;
  uint uVar6;
  uint uVar7;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_008813a0;
  local_10 = ExceptionList;
  local_1c = *param_4;
  iVar4 = *(int *)(param_1 + 4);
  local_14 = &stack0xffffffd0;
  if (iVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(int *)(param_1 + 0xc) - iVar4 >> 2;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) - iVar4 >> 2;
    }
    uVar6 = param_3;
    ExceptionList = &local_10;
    puVar2 = &stack0xffffffd0;
    if (0x3fffffffU - iVar3 < param_3) {
      ExceptionList = &local_10;
      FUN_0075c950();
      iVar4 = extraout_ECX;
      uVar6 = extraout_EDX;
      puVar2 = local_14;
    }
    local_14 = puVar2;
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) - iVar4 >> 2;
    }
    if (uVar7 < iVar3 + uVar6) {
      if (0x3fffffff - (uVar7 >> 1) < uVar7) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)(uVar7 + (uVar7 >> 1));
      }
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 8) - iVar4 >> 2;
      }
      if (param_4 < iVar3 + uVar6) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - iVar4 >> 2;
        }
        param_4 = (undefined4 *)(iVar4 + uVar6);
      }
      if (param_4 == (undefined4 *)0x0) {
        local_18 = 0;
      }
      else {
        local_18 = FUN_005d29d0((int)param_4 * 4,0);
      }
      uVar7 = local_20 >> 8;
      local_20 = uVar7 << 8;
      local_8 = 0;
      iVar4 = FUN_007401e0(*(undefined4 *)(param_1 + 4),param_2,local_18,param_1,local_20);
      local_20 = uVar7 << 8;
      FUN_0074cf90(iVar4,param_3,&local_1c,param_1,local_20);
      param_3 = param_3 & 0xffffff00;
      FUN_007401e0(param_2,*(undefined4 *)(param_1 + 8),iVar4 + uVar1 * 4,param_1,param_3);
      iVar4 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 8) - iVar4 >> 2;
      }
      if (iVar4 != 0) {
        FUN_0073f640(iVar4,*(int *)(param_1 + 0xc) - iVar4 >> 2);
      }
      *(int *)(param_1 + 0xc) = local_18 + (int)param_4 * 4;
      *(uint *)(param_1 + 8) = local_18 + (uVar1 + iVar3) * 4;
      *(int *)(param_1 + 4) = local_18;
      ExceptionList = local_10;
      return;
    }
    iVar4 = *(int *)(param_1 + 8);
    if ((uint)(iVar4 - param_2 >> 2) < uVar6) {
      FUN_00758a70(param_2,iVar4,uVar6 * 4 + param_2);
      local_8 = 2;
      FUN_0075aa30(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 2),&local_1c)
      ;
      iVar4 = *(int *)(param_1 + 8) + uVar6 * 4;
      *(int *)(param_1 + 8) = iVar4;
      FUN_0073ff90(param_2,iVar4 + uVar6 * -4,&local_1c);
      ExceptionList = local_10;
      return;
    }
    iVar3 = iVar4 + uVar6 * -4;
    uVar5 = FUN_00758a70(iVar3,iVar4,iVar4);
    *(undefined4 *)(param_1 + 8) = uVar5;
    FUN_0074ce70(param_2,iVar3,iVar4);
    FUN_0073ff90(param_2,uVar6 * 4 + param_2,&local_1c);
  }
  ExceptionList = local_10;
  return;
}

