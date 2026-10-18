/* speed.exe 00434bf0 FUN_00434bf0; analysis pseudocode, not buildable source.
 * calls 00425b50 FUN_00425b50
 * calls 004302c0 FUN_004302c0
 * calls 00434380 FUN_00434380
 * calls 0041e4d0 FUN_0041e4d0
 * calls 0040f070 FUN_0040f070
 * calls 005d29d0 FUN_005d29d0
 * calls 0040d640 FUN_0040d640
 * calls 0041d520 FUN_0041d520
 */

void __thiscall FUN_00434bf0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_3c;
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
  puStack_c = &LAB_00868a10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_3c = *param_4;
  local_38 = param_4[1];
  local_34 = param_4[2];
  local_30 = param_4[3];
  local_2c = param_4[4];
  local_28 = param_4[5];
  local_24 = param_4[6];
  local_20 = param_4[7];
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(param_1 + 0xc) - iVar2 >> 5;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - iVar2 >> 5;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    puVar1 = &stack0xffffffb8;
    if (0x7ffffffU - iVar4 < param_3) {
      ExceptionList = &local_10;
      iVar2 = FUN_00434380();
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - iVar2 >> 5;
    }
    if (uVar5 < iVar4 + param_3) {
      if (0x7ffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - iVar2 >> 5;
      }
      if (uVar5 < iVar4 + param_3) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 8) - iVar2 >> 5;
        }
        uVar5 = iVar2 + param_3;
      }
      if (uVar5 == 0) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)FUN_005d29d0(uVar5 << 5,0);
      }
      local_8 = 0;
      local_18 = FUN_0041e4d0(*(undefined4 *)(param_1 + 4),param_2,param_4,param_1,param_2);
      FUN_00425b50(local_18,param_3,&local_3c,param_1,param_2);
      FUN_0041e4d0(param_2,*(undefined4 *)(param_1 + 8),local_18 + param_3 * 0x20,param_1,param_2);
      iVar2 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - iVar2 >> 5;
      }
      if (iVar2 != 0) {
        for (; iVar2 != *(int *)(param_1 + 8); iVar2 = iVar2 + 0x20) {
        }
        FUN_0040d640(*(int *)(param_1 + 4),*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 5);
      }
      *(uint *)(param_1 + 0xc) = uVar5 * 0x20 + (int)param_4;
      *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x20 + (int)param_4;
      *(undefined4 **)(param_1 + 4) = param_4;
      ExceptionList = local_10;
      return;
    }
    iVar2 = *(int *)(param_1 + 8);
    if ((uint)(iVar2 - param_2 >> 5) < param_3) {
      iVar4 = param_3 * 0x20;
      FUN_0041e4d0(param_2,iVar2,iVar4 + param_2,param_1,iVar4);
      local_8 = 2;
      FUN_004302c0(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 5),&local_3c)
      ;
      iVar4 = *(int *)(param_1 + 8) + iVar4;
      *(int *)(param_1 + 8) = iVar4;
      FUN_0041d520(param_2,iVar4 + param_3 * -0x20,&local_3c);
      ExceptionList = local_10;
      return;
    }
    iVar4 = param_3 * 0x20;
    iVar6 = iVar2 + param_3 * -0x20;
    uVar3 = FUN_0041e4d0(iVar6,iVar2,iVar2,param_1,iVar4);
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_0040f070(param_2,iVar6,iVar2,iVar4);
    FUN_0041d520(param_2,iVar4 + param_2,&local_3c);
  }
  ExceptionList = local_10;
  return;
}

