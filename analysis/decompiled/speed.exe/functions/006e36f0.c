/* speed.exe 006e36f0 FUN_006e36f0; analysis pseudocode, not buildable source.
 * calls 006e28f0 FUN_006e28f0
 * calls 006cea70 FUN_006cea70
 * calls 006dd9d0 FUN_006dd9d0
 * calls 006e2bb0 FUN_006e2bb0
 * calls 006ceb80 FUN_006ceb80
 * calls 005d29d0 FUN_005d29d0
 * calls 006cc1f0 FUN_006cc1f0
 * calls 006da080 FUN_006da080
 * calls 006cc610 FUN_006cc610
 */

void __thiscall FUN_006e36f0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_ECX;
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
  puStack_c = &LAB_0087e690;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  iVar3 = *(int *)(param_1 + 4);
  local_34 = *param_4;
  local_30 = param_4[1];
  local_2c = param_4[2];
  local_28 = param_4[3];
  local_24 = param_4[4];
  local_20 = param_4[5];
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(param_1 + 0xc) - iVar3) / 0x18;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    puVar1 = &stack0xffffffc0;
    if (0xaaaaaaaU - iVar2 < param_3) {
      ExceptionList = &local_10;
      FUN_006e2bb0();
      uVar6 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
    }
    if (uVar6 < iVar2 + param_3) {
      if (0xaaaaaaa - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
      }
      if (uVar6 < iVar3 + param_3) {
        iVar3 = FUN_006cc1f0();
        uVar6 = iVar3 + param_3;
      }
      iVar2 = FUN_005d29d0(uVar6 * 0x18,&PTR_LAB_004c5452_1_00890f10);
      local_8 = 0;
      local_18 = FUN_006da080(*(undefined4 *)(param_1 + 4),param_2,iVar2,param_1,param_2);
      FUN_006dd9d0(local_18,param_3,&local_34,param_1,param_2);
      FUN_006da080(param_2,*(undefined4 *)(param_1 + 8),local_18 + param_3 * 0x18,param_1,param_2);
      iVar3 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
      }
      if (iVar3 != 0) {
        FUN_006cc610(iVar3,(*(int *)(param_1 + 0xc) - iVar3) / 0x18);
      }
      *(uint *)(param_1 + 0xc) = uVar6 * 0x18 + iVar2;
      *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar4) * 0x18;
      *(int *)(param_1 + 4) = iVar2;
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
    if ((uint)((iVar3 - param_2) / 0x18) < param_3) {
      iVar2 = param_3 * 0x18;
      FUN_006da080(param_2,iVar3,iVar2 + param_2,param_1,iVar2);
      local_8 = 2;
      FUN_006e28f0(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2) / 0x18,
                   &local_34);
      iVar2 = *(int *)(param_1 + 8) + iVar2;
      *(int *)(param_1 + 8) = iVar2;
      FUN_006cea70(param_2,iVar2 + param_3 * -0x18,&local_34);
      ExceptionList = local_10;
      return;
    }
    iVar2 = iVar3 + param_3 * -0x18;
    uVar5 = FUN_006da080(iVar2,iVar3,iVar3,param_1,iVar2);
    *(undefined4 *)(param_1 + 8) = uVar5;
    FUN_006ceb80(param_2,iVar2,iVar3,iVar2);
    FUN_006cea70(param_2,param_3 * 0x18 + param_2,&local_34);
  }
  ExceptionList = local_10;
  return;
}

