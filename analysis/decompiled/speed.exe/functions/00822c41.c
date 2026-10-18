/* speed.exe 00822c41 FUN_00822c41; analysis pseudocode, not buildable source.
 * calls 00824500 FUN_00824500
 * calls 008258d1 FUN_008258d1
 * calls 0081e9e7 FUN_0081e9e7
 */

void FUN_00822c41(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10,
                 undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined1 param_14)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar3 = (undefined1 *)(param_1 * 0x5c + DAT_009c2520);
  iVar4 = 0;
  *(undefined4 *)(puVar3 + 0x40) = 0;
  *(undefined4 *)(puVar3 + 0x48) = 0;
  *(undefined4 *)(puVar3 + 0x50) = 0;
  *(undefined4 *)(puVar3 + 0x54) = 0;
  *(undefined4 *)(puVar3 + 0x58) = 0;
  *(undefined4 *)(puVar3 + 0x4c) = 0;
  local_18 = 1;
  local_8 = 0;
  iVar1 = 1;
  if (param_2 != 8) {
    if (param_2 == 9) {
      local_18 = 0;
      iVar1 = 0;
    }
    else if (param_2 == 10) {
      iVar1 = 2;
    }
    else if (param_2 == 4) {
      iVar1 = 3;
    }
    else if (param_2 == 0x16) {
      iVar1 = 4;
    }
    else if (param_2 == 0x10) {
      iVar1 = 5;
    }
    else {
      iVar1 = -1;
      if (param_2 == 0x17) {
        iVar1 = 6;
      }
    }
  }
  if (param_3 == 1) {
    if (0 < param_10) {
      iVar4 = 1;
    }
  }
  else if (param_3 == 0) {
    iVar4 = 2;
  }
  iVar4 = (iVar4 + iVar1 * 3) * 4;
  if (*(int *)(&DAT_009c2328 + iVar4) != 0) {
    uVar2 = FUN_0081e9e7(*(undefined4 *)(&DAT_009c2388 + iVar4));
    *(undefined4 *)(puVar3 + 0x48) = uVar2;
    local_30 = param_4;
    local_2c = param_5;
    local_28 = param_7;
    local_c = param_13;
    local_24 = param_8;
    local_20 = param_9;
    local_1c = param_10;
    local_14 = param_1;
    local_10 = (uint)DAT_009c218f;
    *(undefined4 *)(*(int *)(puVar3 + 0x48) + 4) = 0;
    *(undefined2 *)(*(int *)(puVar3 + 0x48) + 0x18) = 0xf0;
    *(undefined1 *)(*(int *)(puVar3 + 0x48) + 0x1a) = param_14;
    (**(code **)(&DAT_009c2328 + iVar4))(*(undefined4 *)(puVar3 + 0x48),&local_30);
    *(undefined4 *)(puVar3 + 0x44) = local_8;
    FUN_00824500(puVar3 + 0x40,*(undefined4 *)(puVar3 + 0x48));
  }
  if (param_6 != 0) {
    if (param_3 != 0) {
      param_1 = -1;
    }
    iVar4 = FUN_0081e9e7(0x1834);
    *(int *)(puVar3 + 0x4c) = iVar4;
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined2 *)(*(int *)(puVar3 + 0x4c) + 0x18) = 200;
    *(undefined1 *)(*(int *)(puVar3 + 0x4c) + 0x1a) = param_14;
    FUN_008258d1(*(undefined4 *)(puVar3 + 0x4c),param_6,param_1);
    FUN_00824500(puVar3 + 0x40,*(undefined4 *)(puVar3 + 0x4c));
  }
  *puVar3 = 1;
  return;
}

