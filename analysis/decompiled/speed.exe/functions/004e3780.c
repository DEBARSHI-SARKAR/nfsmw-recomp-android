/* speed.exe 004e3780 FUN_004e3780; analysis pseudocode, not buildable source.
 * calls 004e2de0 FUN_004e2de0
 */

void __fastcall FUN_004e3780(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *local_8;
  int local_4;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < iVar6) {
    piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
    *(int **)(param_1 + 0x28) = piVar5;
    if (0 < *piVar5) {
      local_8 = piVar5 + 4;
      *(int *)(param_1 + 0x18) =
           *(int *)(*(int *)(param_1 + 4) + 0x140) + *(int *)(*(int *)(param_1 + 4) + 0x118) * 8;
      local_4 = 0;
      if (0 < *piVar5) {
        do {
          if (*(int *)(param_1 + 0x40) == 0) {
            iVar6 = *(int *)(param_1 + 4);
            piVar5 = (int *)(*(int *)(iVar6 + 0x144) + *(int *)(iVar6 + 0x11c) * 4);
            *(int *)(iVar6 + 0x11c) = *(int *)(iVar6 + 0x11c) + 1;
            *piVar5 = (int)local_8;
          }
          else {
            piVar5 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) + 0x18) + local_4 * 8);
          }
          iVar6 = *(int *)(param_1 + 4);
          piVar2 = (int *)(*(int *)(iVar6 + 0x140) + *(int *)(iVar6 + 0x118) * 8);
          *(int *)(iVar6 + 0x118) = *(int *)(iVar6 + 0x118) + 1;
          iVar6 = *(int *)(param_1 + 4);
          puVar8 = (undefined4 *)(*(int *)(iVar6 + 0x120) * 0x20 + *(int *)(iVar6 + 0x148));
          puVar8[6] = 0;
          puVar8[2] = 0;
          puVar8[7] = 0x7fff;
          puVar8[3] = 0xffffd8f0;
          *(int *)(iVar6 + 0x120) = *(int *)(iVar6 + 0x120) + 1;
          *piVar2 = (int)piVar5;
          iVar6 = *piVar5;
          bVar4 = *(byte *)(iVar6 + 3) & 0xf;
          if ((*(byte *)(iVar6 + 3) & 0xf) == 0) {
LAB_004e386a:
            if ((*(uint *)(iVar6 + 0xc) & 0xfff) == 0) {
              *(uint *)(*piVar5 + 0xc) = *(uint *)(*piVar5 + 0xc) | 1;
            }
            iVar6 = *(int *)*piVar2;
            if ((*(uint *)(iVar6 + 0x14) & 0xfff) == 0) {
              uVar3 = *(uint *)(iVar6 + 0x14);
LAB_004e388d:
              *(uint *)(iVar6 + 0x14) = uVar3 | 1;
            }
          }
          else if (bVar4 == 1) {
            if ((*(uint *)(iVar6 + 0xc) & 0xfff) == 0) {
              *(uint *)(*piVar5 + 0xc) = *(uint *)(*piVar5 + 0xc) | 1;
            }
            if ((*(uint *)(*(int *)*piVar2 + 0x10) & 0xfff) == 0) {
              puVar1 = (uint *)(*(int *)*piVar2 + 0x10);
              *puVar1 = *puVar1 | 1;
            }
            iVar6 = *(int *)*piVar2;
            if ((*(uint *)(iVar6 + 0x14) & 0xfff) == 0) {
              uVar3 = *(uint *)(iVar6 + 0x14);
              goto LAB_004e388d;
            }
          }
          else if (bVar4 == 2) goto LAB_004e386a;
          piVar2[1] = (int)puVar8;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[6] = 0;
          puVar8[7] = 0x7fff;
          puVar8[4] = *(int *)(param_1 + 0x40) << 0xb | *(uint *)(*piVar5 + 8);
          uVar7 = FUN_004e2de0(*piVar5,*(undefined4 *)(param_1 + 0x40));
          puVar8[5] = uVar7;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          local_8 = local_8 + (*(byte *)(*piVar5 + 6) & 0xf) + 6;
          local_4 = local_4 + 1;
        } while (local_4 < **(int **)(param_1 + 0x28));
      }
    }
  }
  return;
}

