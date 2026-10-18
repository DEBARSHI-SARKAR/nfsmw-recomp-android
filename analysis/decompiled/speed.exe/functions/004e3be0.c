/* speed.exe 004e3be0 FUN_004e3be0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004e3be0(int param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  uint *local_10;
  int local_c;
  
  local_10 = (uint *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + *(int *)(param_1 + 0x1c));
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + local_c * 8);
      piVar3 = (int *)*piVar1;
      bVar2 = *(byte *)(*piVar3 + 2);
      piVar3[3] = (int)local_10;
      uVar4 = *local_10;
      uVar8 = 0;
      iVar10 = 0;
      puVar11 = (uint *)(*piVar3 + 0xc);
      for (uVar9 = (uint)bVar2; uVar9 != 0; uVar9 = uVar9 - 1) {
        uVar6 = *puVar11;
        puVar11 = puVar11 + 1;
        if ((uVar6 & 0xe0000000) == 0x80000000) {
          iVar10 = iVar10 + 1;
        }
        else {
          uVar6 = (int)uVar6 >> 0x10 & 0xff;
          if (uVar6 == *(uint *)(param_1 + 0x38)) {
            uVar8 = uVar8 + 1;
          }
          else {
            uVar8 = uVar8 + *(int *)(*(int *)(param_1 + 4) + 4 + uVar6 * 4);
          }
        }
      }
      iVar5 = *(int *)(param_1 + 4);
      iVar7 = *(int *)(iVar5 + 0x1cc);
      *(uint *)(iVar5 + 0x1cc) = iVar7 + iVar10 + uVar8;
      *(int *)(piVar1[1] + 4) = *(int *)(iVar5 + 0x1b0) + iVar7 * 4;
      iVar5 = piVar1[1];
      if (iVar10 < 1) {
        *(undefined4 *)(iVar5 + 0xc) = 0;
      }
      else {
        *(uint *)(iVar5 + 0xc) = *(int *)(iVar5 + 4) + uVar8 * 4;
      }
      *(uint *)(*piVar1 + 8) = iVar10 << 0x10 | uVar8;
      puVar11 = *(uint **)(piVar1[1] + 0xc);
      puVar12 = (uint *)(*(int *)*piVar1 + 0xc);
      if (0 < iVar10) {
        do {
          *puVar11 = *puVar12 & 0xffff07ff | *(int *)(param_1 + 0x40) << 0xb;
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      puVar11 = *(uint **)(piVar1[1] + 4);
      iVar10 = 0;
      if (0 < (int)uVar8) {
        do {
          uVar9 = *puVar12;
          uVar6 = (int)uVar9 >> 0x10 & 0xff;
          puVar12 = puVar12 + 1;
          uVar9 = uVar9 & 0xffff07ff;
          if (uVar6 == *(uint *)(param_1 + 0x38)) {
            *puVar11 = *(int *)(param_1 + 0x40) << 0xb | uVar9;
            puVar11 = puVar11 + 1;
          }
          else {
            iVar5 = *(int *)(*(int *)(param_1 + 4) + 4 + uVar6 * 4);
            iVar10 = iVar10 + -1;
            iVar7 = 0;
            if (0 < iVar5) {
              iVar10 = iVar10 + iVar5;
              do {
                *puVar11 = iVar7 << 0xb | uVar9;
                puVar11 = puVar11 + 1;
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar5);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar8);
      }
      local_10 = local_10 + (uVar4 & 0x1f) + 1;
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0x58));
  }
  return;
}

