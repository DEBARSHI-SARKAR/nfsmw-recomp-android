/* speed.exe 00826e6d FUN_00826e6d; analysis pseudocode, not buildable source.
 * calls 00828b03 FUN_00828b03
 * calls 00828c2a FUN_00828c2a
 * calls 00828b2f FUN_00828b2f
 * calls 00828c53 FUN_00828c53
 */

int FUN_00826e6d(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_88 [112];
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puVar1 = param_1;
  local_8 = 0;
  iVar2 = param_2;
  if (1 < *(int *)(param_1 + 0x30)) {
    while (0 < iVar2) {
      iVar4 = FUN_00828b2f(&param_4,iVar2);
      local_8 = local_8 + iVar4;
      *(int *)(puVar1 + 0x20) = *(int *)(puVar1 + 0x20) + iVar4;
      iVar2 = iVar2 - iVar4;
      param_4 = param_4 + iVar4 * 4;
      if (iVar4 < iVar2) {
        iVar4 = *(int *)(puVar1 + 0x28) - *(int *)(puVar1 + 0x24);
        *(int *)(puVar1 + 0x20) = *(int *)(puVar1 + 0x24);
        FUN_00828b03(*(undefined4 *)(puVar1 + 0x2c),iVar4 * 4 + 4,iVar4 + 1);
      }
    }
    return local_8;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_00828b03(*(undefined4 *)(param_1 + 0x34),(*(int *)(param_1 + 0x44) / 0x1c) * 0x70,
                 (*(int *)(param_1 + 0x44) / 0x1c) * 0x1c);
    *(undefined4 *)(puVar1 + 0x40) = 1;
  }
  do {
    while( true ) {
      if (param_2 == 0) {
        return local_8;
      }
      iVar2 = FUN_00828b2f(&param_4,param_2);
      local_8 = local_8 + iVar2;
      *(int *)(puVar1 + 0x20) = *(int *)(puVar1 + 0x20) + iVar2;
      param_4 = param_4 + iVar2 * 4;
      if (iVar2 < param_2) break;
LAB_00826f6e:
      param_2 = param_2 - iVar2;
    }
    param_2 = param_2 - iVar2;
    iVar4 = *(int *)(puVar1 + 0x44);
    iVar5 = iVar4 % 0x1c;
    iVar2 = (*(int *)(puVar1 + 0x48) - iVar4) + 1 + iVar5;
    *(int *)(puVar1 + 0x20) = iVar4 - iVar5;
    FUN_00828b03(((iVar4 - iVar5) / 0x1c) * 0xf + *(int *)(puVar1 + 0x34),iVar2 * 4,iVar2);
    if (*(int *)(puVar1 + 0x3c) == 0) {
      puVar3 = (undefined4 *)FUN_00828c2a(local_18);
      local_10 = *puVar3;
      local_c = puVar3[1];
      *(undefined4 *)(puVar1 + 0x4c) = local_10;
      *(undefined4 *)(puVar1 + 0x50) = local_c;
      iVar2 = FUN_00828b2f(&param_4,param_2);
      local_8 = local_8 + iVar2;
      *(int *)(puVar1 + 0x20) = *(int *)(puVar1 + 0x20) + iVar2;
      param_4 = param_4 + iVar2 * 4;
      *(undefined4 *)(puVar1 + 0x3c) = 1;
      goto LAB_00826f6e;
    }
    local_10 = *(undefined4 *)(puVar1 + 0x4c);
    local_c = *(undefined4 *)(puVar1 + 0x50);
    FUN_00828c53(&local_10);
    param_1 = local_88;
    iVar2 = FUN_00828b2f(&param_1,iVar5);
    *(int *)(puVar1 + 0x20) = *(int *)(puVar1 + 0x20) + iVar2;
  } while( true );
}

