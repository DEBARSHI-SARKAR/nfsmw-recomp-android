/* speed.exe 006fa4d0 FUN_006fa4d0; analysis pseudocode, not buildable source.
 * calls 006ebc90 FUN_006ebc90
 * calls 006ec1e0 FUN_006ec1e0
 * calls 006f6760 FUN_006f6760
 * calls 005d29d0 FUN_005d29d0
 * calls 006fa130 FUN_006fa130
 * calls 006ec370 FUN_006ec370
 * calls 006f06e0 FUN_006f06e0
 * calls 006eb1c0 FUN_006eb1c0
 */

void __thiscall FUN_006fa4d0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  uint uVar4;
  int iVar5;
  int iVar6;
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
  puStack_c = &LAB_0087f460;
  local_10 = ExceptionList;
  local_2c = *param_4;
  local_28 = param_4[1];
  local_24 = param_4[2];
  iVar5 = *(int *)(param_1 + 4);
  local_20 = param_4[3];
  local_14 = &stack0xffffffc8;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(param_1 + 0xc) - iVar5 >> 4;
  }
  if (param_3 != 0) {
    if (iVar5 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar5 >> 4;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    puVar1 = &stack0xffffffc8;
    if (0xfffffffU - iVar2 < param_3) {
      ExceptionList = &local_10;
      FUN_006fa130();
      iVar5 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar5 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar5 >> 4;
    }
    if (uVar4 < iVar2 + param_3) {
      if (0xfffffff - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (iVar5 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 8) - iVar5 >> 4;
      }
      if (uVar4 < iVar2 + param_3) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar5 >> 4;
        }
        uVar4 = iVar5 + param_3;
      }
      if (uVar4 == 0) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)FUN_005d29d0(uVar4 << 4,0);
      }
      local_8 = 0;
      local_18 = FUN_006ec370(*(undefined4 *)(param_1 + 4),param_2,param_4,param_1,param_2);
      FUN_006f06e0(local_18,param_3,&local_2c,param_1,param_2);
      FUN_006ec370(param_2,*(undefined4 *)(param_1 + 8),local_18 + param_3 * 0x10,param_1,param_2);
      iVar5 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar5 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 8) - iVar5 >> 4;
      }
      if (iVar5 != 0) {
        FUN_006eb1c0(iVar5,*(int *)(param_1 + 0xc) - iVar5 >> 4);
      }
      *(uint *)(param_1 + 0xc) = uVar4 * 0x10 + (int)param_4;
      *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x10 + (int)param_4;
      *(undefined4 **)(param_1 + 4) = param_4;
      ExceptionList = local_10;
      return;
    }
    iVar5 = *(int *)(param_1 + 8);
    if ((uint)(iVar5 - param_2 >> 4) < param_3) {
      iVar2 = param_3 * 0x10;
      FUN_006ec370(param_2,iVar5,iVar2 + param_2,param_1,iVar2);
      local_8 = 2;
      FUN_006f6760(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 4),&local_2c)
      ;
      iVar2 = *(int *)(param_1 + 8) + iVar2;
      *(int *)(param_1 + 8) = iVar2;
      FUN_006ebc90(param_2,iVar2 + param_3 * -0x10,&local_2c);
      ExceptionList = local_10;
      return;
    }
    iVar2 = param_3 * 0x10;
    iVar6 = iVar5 + param_3 * -0x10;
    uVar3 = FUN_006ec370(iVar6,iVar5,iVar5,param_1,iVar2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_006ec1e0(param_2,iVar6,iVar5,iVar2);
    FUN_006ebc90(param_2,iVar2 + param_2,&local_2c);
  }
  ExceptionList = local_10;
  return;
}

