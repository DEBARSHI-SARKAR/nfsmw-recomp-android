/* speed.exe 0047fe10 FUN_0047fe10; analysis pseudocode, not buildable source.
 * calls 006bde60 FUN_006bde60
 * calls 004692a0 FUN_004692a0
 * calls 0045ded0 FUN_0045ded0
 * calls 006bd940 FUN_006bd940
 * calls 00466a60 FUN_00466a60
 * calls 0045f490 FUN_0045f490
 * calls 0047b300 FUN_0047b300
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0047fe10(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint in_EAX;
  undefined2 extraout_var;
  uint uVar5;
  undefined2 extraout_var_00;
  ushort uVar6;
  float10 fVar7;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_10c;
  undefined1 local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar4 = DAT_00919690;
  if (DAT_00919690 == 0) {
    return in_EAX & 0xffffff00;
  }
  local_10c = DAT_008950c4;
  local_108 = DAT_008950c8;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  FUN_00466a60(&local_50,param_3 + 0x10,param_3);
  FUN_006bde60(&local_90,&local_50);
  local_140 = 0.0;
  local_13c = 0.0;
  local_138 = 0.0;
  local_134 = 0;
  local_c0 = 0.0;
  local_bc = 0.0;
  local_b8 = 0.0;
  local_b4 = 0;
  FUN_006bd940(&local_140,&local_90,iVar4 + 0x40);
  FUN_006bd940(&local_c0,&local_90,iVar4 + 0x60);
  local_d0 = local_c0 - local_140;
  local_c4 = 0;
  local_cc = local_bc - local_13c;
  local_c8 = local_b8 - local_138;
  FUN_0045f490(&local_d0,&local_d0);
  local_f0 = 0.0;
  local_ec = 0.0;
  local_e8 = 0.0;
  local_e4 = 0;
  FUN_006bd940(&local_f0,&local_90,iVar4 + 0x200);
  FUN_0045f490(&local_f0,&local_f0);
  local_150 = *(float *)(param_1 + 0x1c);
  local_14c = *(float *)(param_1 + 0x20);
  local_148 = *(float *)(param_1 + 0x24);
  local_144 = 0;
  local_120 = 0.0;
  local_11c = 0.0;
  local_118 = 0.0;
  local_114 = 0;
  local_130 = 0.0;
  local_12c = 0.0;
  local_128 = 0.0;
  local_124 = 0;
  if (DAT_009110a0 != '\0') {
    local_14c = -local_14c;
  }
  if (*(char *)(param_1 + 4) == '\x03') {
    FUN_0047b300(&local_150);
  }
  local_118 = *(float *)(param_1 + 0x3c);
  local_120 = *(float *)(param_1 + 0x34);
  local_11c = *(float *)(param_1 + 0x38);
  if (DAT_009110a0 != '\0') {
    local_11c = -local_11c;
  }
  if (*(char *)(param_1 + 5) == '\x03') {
    FUN_0047b300(&local_120);
  }
  local_e0 = local_120 - local_150;
  local_d4 = 0;
  local_dc = local_11c - local_14c;
  local_d8 = local_118 - local_148;
  FUN_0045f490(&local_e0,&local_e0);
  local_128 = *(float *)(param_1 + 0x30);
  local_130 = *(float *)(param_1 + 0x28);
  local_12c = *(float *)(param_1 + 0x2c);
  local_100 = 0.0;
  local_fc = 0.0;
  local_f8 = 0.0;
  local_f4 = 0;
  if (DAT_009110a0 != '\0') {
    local_12c = -local_12c;
  }
  if (*(char *)(param_1 + 4) == '\x03') {
    FUN_0047b300(&local_130);
  }
  local_100 = local_130 - local_150;
  local_fc = local_12c - local_14c;
  local_f8 = local_128 - local_148;
  FUN_0045f490(&local_100,&local_100);
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  FUN_006bd940(&local_a0,&local_50,&local_150);
  fVar1 = local_cc * local_dc;
  uVar6 = (ushort)(fVar1 < _DAT_00890968) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
          (ushort)(fVar1 == _DAT_00890968) << 0xe;
  if (fVar1 < _DAT_00890968) {
LAB_00480486:
    return CONCAT22(extraout_var,uVar6);
  }
  fVar1 = local_c8 * local_d8 + local_d0 * local_e0 + fVar1;
  local_104 = local_100 * local_f0 + local_fc * local_ec + local_f8 * local_e8;
  uVar6 = (ushort)(fVar1 < _DAT_00891068) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00891068)) << 10 |
          (ushort)(fVar1 == _DAT_00891068) << 0xe;
  if (fVar1 < _DAT_00891068 || (fVar1 == _DAT_00891068) != 0) goto LAB_00480486;
  if (_DAT_008950c0 <= fVar1) {
    local_10c = CONCAT22(local_10c._2_2_,0x3031);
    fVar7 = (float10)FUN_004692a0(*(ushort *)(iVar4 + 0xc4) >> 1);
    local_a4 = (float)fVar7;
    fVar1 = local_138 * local_138;
    fVar3 = local_13c * local_13c;
    fVar2 = local_140 * local_140;
    uVar5 = FUN_0045ded0(*(undefined4 *)(param_1 + 0x54),0x417f5c2a);
    fVar7 = (float10)FUN_004692a0(uVar5 & 0x7fff);
    fVar3 = _DAT_0089096c / (SQRT(fVar2 + fVar3 + fVar1) * local_a4);
    fVar1 = (float)((float10)_DAT_0089096c /
                   (SQRT((float10)local_150 * (float10)local_150 +
                         (float10)local_14c * (float10)local_14c +
                         (float10)local_148 * (float10)local_148) * fVar7));
    fVar2 = fVar1;
    if (fVar1 < fVar3) {
      fVar2 = fVar3;
    }
    fVar1 = fVar1 - fVar3;
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    fVar1 = fVar1 / fVar2;
    uVar5 = CONCAT22(extraout_var_00,
                     (ushort)(fVar1 < _DAT_00894594) << 8 |
                     (ushort)(NAN(fVar1) || NAN(_DAT_00894594)) << 10 |
                     (ushort)(fVar1 == _DAT_00894594) << 0xe);
    if (fVar1 < _DAT_00894594 || (fVar1 == _DAT_00894594) != 0) {
      return uVar5;
    }
  }
  else {
    uVar5 = CONCAT22(extraout_var,
                     (ushort)(fVar1 < _DAT_00890968) << 8 |
                     (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                     (ushort)(fVar1 == _DAT_00890968) << 0xe);
    if (fVar1 < _DAT_00890968 != 0 || (fVar1 == _DAT_00890968) != 0) goto LAB_0048047b;
  }
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                   (ushort)(local_104 < _DAT_00890968) << 8 |
                   (ushort)(NAN(local_104) || NAN(_DAT_00890968)) << 10 |
                   (ushort)(local_104 == _DAT_00890968) << 0xe);
  if (local_104 < _DAT_00890968 || (local_104 == _DAT_00890968) != 0) {
    return uVar5;
  }
LAB_0048047b:
  return CONCAT31((int3)(uVar5 >> 8),1);
}

