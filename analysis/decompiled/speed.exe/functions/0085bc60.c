/* speed.exe 0085bc60 FUN_0085bc60; analysis pseudocode, not buildable source.
 * calls 00846010 FUN_00846010
 * calls 0085bc10 FUN_0085bc10
 */

void FUN_0085bc60(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  undefined4 *local_4;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x194) < param_3) {
    param_3 = *(int *)(param_1 + 0x194);
  }
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  param_1 = 0;
  if (0 < param_3) {
    local_4 = param_2;
    puVar4 = (undefined2 *)(iVar2 + 0x224);
    do {
      puVar7 = (undefined4 *)(puVar4 + -0x46);
      puVar5 = puVar7;
      for (iVar3 = 0x2c; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      puVar5 = local_4;
      puVar8 = puVar7;
      for (iVar3 = 0x22; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined4 *)(puVar4 + 0xe) = 0xffffffff;
      *puVar4 = *(undefined2 *)(iVar2 + 0x28);
      puVar4[4] = 6000;
      FUN_00846010(puVar4 + -0x12,0x20,"$%08x$%08x",*puVar7,*(undefined4 *)(puVar4 + -0x44));
      pbVar9 = (byte *)(iVar2 + 0x74);
      pbVar6 = (byte *)(puVar4 + -0x22);
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_0085bd2d:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0085bd32;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_0085bd2d;
        pbVar6 = pbVar6 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0085bd32:
      if (iVar3 == 0) {
        puVar7 = (undefined4 *)(puVar4 + -0x42);
        puVar5 = (undefined4 *)(iVar2 + 0x94);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
        }
        *(int *)(iVar2 + 0xd4) = param_1;
      }
      param_1 = param_1 + 1;
      local_4 = local_4 + 0x22;
      puVar4 = puVar4 + 0x58;
    } while (param_1 < param_3);
  }
  *(int *)(iVar2 + 400) = param_3;
  FUN_0085bc10();
  return;
}

