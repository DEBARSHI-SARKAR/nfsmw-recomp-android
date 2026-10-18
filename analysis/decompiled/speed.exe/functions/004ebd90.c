/* speed.exe 004ebd90 FUN_004ebd90; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 008311aa FUN_008311aa
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 00831a8a FUN_00831a8a
 */

void __thiscall FUN_004ebd90(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d14c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)((int)param_2 + 0x10) * 4) = 0x7fff;
  local_10 = param_1;
  switch(*(undefined4 *)((int)param_2 + 0x10)) {
  case 1:
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar6 = FUN_00831667(0x1c);
      local_4 = 0;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        puVar1 = (undefined4 *)(iVar6 + 4);
        *puVar1 = 0;
        *(undefined4 *)(iVar6 + 8) = 0;
        *(undefined4 *)(iVar6 + 0xc) = 0;
        *(undefined4 *)(iVar6 + 0x10) = 0;
        *(undefined4 *)(iVar6 + 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x18) = 0;
        param_2 = (int *)iVar6;
        iVar4 = FUN_00831a8a(&DAT_0091481c,puVar1,iVar6);
        if (iVar4 < 0) {
          FUN_0083198b(&PTR_s_FX_UVES_008f0328);
          FUN_00831a8a(&DAT_0091481c,puVar1,iVar6);
          *(int *)(param_1 + 0x28) = iVar6;
          ExceptionList = local_c;
          return;
        }
      }
      *(int *)(param_1 + 0x28) = iVar6;
      ExceptionList = local_c;
      return;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar6 = FUN_00831667(0x24);
      local_4 = 1;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        if (*(uint **)(param_1 + 0x10) == (uint *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = **(uint **)(param_1 + 0x10) & 0x7fff;
        }
        puVar1 = (undefined4 *)(iVar6 + 4);
        *puVar1 = 0;
        if ((int)uVar3 < 0) {
          uVar3 = 0;
        }
        else if (0x7fff < uVar3) {
          uVar3 = 0x7fff;
        }
        *(uint *)(iVar6 + 8) = uVar3;
        *(undefined4 *)(iVar6 + 0xc) = 0;
        *(undefined4 *)(iVar6 + 0x10) = 0;
        *(undefined4 *)(iVar6 + 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x18) = 0;
        *(undefined4 *)(iVar6 + 0x1c) = 0;
        *(undefined4 *)(iVar6 + 0x20) = 0;
        param_2 = (int *)iVar6;
        iVar4 = FUN_00831a8a(&DAT_00914a7c,puVar1,iVar6);
        if (iVar4 < 0) {
          FUN_0083198b(&PTR_s_FX_Camera_008f0320);
          FUN_00831a8a(&DAT_00914a7c,puVar1,iVar6);
          *(int *)(param_1 + 0x24) = iVar6;
          ExceptionList = local_c;
          return;
        }
      }
      *(int *)(param_1 + 0x24) = iVar6;
      ExceptionList = local_c;
      return;
    }
    break;
  case 3:
    piVar5 = *(int **)(param_1 + 0x2c);
    if (piVar5 != (int *)0x0) {
      if (*piVar5 != 0) {
        FUN_00831782();
      }
      FUN_00831682(piVar5);
    }
    piVar5 = (int *)FUN_00831667(0x1c);
    local_4 = 2;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar2 = piVar5 + 1;
      *piVar2 = 2;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      piVar5[5] = 0;
      piVar5[6] = 0;
      param_2 = piVar5;
      iVar6 = FUN_00831a8a(&DAT_0091481c,piVar2,piVar5);
      if (iVar6 < 0) {
        FUN_0083198b(&PTR_s_FX_UVES_008f0328);
        FUN_00831a8a(&DAT_0091481c,piVar2,piVar5);
      }
    }
    *(int **)(param_1 + 0x2c) = piVar5;
    param_2 = (int *)0x0;
    if (*piVar5 == 0) {
      ExceptionList = local_c;
      return;
    }
    piVar5 = (int *)&param_2;
    goto LAB_004ec086;
  case 4:
    piVar5 = *(int **)(param_1 + 0x30);
    if (piVar5 != (int *)0x0) {
      if (*piVar5 != 0) {
        FUN_00831782();
      }
      FUN_00831682(piVar5);
    }
    piVar5 = (int *)FUN_00831667(0x1c);
    local_4 = 3;
    param_2 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar2 = piVar5 + 1;
      *piVar2 = 1;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      piVar5[5] = 0;
      piVar5[6] = 0;
      iVar6 = FUN_00831a8a(&DAT_0091481c,piVar2,piVar5);
      if (iVar6 < 0) {
        FUN_0083198b(&PTR_s_FX_UVES_008f0328);
        FUN_00831a8a(&DAT_0091481c,piVar2,piVar5);
      }
    }
    *(int **)(param_1 + 0x30) = piVar5;
    local_10 = 0;
    if (*piVar5 == 0) {
      ExceptionList = local_c;
      return;
    }
    piVar5 = &local_10;
LAB_004ec086:
    local_4 = 0xffffffff;
    FUN_008311aa(piVar5);
  }
  ExceptionList = local_c;
  return;
}

