/* speed.exe 005abe00 FUN_005abe00; analysis pseudocode, not buildable source.
 * calls 005abbc0 FUN_005abbc0
 * calls 00577770 FUN_00577770
 * calls 0059c410 FUN_0059c410
 * calls 00652ad0 _malloc
 * calls 005aae30 FUN_005aae30
 * calls 005777a0 FUN_005777a0
 * calls 005aaef0 FUN_005aaef0
 * calls 005abd70 FUN_005abd70
 * calls 005abc50 FUN_005abc50
 * calls 00577790 FUN_00577790
 * calls 00579080 FUN_00579080
 * calls 005942c0 FUN_005942c0
 * calls 005790a0 FUN_005790a0
 * calls 005abce0 FUN_005abce0
 */

uint __thiscall FUN_005abe00(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  void *local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int *local_10;
  int local_c;
  undefined1 local_8 [4];
  
  local_c = *param_2;
  iVar3 = local_c + 8;
  puVar4 = local_8;
  FUN_005abd70(puVar4,iVar3,param_1);
  FUN_0059c410(puVar4,iVar3);
  puVar4 = local_2c;
  FUN_005abd70(puVar4);
  uVar1 = FUN_005942c0(puVar4);
  uVar2 = FUN_00577790(uVar1);
  if ((uVar2 & 0xff) != 0) {
    local_10 = (int *)param_2[1];
    local_30 = _malloc(*(int *)(local_c + 0x28) << 2);
    *local_10 = (int)local_30;
    *(undefined4 *)(*local_10 + *(int *)(local_c + 0x2c) * 4) = *(undefined4 *)(local_c + 0x1c);
    *(int *)(local_c + 0x24) = *local_10 + *(int *)(local_c + 0x2c) * 4;
    FUN_005777a0(local_c + 8,&local_c);
    FUN_00579080(local_20);
    puVar4 = local_38;
    puVar5 = local_40;
    FUN_005abbc0(puVar5,puVar4);
    FUN_005aae30(puVar5,puVar4);
    FUN_00577770(local_c + 0x10,local_c + 8);
    FUN_005790a0(local_28);
    puVar4 = local_48;
    puVar5 = local_50;
    FUN_005abce0(puVar5,puVar4);
    FUN_005aaef0(puVar5,puVar4);
    FUN_00577770(local_c + 0x14,local_c + 8);
    FUN_005790a0(local_18);
    puVar4 = local_58;
    puVar5 = local_60;
    FUN_005abc50(puVar5,puVar4);
    uVar2 = FUN_005aaef0(puVar5,puVar4);
  }
  return uVar2;
}

