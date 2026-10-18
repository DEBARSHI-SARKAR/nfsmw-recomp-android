/* speed.exe 007110b0 FUN_007110b0; analysis pseudocode, not buildable source.
 * calls 00710370 FUN_00710370
 * calls 00706bd0 FUN_00706bd0
 * calls 00703610 FUN_00703610
 * calls 00706a60 FUN_00706a60
 * calls 005d29d0 FUN_005d29d0
 * calls 004b68c0 FUN_004b68c0
 * calls 00702960 FUN_00702960
 * calls 00703b10 FUN_00703b10
 * calls 0070b5b0 FUN_0070b5b0
 */

void __thiscall FUN_007110b0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_48 [11];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0087ff40;
  local_10 = ExceptionList;
  puVar4 = local_48;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x2c;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    local_14 = &stack0xffffffac;
    if (0x5d1745dU - iVar1 < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffac;
      FUN_00710370();
      iVar3 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
    }
    if (uVar5 < iVar1 + param_3) {
      if (0x5d1745d - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
      }
      if (uVar5 < iVar3 + param_3) {
        iVar3 = FUN_004b68c0();
        uVar5 = iVar3 + param_3;
      }
      if (uVar5 == 0) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)FUN_005d29d0(uVar5 * 0x2c,0);
      }
      local_8 = 0;
      local_18 = FUN_00703b10(*(undefined4 *)(param_1 + 4),param_2,param_4,param_1,param_2);
      FUN_00706bd0(local_18,param_3,local_48,param_1,param_2);
      FUN_00703b10(param_2,*(undefined4 *)(param_1 + 8),local_18 + param_3 * 0x2c,param_1,param_2);
      iVar3 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
      }
      if (iVar3 != 0) {
        FUN_00702960(iVar3,(*(int *)(param_1 + 0xc) - iVar3) / 0x2c);
      }
      *(uint *)(param_1 + 0xc) = uVar5 * 0x2c + (int)param_4;
      *(uint *)(param_1 + 8) = (param_3 + iVar1) * 0x2c + (int)param_4;
      *(undefined4 **)(param_1 + 4) = param_4;
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
    if ((uint)((iVar3 - param_2) / 0x2c) < param_3) {
      iVar1 = param_3 * 0x2c;
      FUN_00703b10(param_2,iVar3,iVar1 + param_2,param_1,iVar1);
      local_8 = 2;
      FUN_0070b5b0(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2) / 0x2c,local_48
                  );
      iVar1 = *(int *)(param_1 + 8) + iVar1;
      *(int *)(param_1 + 8) = iVar1;
      FUN_00703610(param_2,iVar1 + param_3 * -0x2c,local_48);
      ExceptionList = local_10;
      return;
    }
    iVar1 = iVar3 + param_3 * -0x2c;
    uVar2 = FUN_00703b10(iVar1,iVar3,iVar3,param_1,iVar1);
    *(undefined4 *)(param_1 + 8) = uVar2;
    FUN_00706a60(param_2,iVar1,iVar3);
    FUN_00703610(param_2,param_3 * 0x2c + param_2,local_48);
  }
  ExceptionList = local_10;
  return;
}

