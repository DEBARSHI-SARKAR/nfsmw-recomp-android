/* speed.exe 0080399d FUN_0080399d; analysis pseudocode, not buildable source.
 * calls 008026aa FUN_008026aa
 */

void FUN_0080399d(int *param_1,int param_2,int param_3,undefined1 *param_4)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  code *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  piVar1 = param_1;
  local_10 = 0;
  if (*param_1 < 2) {
    local_24 = FUN_00801d44;
    pcVar2 = DAT_009c6aa4;
  }
  else {
    local_24 = FUN_008026aa;
    pcVar2 = DAT_009c6ab0;
  }
  uVar8 = param_1[0x24];
  if (param_4 == (undefined1 *)0x0) {
    iVar7 = param_1[0x26];
    uVar3 = param_1[0x25];
    local_c = 0;
    iVar4 = param_1[0x1e];
  }
  else {
    iVar7 = param_1[0x27];
    uVar8 = uVar8 >> 1;
    if (param_4 == (undefined1 *)0x1) {
      local_c = param_1[0x21];
      iVar4 = param_1[0x1f];
      uVar3 = (uint)param_1[0x25] >> 1;
    }
    else {
      uVar3 = (uint)param_1[0x25] >> 1;
      local_c = param_1[0x22] + param_1[0x21];
      iVar4 = param_1[0x20];
    }
  }
  local_8 = param_2 + iVar4;
  puVar5 = (undefined1 *)(iVar4 + param_3);
  uVar6 = DAT_009c67e4;
  if (((*param_1 < 2) || (uVar6 = DAT_009c67f0, param_4 == (undefined1 *)0x0)) ||
     (uVar6 = DAT_009c67e8, param_4 < 3)) {
    local_10 = uVar6;
  }
  local_1c = 4;
  local_14 = puVar5;
  do {
    if (iVar7 != 0) {
      param_4 = local_14;
      local_18 = iVar7;
      do {
        local_18 = local_18 + -1;
        *param_4 = param_4[local_8 - (int)puVar5];
        param_4 = param_4 + 1;
      } while (local_18 != 0);
    }
    local_14 = local_14 + iVar7;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  param_1 = (int *)puVar5;
  if (1 < uVar3) {
    param_4 = (undefined1 *)(uVar3 - 1);
    do {
      param_1 = (int *)((int)param_1 + iVar7 * 8);
      local_8 = local_8 + iVar7 * 8;
      (*pcVar2)(piVar1,local_8,param_1,iVar7,uVar8,local_c,local_10);
      local_c = local_c + uVar8;
      param_4 = (undefined1 *)((int)param_4 + -1);
    } while (param_4 != (undefined1 *)0x0);
  }
  param_4 = (undefined1 *)((int)param_1 + iVar7 * 4);
  local_1c = 4;
  do {
    if (iVar7 != 0) {
      puVar5 = param_4;
      local_20 = iVar7;
      do {
        *puVar5 = puVar5[local_8 - (int)param_1];
        puVar5 = puVar5 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    param_4 = param_4 + iVar7;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  (*local_24)(piVar1,local_8,param_1,iVar7,uVar8,local_c,local_10);
  return;
}

