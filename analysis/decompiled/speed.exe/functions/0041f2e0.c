/* speed.exe 0041f2e0 FUN_0041f2e0; analysis pseudocode, not buildable source.
 * calls 0041eed0 FUN_0041eed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0041f2e0(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float local_b0;
  int local_a8;
  float local_a0 [20];
  undefined1 local_50 [76];
  int *piStack_4;
  
  local_a8 = param_3[3];
  local_b0 = 60.0;
  if (local_a8 == local_a8 + param_3[5] * 4) {
    return 0;
  }
  iVar5 = 0;
  do {
    iVar7 = 0;
    while( true ) {
      fVar2 = _DAT_008eb1ac - local_b0;
      local_b0 = local_b0 + _DAT_00890bf8;
      cVar3 = FUN_0041eed0(param_2,local_50 + iVar5,(int)local_a0 + iVar5,fVar2);
      if (cVar3 != '\0') break;
      iVar7 = iVar7 + 1;
      if (7 < iVar7) {
        return 0;
      }
    }
    local_a8 = local_a8 + 4;
    iVar5 = iVar5 + 0x10;
    if (local_a8 == param_3[3] + param_3[5] * 4) {
      puVar6 = (undefined4 *)param_3[3];
      if (puVar6 != puVar6 + param_3[5]) {
        iVar5 = 0;
        do {
          piVar1 = (int *)*puVar6;
          (**(code **)(*piVar1 + 0x80))();
          piVar4 = (int *)(**(code **)(*piVar1 + 0xac))();
          *(float *)((int)local_a0 + iVar5) = *(float *)((int)local_a0 + iVar5) * _DAT_00890da8;
          *(float *)((int)local_a0 + iVar5 + 4) =
               *(float *)((int)local_a0 + iVar5 + 4) * _DAT_00890da8;
          *(float *)((int)local_a0 + iVar5 + 8) =
               *(float *)((int)local_a0 + iVar5 + 8) * _DAT_00890da8;
          *(float *)((int)local_a0 + iVar5 + 0xc) =
               *(float *)((int)local_a0 + iVar5 + 0xc) * _DAT_00890da8;
          (**(code **)(*piVar4 + 0x5c))(local_50 + iVar5,(float *)((int)local_a0 + iVar5));
          (**(code **)(*piVar4 + 0x88))();
          (**(code **)(*piStack_4 + 0x78))(piVar1);
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + 0x10;
        } while (puVar6 != (undefined4 *)(param_3[3] + param_3[5] * 4));
      }
      param_3[0x1e] = 2;
      param_3[0x1d] = *(int *)(*param_3 + 8);
      return 1;
    }
  } while( true );
}

