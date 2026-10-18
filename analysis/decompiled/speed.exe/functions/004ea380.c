/* speed.exe 004ea380 FUN_004ea380; analysis pseudocode, not buildable source.
 * calls 004e2f40 FUN_004e2f40
 * calls 004e2c30 FUN_004e2c30
 * calls 004e4120 FUN_004e4120
 * calls 004e2cc0 FUN_004e2cc0
 */

void __fastcall FUN_004ea380(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint local_8;
  uint local_4;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < iVar5) {
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar5);
    *(int **)(param_1 + 0x20) = piVar2;
    if (0 < *piVar2) {
      *(int *)(param_1 + 8) =
           *(int *)(*(int *)(param_1 + 4) + 0x13c) + *(int *)(*(int *)(param_1 + 4) + 0xe8) * 8;
      puVar6 = (uint *)(piVar2 + 4);
      if (0 < *piVar2) {
        do {
          local_4 = puVar6[1];
          local_8 = *puVar6 & 0xffff07ff | *(int *)(param_1 + 0x40) << 0xb;
          uVar3 = FUN_004e2c30(&local_8);
          uVar4 = FUN_004e2cc0(puVar6,*(undefined4 *)(param_1 + 0x40));
          iVar5 = *(int *)(param_1 + 4);
          piVar2 = (int *)(*(int *)(iVar5 + 0x13c) + *(int *)(iVar5 + 0xe8) * 8);
          *(int *)(iVar5 + 0xe8) = *(int *)(iVar5 + 0xe8) + 1;
          FUN_004e2f40(piVar2,puVar6,*(undefined4 *)(param_1 + 0x40),uVar7);
          *(uint *)(*piVar2 + 4) =
               *(int *)(*(int *)(param_1 + 4) + 0x3c) << 8 | (int)*puVar6 >> 0x10 & 0xe000U |
               *puVar6 & 0xfff0000 | uVar7;
          *(uint **)*piVar2 = puVar6;
          *(undefined4 *)(*piVar2 + 8) = 0;
          *(undefined4 *)(*piVar2 + 0xc) = 0;
          uVar1 = puVar6[1];
          if ((char)(uVar1 >> 8) < '\0') {
            iVar5 = FUN_004e4120(uVar1 | 0xffff0000);
            *(int *)(*piVar2 + 0xc) = 0x7fff - iVar5;
          }
          else {
            *(uint *)(*piVar2 + 8) = uVar1 & 0x7fff;
            iVar5 = FUN_004e4120(-*(int *)(*piVar2 + 8));
            *(int *)(*piVar2 + 0xc) = 0x7fff - iVar5;
          }
          *(undefined4 *)(piVar2[1] + 8) = 0;
          *(undefined4 *)piVar2[1] = uVar3;
          *(undefined4 *)(piVar2[1] + 4) = uVar4;
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
          puVar6 = puVar6 + ((int)local_4 >> 0x10 & 0x1fU) + 2;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < **(int **)(param_1 + 0x20));
      }
    }
  }
  return;
}

