/* speed.exe 004e3940 FUN_004e3940; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004e3940(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_4;
  
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(int **)(param_1 + 0x24) = piVar3;
    if (0 < *piVar3) {
      *(int *)(param_1 + 0x14) =
           *(int *)(*(int *)(param_1 + 4) + 0x14c) + *(int *)(*(int *)(param_1 + 4) + 0x10c) * 8;
      piVar6 = piVar3 + 4;
      local_4 = 0;
      if (0 < *piVar3) {
        do {
          if (*(int *)(param_1 + 0x40) == 0) {
            iVar2 = *(int *)(param_1 + 4);
            puVar5 = (undefined4 *)(*(int *)(iVar2 + 0x150) + *(int *)(iVar2 + 0x110) * 0x14);
            *(int *)(iVar2 + 0x110) = *(int *)(iVar2 + 0x110) + 1;
            *puVar5 = piVar6;
            puVar5[4] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
          }
          else {
            puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x5c) + 0x14) + local_4 * 8);
          }
          iVar2 = *(int *)(param_1 + 4);
          puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x14c) + *(int *)(iVar2 + 0x10c) * 8);
          *(int *)(iVar2 + 0x10c) = *(int *)(iVar2 + 0x10c) + 1;
          iVar2 = *(int *)(param_1 + 4);
          iVar4 = *(int *)(iVar2 + 0x114) * 0x20 + *(int *)(iVar2 + 0x154);
          *(int *)(iVar2 + 0x114) = *(int *)(iVar2 + 0x114) + 1;
          *puVar1 = puVar5;
          puVar5[1] = piVar6 + 1;
          puVar1[1] = iVar4;
          *(undefined4 *)(iVar4 + 8) = 0;
          *(undefined4 *)(puVar1[1] + 0xc) = 0;
          *(undefined4 *)(puVar1[1] + 0x10) = 0x7fff;
          *(undefined4 *)(puVar1[1] + 0x14) = 0;
          *(undefined4 *)(puVar1[1] + 0x1c) = 0x3f800000;
          *(undefined4 *)(puVar1[1] + 0x18) = 0x3f800000;
          *(uint *)puVar1[1] = **(uint **)*puVar1 & 0xffff07ff | *(int *)(param_1 + 0x40) << 0xb;
          *(uint *)(puVar1[1] + 4) =
               (*(uint *)(param_1 + 0x40) & 0x3ffff | 0xc0000) << 0xb |
               **(uint **)*puVar1 & 0x1fffffff;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          piVar6 = piVar6 + (*(byte *)((int)piVar6 + 3) & 0xf) * 6 + 1;
          local_4 = local_4 + 1;
        } while (local_4 < **(int **)(param_1 + 0x24));
      }
    }
  }
  return;
}

