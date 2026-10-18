/* speed.exe 00731b80 FUN_00731b80; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00731b10 FUN_00731b10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00731b80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_8;
  
  *(undefined **)(param_1 + 0x9c4) = &DAT_00994368;
  *(undefined **)(param_1 + 0x9c8) = &DAT_00994368;
  *(undefined **)(param_1 + 0x9cc) = &DAT_009a2dc8;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x9c0)) {
    puVar7 = (undefined4 *)(param_1 + 0xb4);
    do {
      iVar6 = *(int *)(puVar7[-0xd] + 0x40);
      uVar1 = *(undefined4 *)(iVar6 + 0x44);
      uVar2 = *(undefined4 *)(iVar6 + 0x48);
      puVar7[-5] = *(undefined4 *)(iVar6 + 0x40);
      puVar7[-4] = uVar1;
      bVar3 = true;
      puVar7[-3] = uVar2;
      iVar6 = *(int *)(puVar7[-0xd] + 0x40);
      uVar1 = *(undefined4 *)(iVar6 + 0x54);
      uVar2 = *(undefined4 *)(iVar6 + 0x58);
      puVar7[-1] = *(undefined4 *)(iVar6 + 0x50);
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      iVar6 = puVar7[-0xd];
      puVar7[3] = *(undefined4 *)(iVar6 + 0xc);
      if (DAT_00903160 == 0) {
LAB_00731c67:
        bVar3 = false;
      }
      else if (DAT_00903160 == 2) {
        if (DAT_008f82f4 % 0x3d < 0xf) goto LAB_00731c67;
      }
      else if ((DAT_00903160 == 3) &&
              (iVar4 = *(int *)(iVar6 + 0x40),
              SQRT(*(float *)(iVar4 + 0x208) * *(float *)(iVar4 + 0x208) +
                   *(float *)(iVar4 + 0x204) * *(float *)(iVar4 + 0x204) +
                   *(float *)(iVar4 + 0x200) * *(float *)(iVar4 + 0x200)) < _DAT_009ab254))
      goto LAB_00731c67;
      if ((0 < DAT_009a3a70) && (DAT_00903160 != 2)) {
        bVar3 = false;
      }
      iVar4 = FUN_007c4b80();
      iVar5 = FUN_007c4b80();
      iVar4 = (iVar4 >> 5 & 0x7fU) * 0x80 + (iVar5 >> 5 & 0x7fU);
      if ((*(byte *)((int)&DAT_009a2f40 + (iVar4 >> 3)) & '\x01' << ((byte)iVar4 & 7)) != 0) {
        bVar3 = false;
      }
      if ((*(int *)(iVar6 + 4) == 0xf) || (*(int *)(iVar6 + 4) == 0x10)) {
        bVar3 = false;
      }
      puVar7[4] = 0xffffffff;
      if (bVar3) {
        iVar6 = FUN_007c4b80();
        iVar4 = FUN_007c4b80();
        puVar7[4] = (iVar6 >> 5 & 0x1fU) * 0x20 + (iVar4 >> 5 & 0x1fU);
      }
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 0x34;
    } while (local_8 < *(int *)(param_1 + 0x9c0));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x9c0)) {
    puVar7 = (undefined4 *)(param_1 + 0x8c);
    do {
      puVar7[-1] = *(undefined4 *)(param_1 + 0x9c8);
      *puVar7 = *(undefined4 *)(param_1 + 0x9c8);
      puVar7[1] = *(undefined4 *)(param_1 + 0x9cc);
      FUN_00731b10(puVar7 + -0x23);
      *(undefined4 *)(param_1 + 0x9c8) = *puVar7;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 0x34;
    } while (iVar6 < *(int *)(param_1 + 0x9c0));
  }
  return;
}

