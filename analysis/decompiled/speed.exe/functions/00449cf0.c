/* speed.exe 00449cf0 FUN_00449cf0; analysis pseudocode, not buildable source.
 * calls 0073d040 FUN_0073d040
 * calls 004467a0 FUN_004467a0
 * calls 006c0a30 FUN_006c0a30
 * calls 00446510 FUN_00446510
 * calls 0045f3c0 FUN_0045f3c0
 * calls 006be750 FUN_006be750
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00449cf0(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x20) == 3) {
    FUN_004467a0(DAT_008ec30c,&local_f0);
    FUN_0073d040(&local_f0);
  }
  if ((((DAT_008ec2b8 != 0) && (*(char *)(param_1 + 0x1a) != '\0')) && (param_3 == 0)) &&
     ((DAT_0090d9e8 != 0 && (*(int *)(param_1 + 0x20) != -1)))) {
    FUN_004467a0(*(undefined4 *)(&DAT_008ec2c0 + *(int *)(param_1 + 0x20) * 0x14),&local_e0);
    FUN_004467a0(*(undefined4 *)(&DAT_008ec2c4 + *(int *)(param_1 + 0x20) * 0x14),&local_f0);
    local_100 = 1.0;
    local_fc = 0.0;
    if ((local_e0 != local_f0) || (local_dc != local_ec)) {
      local_100 = local_e0 - local_f0;
      local_fc = local_dc - local_ec;
      FUN_0045f3c0(&local_100,&local_100);
    }
    fVar1 = -local_fc;
    fVar2 = local_100 * _DAT_008910f0;
    local_fc = local_fc * _DAT_008910f0;
    fVar1 = fVar1 * _DAT_00893710;
    local_100 = local_100 * _DAT_00893710;
    local_c8 = fVar1 + fVar2 + local_e0;
    local_c4 = local_fc + local_100 + local_dc;
    local_b8 = (fVar2 - fVar1) + local_e0;
    local_b4 = (local_fc - local_100) + local_dc;
    local_c0 = (local_f0 - fVar2) + fVar1;
    local_bc = (local_ec - local_fc) + local_100;
    local_f8 = local_f0 - (fVar1 + fVar2);
    local_f4 = local_ec - (local_100 + local_fc);
    local_100 = fVar2;
    FUN_006c0a30();
    iVar3 = FUN_00446510();
    local_a8 = *(float *)(iVar3 + 0x38) + _DAT_00890dc4;
    local_b0 = local_b8;
    local_ac = local_b4;
    local_9c = local_c4;
    local_a0 = local_c8;
    local_90 = local_c0;
    local_80 = local_f8;
    local_8c = local_bc;
    local_7c = local_f4;
    local_30 = 0x80808080;
    local_2c = 0x80808080;
    local_28 = 0x80808080;
    local_24 = 0x80808080;
    local_70 = 0;
    local_68 = 0x3f800000;
    local_58 = 0;
    local_60 = 0x3f800000;
    local_6c = 0;
    local_64 = 0;
    local_54 = 0x3f800000;
    local_5c = 0x3f800000;
    local_98 = local_a8;
    local_88 = local_a8;
    local_78 = local_a8;
    FUN_006be750(&local_b0,DAT_0090d9e8,&DAT_00987ab0,0,0);
  }
  return;
}

