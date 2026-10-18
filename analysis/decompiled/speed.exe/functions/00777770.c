/* speed.exe 00777770 FUN_00777770; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 00765c30 FUN_00765c30
 * calls 0076e980 FUN_0076e980
 * calls 0076f4a0 FUN_0076f4a0
 * calls 0076f140 FUN_0076f140
 * calls 0076e890 FUN_0076e890
 * calls 007753e0 FUN_007753e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00777770(int param_1,float *param_2)

{
  short sVar1;
  float fVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  float10 extraout_ST0;
  float10 fVar12;
  float10 fVar13;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  int local_4;
  
  iVar10 = *(short *)(param_1 + 0x8e) * 0x16 + DAT_009b38c0;
  local_4 = iVar10;
  FUN_0040fe20(param_1 + 0xbc,&local_28);
  local_1c = *param_2 - *(float *)(param_1 + 0x98);
  local_18 = param_2[2] - *(float *)(param_1 + 0xa0);
  local_24 = local_20;
  fVar2 = local_20 * local_1c - local_18 * local_28;
  local_14 = local_18;
  local_10 = local_1c;
  local_c = local_18;
  local_8 = local_18;
  FUN_0076f4a0(iVar10,fVar2,0);
  FUN_0076f4a0(iVar10,fVar2,1);
  *(float *)(param_1 + 0x2c8) = fVar2;
  *(float *)(param_1 + 0x2c4) = fVar2;
  *(float *)(param_1 + 0x2cc) = fVar2;
  if (*(int *)(param_1 + 0x78) == 1) {
    uVar8 = (uint)*(char *)(param_1 + 0x8c);
    param_2._0_1_ = (byte)(*(ushort *)(iVar10 + 10) >> 8);
    if (uVar8 == 0) {
      param_2._0_1_ = (byte)param_2 >> 2;
    }
    else {
      param_2._0_1_ = (byte)param_2 >> 1;
    }
    param_2._0_1_ = (byte)param_2 & 1;
    if ((uVar8 ^ 1) == 0) {
      iVar9 = 10;
    }
    else {
      iVar9 = 9;
    }
    uVar6 = *(ushort *)(iVar10 + 10) >> iVar9 & 0xffffff01;
    iVar9 = (uint)*(ushort *)(iVar10 + (uVar8 ^ 1) * 2) * 0x20 + DAT_009b38bc;
    if ((iVar9 == 0) || (sVar1 = *(short *)(iVar9 + 0xe), sVar1 < 0)) {
      puVar11 = &DAT_009b3830;
    }
    else {
      puVar11 = (undefined1 *)(sVar1 * 0x40 + DAT_009b38b8);
    }
    bVar4 = (byte)uVar6 ^ uVar8 == 1;
    local_10 = (float)CONCAT31(local_10._1_3_,bVar4);
    iVar9 = FUN_0076e890(CONCAT31((int3)(uVar6 >> 8),bVar4));
    param_2._0_1_ = (byte)param_2 ^ uVar8 == 1;
    local_1c = (float)CONCAT31(local_1c._1_3_,(byte)param_2);
    iVar7 = FUN_0076e890((byte)param_2);
    if (iVar7 < iVar9) {
      iVar9 = iVar7;
    }
    if (0 < iVar9) {
      iVar7 = 0;
      bVar3 = false;
      local_30 = 0.0;
      local_28 = 0.0;
      local_2c = 0.0;
      if (0 < iVar9) {
        do {
          uVar5 = FUN_0076e980(iVar7,local_1c);
          iVar10 = FUN_0076e980(iVar7,local_10);
          fVar12 = (float10)(*(int *)(puVar11 + iVar10 * 4 + 4) >> 0x12) * (float10)_DAT_009b3a68;
          fVar13 = (extraout_ST0 - fVar12) * (float10)*(float *)(param_1 + 0x90) + fVar12;
          if ((!bVar3) || ((float)ABS((float10)fVar2 - fVar13) < local_30)) {
            *(float *)(param_1 + 0x2c4) = (float)fVar13;
            *(float *)(param_1 + 0x2cc) = (float)fVar13;
            *(undefined1 *)(param_1 + 0x2c3) = uVar5;
            *(float *)(param_1 + 0x2c8) = (float)fVar13;
            *(undefined1 *)(param_1 + 0x2c1) = uVar5;
            local_28 = (float)fVar12;
            bVar3 = true;
            local_2c = (float)extraout_ST0;
            local_30 = (float)ABS((float10)fVar2 - fVar13);
          }
          iVar7 = iVar7 + 1;
          iVar10 = local_4;
        } while (iVar7 < iVar9);
      }
      FUN_0076f4a0(iVar10,local_2c,0);
      FUN_0076f4a0(iVar10,local_28,1);
    }
  }
  FUN_0076f140(iVar10,1);
  FUN_0076f140(iVar10,0);
  FUN_00765c30(iVar10);
  FUN_007753e0(iVar10);
  return;
}

