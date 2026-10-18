/* speed.exe 00408810 FUN_00408810; analysis pseudocode, not buildable source.
 * calls 007854b0 FUN_007854b0
 * calls 004048c0 FUN_004048c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00408810(float *param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  
  fVar1 = (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
          (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
          (*param_1 - *param_2) * (*param_1 - *param_2);
  uVar2 = (uint)(ushort)((ushort)(fVar1 < _DAT_00890db4) << 8 |
                         (ushort)(NAN(fVar1) || NAN(_DAT_00890db4)) << 10 |
                        (ushort)(fVar1 == _DAT_00890db4) << 0xe);
  if (fVar1 < _DAT_00890db4 != 0 || (fVar1 == _DAT_00890db4) != 0) {
    local_78 = *param_1;
    local_70 = param_1[2];
    local_74 = param_1[1] + _DAT_00890634;
    local_6c = 0x3f800000;
    local_64 = param_2[1] + _DAT_00890634;
    local_68 = *param_2;
    local_60 = param_2[2];
    local_5c = 0x3f800000;
    FUN_004048c0(local_68,param_2[1],local_60);
    iVar3 = FUN_007854b0(&local_78,&local_58,2);
    uVar2 = 0;
    if (iVar3 != 0) {
      fVar1 = (local_60 - local_50) * (local_60 - local_50) +
              (local_64 - local_54) * (local_64 - local_54) +
              (local_68 - local_58) * (local_68 - local_58);
      uVar2 = (uint)(ushort)((ushort)(fVar1 < _DAT_00890634) << 8 |
                             (ushort)(NAN(fVar1) || NAN(_DAT_00890634)) << 10 |
                            (ushort)(fVar1 == _DAT_00890634) << 0xe);
      if (fVar1 >= _DAT_00890634 && (fVar1 == _DAT_00890634) == 0) goto LAB_00408947;
    }
    return uVar2;
  }
LAB_00408947:
  return CONCAT31((int3)(uVar2 >> 8),1);
}

