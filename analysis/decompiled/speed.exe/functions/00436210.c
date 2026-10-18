/* speed.exe 00436210 FUN_00436210; analysis pseudocode, not buildable source.
 * calls 004301f0 FUN_004301f0
 * calls 0040e7e0 FUN_0040e7e0
 * calls 00425a80 FUN_00425a80
 * calls 0040c730 FUN_0040c730
 * calls 005d29d0 FUN_005d29d0
 * calls 00435a60 FUN_00435a60
 * calls 0041d430 FUN_0041d430
 * calls 0041e380 FUN_0041e380
 */

void __thiscall FUN_00436210(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 local_3c [8];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00868c10;
  local_10 = ExceptionList;
  iVar5 = *(int *)(param_1 + 4);
  local_14 = &stack0xffffffb8;
  puVar6 = local_3c;
  local_1c = param_1;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xc) - iVar5 >> 5;
  }
  uVar7 = CONCAT44(iVar5,iVar4);
  if (param_3 != 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar5 >> 5;
    }
    ExceptionList = &local_10;
    if (0x7ffffffU - iVar5 < param_3) {
      ExceptionList = &local_10;
      uVar7 = FUN_00435a60();
    }
    iVar5 = (int)((ulonglong)uVar7 >> 0x20);
    uVar1 = (uint)uVar7;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - iVar5 >> 5;
    }
    if (uVar1 < iVar4 + param_3) {
      if (0x7ffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - iVar5 >> 5;
      }
      if (uVar1 < iVar4 + param_3) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar5 >> 5;
        }
        uVar1 = iVar5 + param_3;
      }
      local_18 = uVar1 << 5;
      iVar4 = FUN_005d29d0(local_18,&PTR_LAB_004c5452_1_00890f10);
      local_8 = 0;
      iVar5 = FUN_0041e380(*(undefined4 *)(param_1 + 4),param_2,iVar4,param_1,param_2);
      FUN_00425a80(iVar5,param_3,local_3c,param_1,param_2);
      FUN_0041e380(param_2,*(undefined4 *)(param_1 + 8),iVar5 + param_3 * 0x20,param_1,param_2);
      iVar5 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar5 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 8) - iVar5 >> 5;
      }
      if (iVar5 != 0) {
        FUN_0040c730(iVar5,*(int *)(param_1 + 0xc) - iVar5 >> 5);
      }
      *(int *)(param_1 + 0xc) = local_18 + iVar4;
      *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x20 + iVar4;
      *(int *)(param_1 + 4) = iVar4;
      ExceptionList = local_10;
      return;
    }
    iVar5 = *(int *)(param_1 + 8);
    if ((uint)(iVar5 - param_2 >> 5) < param_3) {
      iVar4 = param_3 * 0x20;
      FUN_0041e380(param_2,iVar5,iVar4 + param_2,param_1,iVar4);
      local_8 = 2;
      FUN_004301f0(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 5),local_3c);
      iVar4 = *(int *)(param_1 + 8) + iVar4;
      *(int *)(param_1 + 8) = iVar4;
      FUN_0040e7e0(param_2,iVar4 + param_3 * -0x20,local_3c);
      ExceptionList = local_10;
      return;
    }
    iVar4 = iVar5 + param_3 * -0x20;
    uVar3 = FUN_0041e380(iVar4,iVar5,iVar5,param_1,param_3 * 0x20);
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_0041d430(param_2,iVar4,iVar5);
    FUN_0040e7e0(param_2,param_3 * 0x20 + param_2,local_3c);
  }
  ExceptionList = local_10;
  return;
}

