/* speed.exe 004e33b0 FUN_004e33b0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004e33b0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *local_8;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(int **)(param_1 + 0x30) = piVar3;
    *(undefined4 *)(param_1 + 0x54) = 0;
    if (0 < *piVar3) {
      *(int *)(param_1 + 0xc) =
           *(int *)(*(int *)(param_1 + 4) + 0x160) + *(int *)(*(int *)(param_1 + 4) + 0xf4) * 8;
      puVar6 = (uint *)(piVar3 + 4);
      if (0 < *piVar3) {
        do {
          if (*(int *)(param_1 + 0x40) == 0) {
            iVar2 = *(int *)(param_1 + 4);
            local_8 = (undefined4 *)(*(int *)(iVar2 + 0x158) + *(int *)(iVar2 + 0xf8) * 0xc);
            *(int *)(iVar2 + 0xf8) = *(int *)(iVar2 + 0xf8) + 1;
            iVar2 = *(int *)(param_1 + 4);
            piVar3 = (int *)(*(int *)(iVar2 + 0x160) + *(int *)(iVar2 + 0xf4) * 8);
            *(int *)(iVar2 + 0xf4) = *(int *)(iVar2 + 0xf4) + 1;
            iVar2 = *(int *)(param_1 + 4);
            puVar5 = (undefined4 *)(*(int *)(iVar2 + 0x15c) + *(int *)(iVar2 + 0xfc) * 8);
            *(int *)(iVar2 + 0xfc) = *(int *)(iVar2 + 0xfc) + 1;
            local_8[1] = (*puVar6 & 0xff00 | 0x200000) << 8 | *puVar6 & 0x10000000 | uVar4;
            bVar1 = *(byte *)((int)puVar6 + 2);
            *local_8 = puVar6;
            local_8[2] = (uint)bVar1;
          }
          else {
            local_8 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x5c) + 0xc) + uVar4 * 8);
            iVar2 = *(int *)(param_1 + 4);
            piVar3 = (int *)(*(int *)(iVar2 + 0x160) + *(int *)(iVar2 + 0xf4) * 8);
            *(int *)(iVar2 + 0xf4) = *(int *)(iVar2 + 0xf4) + 1;
            iVar2 = *(int *)(param_1 + 4);
            puVar5 = (undefined4 *)(*(int *)(iVar2 + 0x15c) + *(int *)(iVar2 + 0xfc) * 8);
            *(int *)(iVar2 + 0xfc) = *(int *)(iVar2 + 0xfc) + 1;
          }
          *piVar3 = (int)local_8;
          puVar5[1] = 0;
          *puVar5 = 0;
          piVar3[1] = (int)puVar5;
          bVar1 = *(byte *)((int)puVar6 + 2);
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
          puVar6 = puVar6 + bVar1 + 2;
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < **(int **)(param_1 + 0x30));
      }
    }
  }
  return;
}

