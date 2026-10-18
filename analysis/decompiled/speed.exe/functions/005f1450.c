/* speed.exe 005f1450 FUN_005f1450; analysis pseudocode, not buildable source.
 * calls 005efa10 FUN_005efa10
 * calls 005ec8c0 FUN_005ec8c0
 * calls 005e2040 FUN_005e2040
 * calls 005e7a30 FUN_005e7a30
 * calls 005d29d0 FUN_005d29d0
 * calls 005e1b80 FUN_005e1b80
 * calls 005e79d0 FUN_005e79d0
 * calls 005df500 FUN_005df500
 */

void __thiscall FUN_005f1450(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  uint uVar6;
  uint extraout_EDX;
  int iVar7;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_008758a0;
  local_10 = ExceptionList;
  local_18 = *param_4;
  iVar4 = *(int *)(param_1 + 4);
  local_14 = &stack0xffffffd8;
  if (iVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(param_1 + 0xc) - iVar4 >> 2;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) - iVar4 >> 2;
    }
    ExceptionList = &local_10;
    puVar2 = &stack0xffffffd8;
    if (0x3fffffffU - iVar3 < param_3) {
      ExceptionList = &local_10;
      FUN_005efa10();
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
    if (uVar6 < iVar3 + param_3) {
      if (0x3fffffff - (uVar6 >> 1) < uVar6) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)(uVar6 + (uVar6 >> 1));
      }
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 8) - iVar4 >> 2;
      }
      if (param_4 < iVar3 + param_3) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - iVar4 >> 2;
        }
        param_4 = (undefined4 *)(iVar4 + param_3);
      }
      if (param_4 == (undefined4 *)0x0) {
        param_3 = 0;
      }
      else {
        param_3 = FUN_005d29d0((int)param_4 << 2,0);
      }
      local_8 = 0;
      iVar4 = FUN_005e2040(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1,param_2);
      FUN_005e7a30(iVar4,uVar1,&local_18,param_1,param_2);
      FUN_005e2040(param_2,*(undefined4 *)(param_1 + 8),iVar4 + uVar1 * 4,param_1,param_2);
      iVar4 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 8) - iVar4 >> 2;
      }
      if (iVar4 != 0) {
        FUN_005df500(iVar4,*(int *)(param_1 + 0xc) - iVar4 >> 2);
      }
      *(uint *)(param_1 + 0xc) = param_3 + (int)param_4 * 4;
      *(uint *)(param_1 + 8) = param_3 + (uVar1 + iVar3) * 4;
      *(uint *)(param_1 + 4) = param_3;
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = param_3 * 4;
    if ((uint)(iVar3 - param_2 >> 2) < param_3) {
      FUN_005e2040(param_2,iVar3,iVar4 + param_2,param_1,iVar4);
      local_8 = 2;
      FUN_005ec8c0(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 2),&local_18)
      ;
      iVar4 = *(int *)(param_1 + 8) + iVar4;
      *(int *)(param_1 + 8) = iVar4;
      FUN_005e1b80(param_2,iVar4 + param_3 * -4,&local_18);
      ExceptionList = local_10;
      return;
    }
    iVar7 = iVar3 + param_3 * -4;
    uVar5 = FUN_005e2040(iVar7,iVar3,iVar3,param_1,iVar4);
    *(undefined4 *)(param_1 + 8) = uVar5;
    FUN_005e79d0(param_2,iVar7,iVar3);
    FUN_005e1b80(param_2,iVar4 + param_2,&local_18);
  }
  ExceptionList = local_10;
  return;
}

