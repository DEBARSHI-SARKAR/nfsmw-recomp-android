/* speed.exe 00634490 FUN_00634490; analysis pseudocode, not buildable source.
 * calls 006285f0 FUN_006285f0
 */

undefined4 FUN_00634490(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  switch(*(int *)(param_1 + 0xc) + -1) {
  case 0:
    local_c = 2;
    goto LAB_006348b5;
  case 2:
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
    iVar4 = iVar3 * 0xc;
    uVar1 = *(uint *)(iVar4 + iVar2);
    if ((uVar1 < 0x201) && (uVar1 != (&DAT_0091f1e8)[iVar3 * 3])) {
      local_4 = 0;
      local_c = 4;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    if ((0xfdfe < uVar1) && (uVar1 != (&DAT_0091f1e8)[iVar3 * 3])) {
      local_4 = 0;
      local_c = 5;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    uVar1 = *(uint *)(iVar4 + 4 + iVar2);
    if ((uVar1 < 0x201) && (uVar1 != (&DAT_0091f1ec)[iVar3 * 3])) {
      local_4 = 1;
      local_c = 4;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    if ((0xfdfe < uVar1) && (uVar1 != (&DAT_0091f1ec)[iVar3 * 3])) {
      local_4 = 1;
      local_c = 5;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    uVar1 = *(uint *)(iVar4 + 8 + iVar2);
    if ((uVar1 < 0x201) && (uVar1 != *(uint *)(&DAT_0091f1f0 + iVar4))) {
      local_4 = 2;
      local_c = 4;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    if ((0xfdfe < uVar1) && (uVar1 != *(uint *)(&DAT_0091f1f0 + iVar4))) {
      local_4 = 2;
      local_c = 5;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    break;
  case 3:
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 4))();
    uVar1 = *(uint *)(iVar3 + 0x20c);
    if ((uVar1 < 0x201) && (uVar1 != DAT_0091f3f4)) {
      local_4 = 0;
      local_c = 6;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    if ((0xfdfe < uVar1) && (uVar1 != DAT_0091f3f4)) {
      local_4 = 0;
      local_c = 7;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    uVar1 = *(uint *)(iVar3 + 0x210);
    if ((uVar1 < 0x201) && (uVar1 != DAT_0091f3f8)) {
      local_4 = 1;
      local_c = 6;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    if ((0xfdfe < uVar1) && (uVar1 != DAT_0091f3f8)) {
      local_4 = 1;
      local_c = 7;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    uVar1 = *(uint *)(iVar3 + 0x214);
    if ((uVar1 < 0x201) && (uVar1 != DAT_0091f3fc)) {
      local_4 = 2;
      local_c = 6;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    if ((0xfdfe < uVar1) && (uVar1 != DAT_0091f3fc)) {
      local_4 = 2;
      local_c = 7;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
    break;
  case 4:
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
    uVar1 = *(uint *)(iVar2 + 0x218 + iVar3 * 4);
    if (uVar1 < 0x201) {
      local_c = 8;
    }
    else {
      if (uVar1 < 0xfdff) {
        return 0;
      }
      local_c = 9;
    }
LAB_006348b5:
    local_4 = iVar3;
    FUN_006285f0(param_1,&local_c);
    return 1;
  case 5:
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
    uVar1 = *(uint *)(iVar2 + 0x220 + iVar3 * 4);
    if (uVar1 < 0x4651) {
      if (uVar1 == 18000) {
        local_4 = 2;
        local_c = 3;
        FUN_006285f0(param_1,&local_c);
        return 1;
      }
      if (uVar1 == 0) {
        local_4 = 0;
        local_c = 3;
        FUN_006285f0(param_1,&local_c);
        return 1;
      }
      if (uVar1 == 9000) {
        local_4 = 1;
        local_c = 3;
        FUN_006285f0(param_1,&local_c);
        return 1;
      }
    }
    else if (uVar1 == 27000) {
      local_c = 3;
      local_4 = 3;
      FUN_006285f0(param_1,&local_c);
      return 1;
    }
  }
  return 0;
}

