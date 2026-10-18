/* speed.exe 004e7000 FUN_004e7000; analysis pseudocode, not buildable source.
 * calls 0045dbd0 FUN_0045dbd0
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004e7000(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar7;
  undefined4 uVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  float10 fVar8;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = *(int *)((&DAT_009142d0)[param_2] + 0x34);
  local_28 = *(float *)(iVar1 + 0x48);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  local_1c = *(float *)(iVar2 + 0x44);
  local_18 = *(float *)(iVar2 + 0x48);
  local_40 = *(float *)(iVar1 + 0x40) - *(float *)(iVar2 + 0x40);
  local_3c = *(float *)(iVar1 + 0x44) - local_1c;
  fVar5 = SQRT((local_28 - local_18) * (local_28 - local_18) +
               local_40 * local_40 + local_3c * local_3c);
  uVar7 = (undefined2)((uint)(iVar2 + 0x40) >> 0x10);
  if (fVar5 >= _DAT_00897dfc && (fVar5 == _DAT_00897dfc) == 0) {
    return CONCAT22(uVar7,(ushort)(fVar5 < _DAT_00897dfc) << 8 |
                          (ushort)(NAN(fVar5) || NAN(_DAT_00897dfc)) << 10 |
                          (ushort)(fVar5 == _DAT_00897dfc) << 0xe);
  }
  uVar6 = CONCAT22(uVar7,(ushort)(fVar5 < _DAT_008959e4) << 8 |
                         (ushort)(NAN(fVar5) || NAN(_DAT_008959e4)) << 10 |
                         (ushort)(fVar5 == _DAT_008959e4) << 0xe);
  if (fVar5 >= _DAT_008959e4) {
    local_38 = 0.0;
    FUN_0045f490(&local_20,&local_40);
    local_40 = local_20;
    local_3c = local_1c;
    local_38 = local_18;
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
    local_2c = *(float *)(iVar1 + 0x14);
    local_30 = *(float *)(iVar1 + 0x10);
    local_28 = 0.0;
    FUN_0045f490(&local_20,&local_30);
    local_30 = local_20;
    local_2c = local_1c;
    local_28 = local_18;
    fVar4 = local_18 * local_38 + local_20 * local_40 + local_1c * local_3c;
    if ((DAT_00904ff8 == '\0') && (DAT_009b0898 == 0)) {
      fVar8 = (float10)FUN_0045dbd0(0x4011361e);
      fVar3 = (float10)fVar4;
      uVar6 = CONCAT22(extraout_var_00,
                       (ushort)(fVar8 < fVar3) << 8 | (ushort)(NAN(fVar8) || NAN(fVar3)) << 10 |
                       (ushort)(fVar8 == fVar3) << 0xe);
      if (fVar8 >= fVar3) {
        fVar8 = (float10)FUN_0045dbd0(0x4011361e);
        fVar8 = -fVar8;
        fVar3 = (float10)fVar4;
        uVar6 = CONCAT22(extraout_var_01,
                         (ushort)(fVar8 < fVar3) << 8 | (ushort)(NAN(fVar8) || NAN(fVar3)) << 10 |
                         (ushort)(fVar8 == fVar3) << 0xe);
        if ((fVar8 < fVar3 || (fVar8 == fVar3) != 0) ||
           (uVar6 = CONCAT22(extraout_var_01,
                             (ushort)(fVar5 < _DAT_00890bf8) << 8 |
                             (ushort)(NAN(fVar5) || NAN(_DAT_00890bf8)) << 10 |
                             (ushort)(fVar5 == _DAT_00890bf8) << 0xe), fVar5 >= _DAT_00890bf8)) {
          return uVar6;
        }
      }
    }
    else {
      fVar8 = (float10)FUN_0045dbd0(0x4064fcb9);
      fVar3 = (float10)fVar4;
      uVar6 = CONCAT22(extraout_var,
                       (ushort)(fVar8 < fVar3) << 8 | (ushort)(NAN(fVar8) || NAN(fVar3)) << 10 |
                       (ushort)(fVar8 == fVar3) << 0xe);
      if (fVar8 >= fVar3 && (fVar8 == fVar3) == 0) {
        return uVar6;
      }
    }
  }
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}

