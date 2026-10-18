/* speed.exe 00681e20 FUN_00681e20; analysis pseudocode, not buildable source.
 * calls 0066f560 FUN_0066f560
 * calls 0067dc30 FUN_0067dc30
 * calls 00676700 FUN_00676700
 * calls 00681760 FUN_00681760
 * calls 006764c0 FUN_006764c0
 * calls 005d29d0 FUN_005d29d0
 * calls 0066d940 FUN_0066d940
 * calls 00676490 FUN_00676490
 */

void __thiscall FUN_00681e20(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0087b610;
  local_10 = ExceptionList;
  local_1c = param_4[1];
  local_20 = *param_4;
  iVar4 = *(int *)(param_1 + 4);
  local_14 = &stack0xffffffd4;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xc) - iVar4 >> 3;
  }
  uVar8 = CONCAT44(iVar5,iVar4);
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - iVar4 >> 3;
    }
    ExceptionList = &local_10;
    local_18 = param_1;
    puVar2 = &stack0xffffffd4;
    if (0x1fffffffU - iVar4 < param_3) {
      ExceptionList = &local_10;
      uVar8 = FUN_00681760();
      puVar2 = local_14;
    }
    local_14 = puVar2;
    uVar6 = (uint)((ulonglong)uVar8 >> 0x20);
    iVar4 = (int)uVar8;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar4 >> 3;
    }
    if (uVar6 < iVar5 + param_3) {
      if (0x1fffffff - (uVar6 >> 1) < uVar6) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)(uVar6 + (uVar6 >> 1));
      }
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar4 >> 3;
      }
      if (param_4 < iVar5 + param_3) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - iVar4 >> 3;
        }
        param_4 = (undefined4 *)(iVar4 + param_3);
      }
      if (param_4 == (undefined4 *)0x0) {
        param_3 = 0;
      }
      else {
        param_3 = FUN_005d29d0((int)param_4 * 8,0);
      }
      local_8 = 0;
      iVar4 = FUN_0066f560(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1,param_2);
      FUN_00676700(iVar4,uVar1,&local_20,param_1,param_2);
      FUN_0066f560(param_2,*(undefined4 *)(param_1 + 8),iVar4 + uVar1 * 8,param_1,param_2);
      iVar4 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar4 >> 3;
      }
      if (iVar4 != 0) {
        FUN_0066d940(iVar4,*(int *)(param_1 + 0xc) - iVar4 >> 3);
      }
      *(uint *)(param_1 + 0xc) = param_3 + (int)param_4 * 8;
      *(uint *)(param_1 + 8) = param_3 + (uVar1 + iVar5) * 8;
      *(uint *)(param_1 + 4) = param_3;
      ExceptionList = local_10;
      return;
    }
    iVar5 = *(int *)(param_1 + 8);
    iVar4 = param_3 * 8;
    if ((uint)(iVar5 - param_2 >> 3) < param_3) {
      FUN_0066f560(param_2,iVar5,iVar4 + param_2,param_1,iVar4);
      local_8 = 2;
      FUN_0067dc30(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 3),&local_20)
      ;
      iVar4 = *(int *)(param_1 + 8) + iVar4;
      *(int *)(param_1 + 8) = iVar4;
      FUN_00676490(param_2,iVar4 + param_3 * -8,&local_20);
      ExceptionList = local_10;
      return;
    }
    iVar7 = iVar5 + param_3 * -8;
    uVar3 = FUN_0066f560(iVar7,iVar5,iVar5,param_1,iVar4);
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_006764c0(param_2,iVar7,iVar5);
    FUN_00676490(param_2,iVar4 + param_2,&local_20);
  }
  ExceptionList = local_10;
  return;
}

