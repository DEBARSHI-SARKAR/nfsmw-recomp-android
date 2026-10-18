/* speed.exe 0080647b FUN_0080647b; analysis pseudocode, not buildable source.
 */

void FUN_0080647b(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_20;
  int local_1c;
  int local_18;
  uint local_10;
  uint local_c;
  int local_8;
  
  piVar2 = param_1;
  uVar1 = param_1[0x24];
  local_10 = param_1[0x25];
  local_8 = 0;
  local_c = 0;
  if (*param_1 < 2) {
    uVar3 = *(undefined4 *)(&DAT_008c4a98 + param_1[3] * 4);
  }
  else {
    uVar3 = *(undefined4 *)(DAT_009c67ec + param_1[3] * 4);
  }
  uVar3 = (*DAT_009c6a80)(param_1,uVar3);
  local_18 = 0;
  param_1 = (int *)uVar1;
  do {
    if (local_18 == 0) {
      param_1 = (int *)piVar2[0x24];
      local_10 = piVar2[0x25];
      local_c = piVar2[0x26];
      local_8 = piVar2[0x1e];
    }
    else if (local_18 == 1) {
      param_1 = (int *)((uint)piVar2[0x24] >> 1);
      local_10 = (uint)piVar2[0x25] >> 1;
      local_c = piVar2[0x27];
      local_8 = piVar2[0x1f];
    }
    else if (local_18 == 2) {
      param_1 = (int *)((uint)piVar2[0x24] >> 1);
      local_10 = (uint)piVar2[0x25] >> 1;
      local_c = piVar2[0x27];
      local_8 = piVar2[0x20];
    }
    puVar4 = (undefined4 *)(param_2 + local_8);
    puVar7 = (undefined4 *)(param_3 + local_8);
    for (iVar5 = (local_c & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    if (1 < (int)param_1) {
      puVar6 = (undefined1 *)(param_3 + local_8 + 6);
      iVar5 = (int)param_1 - 1;
      do {
        (*DAT_009c6aa0)(piVar2,puVar6,local_c,uVar3);
        puVar6 = puVar6 + 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_8 = local_8 + local_c * 8;
    if (1 < (int)local_10) {
      local_20 = local_10 - 1;
      do {
        puVar4 = (undefined4 *)(param_3 + local_8);
        puVar7 = (undefined4 *)(param_2 + local_8);
        puVar8 = puVar4;
        for (iVar5 = (local_c & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        (*DAT_009c6ae0)(piVar2,puVar4,local_c,uVar3);
        if (1 < (int)param_1) {
          local_1c = (int)param_1 - 1;
          do {
            (*DAT_009c6aa0)(piVar2,(undefined1 *)((int)puVar4 + 6),local_c,uVar3);
            (*DAT_009c6ae0)(piVar2,puVar4 + 2,local_c,uVar3);
            local_1c = local_1c + -1;
            puVar4 = puVar4 + 2;
          } while (local_1c != 0);
        }
        local_8 = local_8 + local_c * 8;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    local_18 = local_18 + 1;
  } while (local_18 < 3);
  return;
}

