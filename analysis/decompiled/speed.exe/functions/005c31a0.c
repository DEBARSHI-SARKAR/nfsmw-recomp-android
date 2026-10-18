/* speed.exe 005c31a0 FUN_005c31a0; analysis pseudocode, not buildable source.
 * calls 005bb370 FUN_005bb370
 * calls 005b7c30 FUN_005b7c30
 * calls 005b12f0 FUN_005b12f0
 * calls 005bb260 FUN_005bb260
 * calls 005b2b60 FUN_005b2b60
 * calls 005bcb70 FUN_005bcb70
 * calls 005c1d00 FUN_005c1d00
 * calls 005c2dc0 FUN_005c2dc0
 * calls 005c1c40 FUN_005c1c40
 */

undefined4 * __thiscall FUN_005c31a0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_008745e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0xabadcafe;
  param_1[2] = 0xabadcafe;
  *param_1 = &PTR_FUN_008a2df0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = &PTR_LAB_008a2c18;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = &PTR_LAB_008a2c18;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  iVar4 = DAT_008f56c4 + 1;
  param_1[3] = DAT_008f56c4;
  DAT_008f56c4 = iVar4;
  uVar6 = *(uint *)(param_2 + 0x30);
  local_4 = 2;
  uStack_3 = 0;
  FUN_005b2b60(param_1[0xb]);
  param_1[0xb] = 0;
  puVar2 = (undefined4 *)FUN_005bcb70(uVar6);
  param_1[0xc] = uVar6;
  param_1[0xb] = puVar2;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  FUN_005b12f0(*(undefined4 *)(param_2 + 0x14));
  for (iVar4 = *(int *)(param_2 + 0x3c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
    puVar2 = (undefined4 *)FUN_005c1d00();
    puVar2[1] = 0xabadcafe;
    puVar2[2] = 0xabadcafe;
    *puVar2 = &PTR_FUN_008a2c28;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    local_14 = *(int *)(iVar4 + 0x10);
    FUN_005bb370(local_14);
    puVar2[3] = *(undefined4 *)(iVar4 + 0xc);
    if (local_14 != 0) {
      iVar7 = 0;
      do {
        FUN_005bb260(*(int *)(iVar4 + 0x14) + iVar7);
        iVar7 = iVar7 + 0xc;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    iVar7 = param_1[0x10];
    if (iVar7 == 0) {
      iVar3 = param_1[0xf];
      puVar2[1] = iVar3;
      if (iVar3 != 0) {
        *(undefined4 **)(iVar3 + 8) = puVar2;
      }
      puVar2[2] = 0;
      param_1[0xf] = puVar2;
    }
    else {
      iVar3 = *(int *)(iVar7 + 4);
      puVar2[1] = iVar3;
      if (iVar3 != 0) {
        *(undefined4 **)(iVar3 + 8) = puVar2;
      }
      puVar2[2] = iVar7;
      *(undefined4 **)(iVar7 + 4) = puVar2;
    }
    if (param_1[0x10] == iVar7) {
      param_1[0x10] = puVar2;
    }
    param_1[0xe] = param_1[0xe] + 1;
  }
  for (iVar4 = *(int *)(param_2 + 0x4c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
    iVar7 = FUN_005c1c40();
    *(undefined4 *)(iVar7 + 0x2c) = 0;
    *(undefined4 *)(iVar7 + 0x30) = 0;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    *(undefined4 *)(iVar7 + 0x14) = 0;
    *(undefined4 *)(iVar7 + 0x18) = 0;
    *(undefined4 *)(iVar7 + 0x1c) = 0;
    *(undefined4 *)(iVar7 + 0x20) = 0;
    local_4 = 3;
    iVar3 = FUN_005c2dc0(iVar4,param_3);
    iVar7 = param_1[0x14];
    local_4 = 2;
    if (iVar3 != 0) {
      if (iVar7 == 0) {
        iVar1 = param_1[0x13];
        *(int *)(iVar3 + 4) = iVar1;
        if (iVar1 != 0) {
          *(int *)(iVar1 + 8) = iVar3;
        }
        *(undefined4 *)(iVar3 + 8) = 0;
        param_1[0x13] = iVar3;
      }
      else {
        iVar1 = *(int *)(iVar7 + 4);
        *(int *)(iVar3 + 4) = iVar1;
        if (iVar1 != 0) {
          *(int *)(iVar1 + 8) = iVar3;
        }
        *(int *)(iVar3 + 8) = iVar7;
        *(int *)(iVar7 + 4) = iVar3;
      }
      if (param_1[0x14] == iVar7) {
        param_1[0x14] = iVar3;
      }
      param_1[0x12] = param_1[0x12] + 1;
    }
  }
  iVar4 = param_1[0x13];
  if (iVar4 != 0) {
    do {
      if (*(int *)(iVar4 + 0x30) == *(int *)(*(int *)(param_2 + 0x54) + 0x30)) break;
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != 0);
  }
  param_1[0x15] = iVar4;
  if (iVar4 != 0) {
    FUN_005b7c30();
  }
  iVar4 = *(int *)(param_2 + 0x4c);
  iVar7 = param_1[0x13];
  do {
    if (iVar4 == 0) {
      ExceptionList = local_c;
      return param_1;
    }
    if (*(int *)(iVar4 + 0x18) != 0) {
      iVar3 = param_1[0x13];
      if (iVar3 != 0) {
        do {
          if (*(int *)(iVar3 + 0x30) == *(int *)(*(int *)(iVar4 + 0x18) + 0x30)) break;
          iVar3 = *(int *)(iVar3 + 4);
        } while (iVar3 != 0);
      }
      *(int *)(iVar7 + 0x18) = iVar3;
    }
    iVar4 = *(int *)(iVar4 + 4);
    iVar7 = *(int *)(iVar7 + 4);
  } while( true );
}

