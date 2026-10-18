/* speed.exe 0077da30 FUN_0077da30; analysis pseudocode, not buildable source.
 * calls 00772440 FUN_00772440
 * calls 00769c90 FUN_00769c90
 * calls 0077c810 FUN_0077c810
 * calls 0077d4a0 FUN_0077d4a0
 * calls 00694e60 FUN_00694e60
 * calls 0076c160 FUN_0076c160
 * calls 005d29d0 FUN_005d29d0
 * calls 0076bbd0 FUN_0076bbd0
 * calls 00772610 FUN_00772610
 */

void __thiscall FUN_0077da30(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_44 [10];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00881d80;
  local_10 = ExceptionList;
  puVar4 = local_44;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x28;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x28;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    local_14 = &stack0xffffffb0;
    if (0x6666666U - iVar1 < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb0;
      FUN_0077d4a0();
      iVar3 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x28;
    }
    if (uVar5 < iVar1 + param_3) {
      if (0x6666666 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x28;
      }
      if (uVar5 < iVar3 + param_3) {
        iVar3 = FUN_00694e60();
        uVar5 = iVar3 + param_3;
      }
      if (uVar5 == 0) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)FUN_005d29d0(uVar5 * 0x28,0);
      }
      local_8 = 0;
      local_18 = FUN_0076c160(*(undefined4 *)(param_1 + 4),param_2,param_4,param_1,param_2);
      FUN_00772610(local_18,param_3,local_44,param_1,param_2);
      FUN_0076c160(param_2,*(undefined4 *)(param_1 + 8),local_18 + param_3 * 0x28,param_1,param_2);
      iVar3 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x28;
      }
      if (iVar3 != 0) {
        FUN_00769c90(iVar3,(*(int *)(param_1 + 0xc) - iVar3) / 0x28);
      }
      *(uint *)(param_1 + 0xc) = (int)param_4 + uVar5 * 0x28;
      *(uint *)(param_1 + 8) = (int)param_4 + (param_3 + iVar1) * 0x28;
      *(undefined4 **)(param_1 + 4) = param_4;
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
    if ((uint)((iVar3 - param_2) / 0x28) < param_3) {
      iVar1 = param_3 * 0x28;
      FUN_0076c160(param_2,iVar3,iVar1 + param_2,param_1,iVar1);
      local_8 = 2;
      FUN_0077c810(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2) / 0x28,local_44
                  );
      iVar1 = *(int *)(param_1 + 8) + iVar1;
      *(int *)(param_1 + 8) = iVar1;
      FUN_0076bbd0(param_2,iVar1 + param_3 * -0x28,local_44);
      ExceptionList = local_10;
      return;
    }
    iVar1 = iVar3 + param_3 * -0x28;
    uVar2 = FUN_0076c160(iVar1,iVar3,iVar3,param_1,iVar1);
    *(undefined4 *)(param_1 + 8) = uVar2;
    FUN_00772440(param_2,iVar1,iVar3);
    FUN_0076bbd0(param_2,param_3 * 0x28 + param_2,local_44);
  }
  ExceptionList = local_10;
  return;
}

