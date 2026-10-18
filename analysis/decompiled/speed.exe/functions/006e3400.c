/* speed.exe 006e3400 FUN_006e3400; analysis pseudocode, not buildable source.
 * calls 006cc1d0 FUN_006cc1d0
 * calls 006e3270 FUN_006e3270
 * calls 006ceb40 FUN_006ceb40
 * calls 006e28c0 FUN_006e28c0
 * calls 005d29d0 FUN_005d29d0
 * calls 006da040 FUN_006da040
 * calls 006cea30 FUN_006cea30
 * calls 006dd990 FUN_006dd990
 * calls 006cc3f0 FUN_006cc3f0
 */

void __thiscall FUN_006e3400(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_ECX;
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
  puStack_c = &LAB_0087e680;
  local_10 = ExceptionList;
  local_28 = *param_4;
  local_24 = param_4[1];
  iVar3 = *(int *)(param_1 + 4);
  local_20 = param_4[2];
  local_14 = &stack0xffffffcc;
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(param_1 + 0xc) - iVar3) / 0xc;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    puVar1 = &stack0xffffffcc;
    if (0x15555555U - iVar2 < param_3) {
      ExceptionList = &local_10;
      FUN_006e3270();
      uVar6 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
    }
    if (uVar6 < iVar2 + param_3) {
      if (0x15555555 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
      }
      if (uVar6 < iVar3 + param_3) {
        iVar3 = FUN_006cc1d0();
        uVar6 = iVar3 + param_3;
      }
      iVar2 = FUN_005d29d0(uVar6 * 0xc,&PTR_LAB_004c5452_1_00890f10);
      local_8 = 0;
      local_18 = FUN_006da040(*(undefined4 *)(param_1 + 4),param_2,iVar2,param_1,param_2);
      FUN_006dd990(local_18,param_3,&local_28,param_1,param_2);
      FUN_006da040(param_2,*(undefined4 *)(param_1 + 8),local_18 + param_3 * 0xc,param_1,param_2);
      iVar3 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
      }
      if (iVar3 != 0) {
        FUN_006cc3f0(iVar3,(*(int *)(param_1 + 0xc) - iVar3) / 0xc);
      }
      *(uint *)(param_1 + 0xc) = uVar6 * 0xc + iVar2;
      *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar4) * 0xc;
      *(int *)(param_1 + 4) = iVar2;
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
    if ((uint)((iVar3 - param_2) / 0xc) < param_3) {
      iVar2 = param_3 * 0xc;
      FUN_006da040(param_2,iVar3,iVar2 + param_2,param_1,iVar2);
      local_8 = 2;
      FUN_006e28c0(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2) / 0xc,&local_28
                  );
      iVar2 = *(int *)(param_1 + 8) + iVar2;
      *(int *)(param_1 + 8) = iVar2;
      FUN_006cea30(param_2,iVar2 + param_3 * -0xc,&local_28);
      ExceptionList = local_10;
      return;
    }
    iVar2 = iVar3 + param_3 * -0xc;
    uVar5 = FUN_006da040(iVar2,iVar3,iVar3,param_1,iVar2);
    *(undefined4 *)(param_1 + 8) = uVar5;
    FUN_006ceb40(param_2,iVar2,iVar3,iVar2);
    FUN_006cea30(param_2,param_3 * 0xc + param_2,&local_28);
  }
  ExceptionList = local_10;
  return;
}

