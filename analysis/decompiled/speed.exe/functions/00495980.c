/* speed.exe 00495980 FUN_00495980; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00495980(int param_1)

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
    uVar4 = (**(code **)(*DAT_009117f4 + 0x14))((uint)*(ushort *)(iVar3 + 0xe) << 2);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    uVar4 = (**(code **)(*DAT_009117f4 + 0x14))((uint)*(ushort *)(iVar3 + 0xe) << 2);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    uVar4 = (**(code **)(*DAT_009117f4 + 0x14))((uint)*(ushort *)(iVar3 + 0xe) << 4);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    iVar7 = 0;
    if (*(short *)(iVar3 + 0xe) != 0) {
      iVar6 = 0;
      puVar5 = (undefined4 *)(iVar3 + 0x14);
      do {
        *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x2c)) = *puVar5;
        *(undefined4 *)(iVar6 + 4 + *(int *)(param_1 + 0x2c)) = puVar5[1];
        iVar7 = iVar7 + 1;
        *(float *)(iVar6 + 4 + *(int *)(param_1 + 0x2c)) =
             *(float *)(iVar6 + 4 + *(int *)(param_1 + 0x2c)) * _DAT_00895500;
        *(float *)(iVar6 + 8 + *(int *)(param_1 + 0x2c)) =
             (float)*(ushort *)(puVar5 + 2) * (float)puVar5[1] * _DAT_008957bc - (float)puVar5[1];
        *(float *)(iVar6 + 0xc + *(int *)(param_1 + 0x2c)) =
             (float)*(ushort *)((int)puVar5 + 10) * (float)puVar5[1] * _DAT_008957bc;
        iVar1 = iVar6 + 0xc;
        iVar2 = iVar6 + 0xc;
        iVar6 = iVar6 + 0x10;
        *(float *)(iVar2 + *(int *)(param_1 + 0x2c)) =
             *(float *)(iVar1 + *(int *)(param_1 + 0x2c)) * _DAT_008954f8;
        puVar5 = puVar5 + 3;
      } while (iVar7 < (int)(uint)*(ushort *)(iVar3 + 0xe));
    }
  }
  return;
}

