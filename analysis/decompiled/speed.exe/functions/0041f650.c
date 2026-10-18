/* speed.exe 0041f650 FUN_0041f650; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 0041eed0 FUN_0041eed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0041f650(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_7c;
  int local_78;
  int local_74;
  float local_70;
  int iStack_6c;
  float local_60 [12];
  undefined1 local_30 [36];
  int *piStack_c;
  
  local_78 = *(int *)(param_3 + 0xc);
  local_7c = 0.0;
  if (local_78 == local_78 + *(int *)(param_3 + 0x14) * 4) {
    return 0;
  }
  iVar7 = 0;
  local_74 = param_1;
  do {
    iVar6 = 0;
    while( true ) {
      local_70 = (_DAT_008eb1a8 + local_7c) * _DAT_00890da8;
      local_7c = local_7c + _DAT_00890bf8;
      cVar2 = FUN_0041eed0(param_2,local_30 + iVar7,(int)local_60 + iVar7,local_70);
      if (cVar2 != '\0') break;
      iVar6 = iVar6 + 1;
      if (7 < iVar6) {
        return 0;
      }
    }
    local_78 = local_78 + 4;
    iVar7 = iVar7 + 0x10;
    if (local_78 == *(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x14) * 4) {
      puVar8 = *(undefined4 **)(param_3 + 0xc);
      if (puVar8 != puVar8 + *(int *)(param_3 + 0x14)) {
        local_7c = 0.0;
        do {
          piVar1 = (int *)*puVar8;
          (**(code **)(*piVar1 + 0x80))();
          piVar3 = (int *)(**(code **)(*piVar1 + 0xac))();
          *(float *)((int)local_60 + (int)local_7c) =
               *(float *)((int)local_60 + (int)local_7c) * _DAT_00890da8;
          *(float *)((int)local_60 + (int)local_7c + 4) =
               *(float *)((int)local_60 + (int)local_7c + 4) * _DAT_00890da8;
          *(float *)((int)local_60 + (int)local_7c + 8) =
               *(float *)((int)local_60 + (int)local_7c + 8) * _DAT_00890da8;
          *(float *)((int)local_60 + (int)local_7c + 0xc) =
               *(float *)((int)local_60 + (int)local_7c + 0xc) * _DAT_00890da8;
          (**(code **)(*piVar3 + 0x5c))
                    (local_30 + (int)local_7c,(float *)((int)local_60 + (int)local_7c));
          piVar4 = (int *)FUN_005d59f0(&LAB_004038e0);
          piVar5 = (int *)(**(code **)(*piVar4 + 0x44))();
          local_74 = *piVar5;
          local_70 = (float)piVar5[1];
          iStack_6c = piVar5[2];
          (**(code **)(*piVar3 + 0x88))();
          (**(code **)(*piVar4 + 0x40))(&local_74);
          (**(code **)(*piVar4 + 0x30))(1);
          (**(code **)(*piStack_c + 0x78))(piVar1);
          *(int *)(local_74 + 0x94) = *(int *)(local_74 + 0x94) + 1;
          local_7c = (float)((int)local_7c + 0x10);
          puVar8 = puVar8 + 1;
        } while (puVar8 != (undefined4 *)(*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x14) * 4));
      }
      *(undefined4 *)(param_3 + 0x78) = 2;
      *(undefined4 *)(param_3 + 0x74) = *(undefined4 *)(*(int *)(param_3 + 4) + 8);
      return 1;
    }
  } while( true );
}

