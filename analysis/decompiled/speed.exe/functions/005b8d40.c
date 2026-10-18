/* speed.exe 005b8d40 FUN_005b8d40; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 * calls 005b6f20 FUN_005b6f20
 * calls 00652ad0 _malloc
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

undefined4 __fastcall FUN_005b8d40(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int local_28;
  uint local_24;
  undefined **local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873fe3;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar3 = *(int *)(iVar2 + 8);
  piVar4 = (int *)(iVar2 + 8);
  while ((iVar3 != 0x67726154 && (piVar4 != (int *)(*(int *)(iVar2 + 4) + 8 + iVar2)))) {
    piVar4 = (int *)((int)piVar4 + piVar4[1] + 8);
    iVar3 = *piVar4;
  }
  if (*piVar4 == 0x67726154) {
    piVar8 = piVar4 + 2;
    piVar4 = (int *)(piVar4[1] + (int)piVar8);
    if (piVar8 < piVar4) {
      local_28 = 0;
      ExceptionList = &local_c;
      do {
        if ((short)*piVar8 == 0x6354) {
          iVar2 = piVar8[1];
          *(int *)(*param_1 + 0x6c) = iVar2;
          piVar5 = _malloc(iVar2 * 0x10 + 4);
          piVar7 = (int *)0x0;
          local_4 = 0;
          if (piVar5 != (int *)0x0) {
            piVar7 = piVar5 + 1;
            *piVar5 = iVar2;
            _eh_vector_constructor_iterator_
                      (piVar7,0x10,iVar2,(_func_void_void_ptr *)&LAB_005ad800,
                       (_func_void_void_ptr *)&LAB_005ad810);
          }
          local_4 = 0xffffffff;
          *(int **)(*param_1 + 0x70) = piVar7;
        }
        else if ((short)*piVar8 == 0x744d) {
          uVar1 = *(ushort *)((int)piVar8 + 2);
          *(int *)(*(int *)(*param_1 + 0x70) + local_28) = piVar8[1];
          uVar6 = (uVar1 >> 2) - 1;
          FUN_005b6f20(uVar6);
          local_24 = 0;
          if (uVar6 != 0) {
            do {
              local_14 = piVar8[local_24 + 2];
              local_18 = &PTR_FUN_008a2cb0;
              local_4 = 1;
              local_10 = 0;
              FUN_005b1560(&local_18);
              iVar2 = *(int *)(*param_1 + 0x70);
              iVar3 = *(int *)(iVar2 + 4 + local_28);
              iVar9 = iVar2 + local_28;
              local_4 = 0xffffffff;
              local_18 = &PTR_LAB_0089b064;
              if (*(int *)(iVar2 + 8 + local_28) == iVar3) {
                FUN_005b6f20(iVar3 + 1);
              }
              *(undefined4 *)(*(int *)(iVar9 + 0xc) + *(int *)(iVar9 + 8) * 4) = local_10;
              *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
              local_24 = local_24 + 1;
            } while (local_24 < uVar6);
          }
          local_28 = local_28 + 0x10;
        }
        piVar8 = (int *)((int)piVar8 + *(ushort *)((int)piVar8 + 2) + 4);
      } while (piVar8 < piVar4);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)piVar4 >> 8),1);
}

