/* speed.exe 00662370 FUN_00662370; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0065d280 FUN_0065d280
 * calls 00661db0 FUN_00661db0
 * calls 00655000 FUN_00655000
 * calls 0065d300 FUN_0065d300
 * calls 0065ee90 FUN_0065ee90
 * calls 00657be0 FUN_00657be0
 * calls 00654b80 FUN_00654b80
 * calls 00657b30 FUN_00657b30
 */

void __thiscall FUN_00662370(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_40 [9];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0087a290;
  local_10 = ExceptionList;
  puVar4 = local_40;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x24;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x24;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    local_14 = &stack0xffffffb4;
    if (0x71c71c7U - iVar1 < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb4;
      FUN_00661db0();
      iVar3 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x24;
    }
    if (uVar5 < iVar1 + param_3) {
      if (0x71c71c7 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x24;
      }
      if (uVar5 < iVar3 + param_3) {
        iVar3 = FUN_00654b80();
        uVar5 = iVar3 + param_3;
      }
      if (uVar5 == 0) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)FUN_005d29d0(uVar5 * 0x24,0);
      }
      local_8 = 0;
      local_18 = FUN_00657be0(*(undefined4 *)(param_1 + 4),param_2,param_4,param_1,param_2);
      FUN_0065d300(local_18,param_3,local_40,param_1,param_2);
      FUN_00657be0(param_2,*(undefined4 *)(param_1 + 8),local_18 + param_3 * 0x24,param_1,param_2);
      iVar3 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x24;
      }
      if (iVar3 != 0) {
        FUN_00655000(iVar3,(*(int *)(param_1 + 0xc) - iVar3) / 0x24);
      }
      *(uint *)(param_1 + 0xc) = (int)param_4 + uVar5 * 0x24;
      *(uint *)(param_1 + 8) = (int)param_4 + (param_3 + iVar1) * 0x24;
      *(undefined4 **)(param_1 + 4) = param_4;
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
    if ((uint)((iVar3 - param_2) / 0x24) < param_3) {
      iVar1 = param_3 * 0x24;
      FUN_00657be0(param_2,iVar3,iVar1 + param_2,param_1,iVar1);
      local_8 = 2;
      FUN_0065ee90(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2) / 0x24,local_40
                  );
      iVar1 = *(int *)(param_1 + 8) + iVar1;
      *(int *)(param_1 + 8) = iVar1;
      FUN_0065d280(param_2,iVar1 + param_3 * -0x24,local_40);
      ExceptionList = local_10;
      return;
    }
    iVar1 = iVar3 + param_3 * -0x24;
    uVar2 = FUN_00657be0(iVar1,iVar3,iVar3,param_1,iVar1);
    *(undefined4 *)(param_1 + 8) = uVar2;
    FUN_00657b30(param_2,iVar1,iVar3,iVar1);
    FUN_0065d280(param_2,param_3 * 0x24 + param_2,local_40);
  }
  ExceptionList = local_10;
  return;
}

