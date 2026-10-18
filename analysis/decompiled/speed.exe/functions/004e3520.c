/* speed.exe 004e3520 FUN_004e3520; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004e3520(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  int local_4;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < iVar7) {
    iVar7 = iVar7 + *(int *)(param_1 + 0x1c);
    iVar2 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 0x2c) = iVar7;
    iVar3 = *(int *)(iVar2 + 0x1d4);
    *(int *)(iVar2 + 0x1d4) = *(int *)(iVar7 + 4) * 0x10 + iVar3;
    piVar5 = *(int **)(param_1 + 0x2c);
    *(int *)(param_1 + 0x34) = *(int *)(iVar2 + 0x124) + iVar3 * 4;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (0 < *piVar5) {
      *(int *)(param_1 + 0x10) =
           *(int *)(*(int *)(param_1 + 4) + 0x16c) + *(int *)(*(int *)(param_1 + 4) + 0x100) * 8;
      puVar10 = (uint *)(piVar5 + 4);
      local_4 = 0;
      local_10 = 0;
      if (0 < *piVar5) {
        local_14 = 0;
        do {
          if (*(int *)(param_1 + 0x40) == 0) {
            iVar7 = *(int *)(param_1 + 4);
            piVar5 = (int *)(*(int *)(iVar7 + 0x104) * 0x10 + *(int *)(iVar7 + 0x164));
            *(int *)(iVar7 + 0x104) = *(int *)(iVar7 + 0x104) + 1;
            iVar7 = *(int *)(param_1 + 4);
            local_c = (undefined4 *)(*(int *)(iVar7 + 0x16c) + *(int *)(iVar7 + 0x100) * 8);
            *(int *)(iVar7 + 0x100) = *(int *)(iVar7 + 0x100) + 1;
            iVar7 = *(int *)(param_1 + 4);
            iVar2 = *(int *)(iVar7 + 0x108);
            iVar3 = *(int *)(iVar7 + 0x168);
            *(int *)(iVar7 + 0x108) = iVar2 + 1;
            *piVar5 = (int)puVar10;
            puVar9 = (uint *)(iVar3 + iVar2 * 0x14);
            piVar5[1] = (*puVar10 & 0xff00 | 0x200000) << 8 | *puVar10 & 0x10000000 | local_10;
            piVar5[3] = 0;
            piVar5[2] = (uint)*(byte *)((int)puVar10 + 2);
          }
          else {
            iVar7 = *(int *)(param_1 + 4);
            piVar5 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) + 0x10) + local_10 * 8);
            local_c = (undefined4 *)(*(int *)(iVar7 + 0x16c) + *(int *)(iVar7 + 0x100) * 8);
            *(int *)(iVar7 + 0x100) = *(int *)(iVar7 + 0x100) + 1;
            iVar7 = *(int *)(param_1 + 4);
            puVar9 = (uint *)(*(int *)(iVar7 + 0x168) + *(int *)(iVar7 + 0x108) * 0x14);
            *(int *)(iVar7 + 0x108) = *(int *)(iVar7 + 0x108) + 1;
          }
          *local_c = piVar5;
          puVar9[3] = 0;
          puVar9[1] = 0;
          puVar9[2] = 0xffffd8f0;
          uVar6 = *(int *)(param_1 + 0x40) << 0xb | *(uint *)(*piVar5 + 8);
          *puVar9 = uVar6;
          if (local_4 == *(int *)(*piVar5 + 8)) {
            puVar8 = (undefined4 *)(local_14 + -0x40 + *(int *)(param_1 + 0x34));
            cVar4 = (*DAT_00914408)(uVar6,puVar8);
          }
          else {
            puVar8 = (undefined4 *)(*(int *)(param_1 + 0x34) + local_14);
            cVar4 = (*DAT_00914408)(uVar6,puVar8);
            local_14 = local_14 + 0x40;
          }
          puVar9[4] = (uint)puVar8;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
          puVar8[10] = 0;
          puVar8[0xb] = 0;
          puVar8[0xc] = 0;
          puVar8[0xd] = 0;
          puVar8[0xe] = 0;
          puVar8[0xf] = (uint)(cVar4 != '\0');
          local_c[1] = puVar9;
          local_4 = *(int *)(*piVar5 + 8);
          bVar1 = *(byte *)((int)puVar10 + 2);
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          puVar10 = puVar10 + bVar1 + 3;
          local_10 = local_10 + 1;
        } while ((int)local_10 < **(int **)(param_1 + 0x2c));
      }
    }
  }
  return;
}

