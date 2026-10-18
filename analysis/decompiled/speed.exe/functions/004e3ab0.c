/* speed.exe 004e3ab0 FUN_004e3ab0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004e3ab0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint local_c;
  int local_8;
  int local_4;
  
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0xc) + local_8 * 8);
      local_c = (uint)*(byte *)(*(int *)*piVar1 + 2);
      iVar6 = 0;
      piVar8 = (int *)(*(int *)*piVar1 + 8);
      local_4 = 0;
      if (local_c != 0) {
        do {
          uVar4 = *piVar8 >> 0x10 & 0xff;
          piVar8 = piVar8 + 1;
          if (uVar4 == *(uint *)(param_1 + 0x38)) {
            iVar6 = iVar6 + 1;
          }
          else {
            iVar6 = iVar6 + *(int *)(*(int *)(param_1 + 4) + 4 + uVar4 * 4);
          }
          local_c = local_c - 1;
          local_4 = iVar6;
        } while (local_c != 0);
      }
      iVar6 = *(int *)(param_1 + 4);
      iVar3 = *(int *)(iVar6 + 0x1d0);
      *(int *)(iVar6 + 0x1d0) = iVar3 + local_4;
      *(int *)piVar1[1] = *(int *)(iVar6 + 0x1b4) + iVar3 * 4;
      *(int *)(*piVar1 + 8) = local_4;
      puVar7 = *(uint **)piVar1[1];
      puVar5 = (uint *)(*(int *)*piVar1 + 8);
      local_c = 0;
      if (0 < local_4) {
        do {
          uVar4 = *puVar5;
          uVar2 = (int)uVar4 >> 0x10 & 0xff;
          puVar5 = puVar5 + 1;
          uVar4 = uVar4 & 0xffff07ff;
          if (uVar2 == *(uint *)(param_1 + 0x38)) {
            *puVar7 = *(int *)(param_1 + 0x40) << 0xb | uVar4;
            puVar7 = puVar7 + 1;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 4) + 4 + uVar2 * 4);
            local_c = local_c + -1;
            iVar3 = 0;
            if (0 < iVar6) {
              local_c = local_c + iVar6;
              do {
                *puVar7 = iVar3 << 0xb | uVar4;
                puVar7 = puVar7 + 1;
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar6);
            }
          }
          local_c = local_c + 1;
        } while ((int)local_c < local_4);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x54));
  }
  return;
}

