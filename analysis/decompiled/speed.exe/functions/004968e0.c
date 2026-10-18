/* speed.exe 004968e0 FUN_004968e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004968e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(ushort *)(iVar3 + 0xe) != 0) {
    uVar4 = (**(code **)(*DAT_009117f4 + 0x14))((uint)*(ushort *)(iVar3 + 0xe) << 4);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    uVar4 = (**(code **)(*DAT_009117f4 + 0x14))((uint)*(ushort *)(iVar3 + 0xe) << 4);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    uVar4 = (**(code **)(*DAT_009117f4 + 0x14))((uint)*(ushort *)(iVar3 + 0xe) * 0x30);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    iVar7 = 0;
    if (*(short *)(iVar3 + 0xe) != 0) {
      iVar6 = 0xc;
      puVar5 = (undefined4 *)(iVar3 + 0x14);
      do {
        *(undefined4 *)(iVar6 + -0xc + *(int *)(param_1 + 0x2c)) = *puVar5;
        *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x2c)) = puVar5[3];
        *(float *)(*(int *)(param_1 + 0x2c) + iVar6) =
             *(float *)(*(int *)(param_1 + 0x2c) + iVar6) * _DAT_00895500;
        *(float *)(iVar6 + 0xc + *(int *)(param_1 + 0x2c)) =
             (float)*(ushort *)(puVar5 + 6) * (float)puVar5[3] * _DAT_008957bc - (float)puVar5[3];
        *(float *)(iVar6 + 0x18 + *(int *)(param_1 + 0x2c)) =
             (float)*(ushort *)((int)puVar5 + 0x1e) * (float)puVar5[3] * _DAT_008957bc;
        *(float *)(iVar6 + 0x18 + *(int *)(param_1 + 0x2c)) =
             *(float *)(iVar6 + 0x18 + *(int *)(param_1 + 0x2c)) * _DAT_008954f8;
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + -8 + iVar6) = puVar5[1];
        *(undefined4 *)(iVar6 + 4 + *(int *)(param_1 + 0x2c)) = puVar5[4];
        *(float *)(iVar6 + 4 + *(int *)(param_1 + 0x2c)) =
             *(float *)(iVar6 + 4 + *(int *)(param_1 + 0x2c)) * _DAT_00895500;
        *(float *)(iVar6 + 0x10 + *(int *)(param_1 + 0x2c)) =
             (float)*(ushort *)((int)puVar5 + 0x1a) * (float)puVar5[4] * _DAT_008957bc -
             (float)puVar5[4];
        *(float *)(iVar6 + 0x1c + *(int *)(param_1 + 0x2c)) =
             (float)*(ushort *)(puVar5 + 8) * (float)puVar5[4] * _DAT_008957bc;
        *(float *)(iVar6 + 0x1c + *(int *)(param_1 + 0x2c)) =
             *(float *)(iVar6 + 0x1c + *(int *)(param_1 + 0x2c)) * _DAT_008954f8;
        *(undefined4 *)(iVar6 + -4 + *(int *)(param_1 + 0x2c)) = puVar5[2];
        *(undefined4 *)(iVar6 + 8 + *(int *)(param_1 + 0x2c)) = puVar5[5];
        *(float *)(iVar6 + 8 + *(int *)(param_1 + 0x2c)) =
             *(float *)(iVar6 + 8 + *(int *)(param_1 + 0x2c)) * _DAT_00895500;
        *(float *)(iVar6 + 0x14 + *(int *)(param_1 + 0x2c)) =
             (float)*(ushort *)(puVar5 + 7) * (float)puVar5[5] * _DAT_008957bc - (float)puVar5[5];
        iVar7 = iVar7 + 1;
        *(float *)(iVar6 + 0x20 + *(int *)(param_1 + 0x2c)) =
             (float)*(ushort *)((int)puVar5 + 0x22) * (float)puVar5[5] * _DAT_008957bc;
        iVar1 = iVar6 + 0x20;
        iVar2 = iVar6 + 0x20;
        iVar6 = iVar6 + 0x30;
        *(float *)(iVar2 + *(int *)(param_1 + 0x2c)) =
             *(float *)(iVar1 + *(int *)(param_1 + 0x2c)) * _DAT_008954f8;
        puVar5 = puVar5 + 9;
      } while (iVar7 < (int)(uint)*(ushort *)(iVar3 + 0xe));
    }
  }
  return;
}

