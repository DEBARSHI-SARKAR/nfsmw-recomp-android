/* speed.exe 005d6e40 FUN_005d6e40; analysis pseudocode, not buildable source.
 * calls 005d6670 FUN_005d6670
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d29d0 FUN_005d29d0
 * calls 005d1530 FUN_005d1530
 * calls 005d54a0 FUN_005d54a0
 * calls 005d5470 FUN_005d5470
 * calls 005cda70 FUN_005cda70
 * calls 005d4eb0 FUN_005d4eb0
 * calls 005d1290 FUN_005d1290
 * calls 005d5fc0 FUN_005d5fc0
 */

void __thiscall FUN_005d6e40(int param_1,int param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00874a68;
  local_10 = ExceptionList;
  piVar1 = (int *)*param_4;
  ExceptionList = &local_10;
  *piVar1 = *piVar1 + 1;
  iVar3 = *(int *)(param_1 + 4);
  local_8 = 0;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 2;
  }
  param_4 = piVar1;
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar3 >> 2;
    }
    if (0x3fffffffU - iVar6 < param_3) {
      uVar2 = FUN_005d6670();
      iVar3 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar3 >> 2;
    }
    if (uVar2 < iVar6 + param_3) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 8) - iVar3 >> 2;
      }
      if (uVar2 < iVar6 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 2;
        }
        uVar2 = iVar3 + param_3;
      }
      iVar6 = FUN_005d29d0(uVar2 * 4,&PTR_LAB_004c5452_1_00890f10);
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar3 = FUN_005d4eb0(*(undefined4 *)(param_1 + 4),param_2,iVar6,param_1,param_2);
      FUN_005d54a0(iVar3,param_3,&param_4,param_1,param_2);
      FUN_005d4eb0(param_2,*(undefined4 *)(param_1 + 8),iVar3 + param_3 * 4,param_1,param_2);
      iVar3 = *(int *)(param_1 + 4);
      local_8 = 0;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - iVar3 >> 2;
      }
      if (iVar3 != 0) {
        FUN_005d5470(iVar3,*(undefined4 *)(param_1 + 8),param_1,param_2);
        FUN_005d1290(*(int *)(param_1 + 4),*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2);
      }
      *(uint *)(param_1 + 0xc) = uVar2 * 4 + iVar6;
      *(uint *)(param_1 + 8) = iVar6 + (param_3 + iVar4) * 4;
      *(int *)(param_1 + 4) = iVar6;
    }
    else {
      iVar6 = *(int *)(param_1 + 8);
      iVar3 = param_3 * 4;
      if ((uint)(iVar6 - param_2 >> 2) < param_3) {
        FUN_005d4eb0(param_2,iVar6,iVar3 + param_2,param_1,param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_005d5fc0(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 2),&param_4
                    );
        iVar3 = *(int *)(param_1 + 8) + iVar3;
        *(int *)(param_1 + 8) = iVar3;
        FUN_005cda70(param_2,iVar3 + param_3 * -4,&param_4);
      }
      else {
        iVar4 = iVar6 + param_3 * -4;
        uVar5 = FUN_005d4eb0(iVar4,iVar6,iVar6,param_1,param_2);
        *(undefined4 *)(param_1 + 8) = uVar5;
        FUN_005d1530(param_2,iVar4,iVar6);
        FUN_005cda70(param_2,iVar3 + param_2,&param_4);
      }
    }
  }
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    thunk_FUN_007c7250(piVar1);
  }
  ExceptionList = local_10;
  return;
}

