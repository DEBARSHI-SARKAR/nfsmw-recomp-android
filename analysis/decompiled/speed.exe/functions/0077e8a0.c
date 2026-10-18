/* speed.exe 0077e8a0 FUN_0077e8a0; analysis pseudocode, not buildable source.
 * calls 00772530 FUN_00772530
 * calls 0077c840 FUN_0077c840
 * calls 0076bc70 FUN_0076bc70
 * calls 00769710 FUN_00769710
 * calls 00769db0 FUN_00769db0
 * calls 0077d580 FUN_0077d580
 * calls 005d29d0 FUN_005d29d0
 * calls 00772640 FUN_00772640
 * calls 0076c190 FUN_0076c190
 */

void __thiscall FUN_0077e8a0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_4c [12];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00881e50;
  local_10 = ExceptionList;
  puVar4 = local_4c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x30;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    local_14 = &stack0xffffffa8;
    if (0x5555555U - iVar1 < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffa8;
      FUN_0077d580();
      iVar3 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
    }
    if (uVar5 < iVar1 + param_3) {
      if (0x5555555 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
      }
      if (uVar5 < iVar3 + param_3) {
        iVar3 = FUN_00769710();
        uVar5 = iVar3 + param_3;
      }
      if (uVar5 == 0) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)FUN_005d29d0(uVar5 * 0x30,0);
      }
      local_8 = 0;
      local_18 = FUN_0076c190(*(undefined4 *)(param_1 + 4),param_2,param_4,param_1,param_2);
      FUN_00772640(local_18,param_3,local_4c,param_1,param_2);
      FUN_0076c190(param_2,*(undefined4 *)(param_1 + 8),local_18 + param_3 * 0x30,param_1,param_2);
      iVar3 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
      }
      if (iVar3 != 0) {
        FUN_00769db0(iVar3,(*(int *)(param_1 + 0xc) - iVar3) / 0x30);
      }
      *(uint *)(param_1 + 0xc) = uVar5 * 0x30 + (int)param_4;
      *(uint *)(param_1 + 8) = (param_3 + iVar1) * 0x30 + (int)param_4;
      *(undefined4 **)(param_1 + 4) = param_4;
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
    if ((uint)((iVar3 - param_2) / 0x30) < param_3) {
      iVar1 = param_3 * 0x30;
      FUN_0076c190(param_2,iVar3,iVar1 + param_2,param_1,iVar1);
      local_8 = 2;
      FUN_0077c840(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2) / 0x30,local_4c
                  );
      iVar1 = *(int *)(param_1 + 8) + iVar1;
      *(int *)(param_1 + 8) = iVar1;
      FUN_0076bc70(param_2,iVar1 + param_3 * -0x30,local_4c);
      ExceptionList = local_10;
      return;
    }
    iVar1 = iVar3 + param_3 * -0x30;
    uVar2 = FUN_0076c190(iVar1,iVar3,iVar3,param_1,iVar1);
    *(undefined4 *)(param_1 + 8) = uVar2;
    FUN_00772530(param_2,iVar1,iVar3);
    FUN_0076bc70(param_2,param_3 * 0x30 + param_2,local_4c);
  }
  ExceptionList = local_10;
  return;
}

